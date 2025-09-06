#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
using namespace std;

class NewsFeed {
private:
    // userId -> list of (timestamp, postId)
    unordered_map<int, vector<pair<int, int>>> userPosts;

    // userId -> set of followeeIds
    unordered_map<int, unordered_set<int>> follows;

    int time; // global time to simulate timestamps

public:
    NewsFeed() {
        time = 0;
    }

    // Function to post a tweet
    void postTweet(int userId, int postId) {
        userPosts[userId].emplace_back(time++, postId);
    }

    // Function to follow another user
    void follow(int followerId, int followeeId) {
        follows[followerId].insert(followeeId);
    }

    // Function to unfollow a user
    void unfollow(int followerId, int followeeId) {
        // Can't unfollow yourself
        if (followerId != followeeId) {
            follows[followerId].erase(followeeId);
        }
    }

    // Function to get the latest 10 posts in the user's feed
    vector<int> getNewsFeed(int userId) {
        // Use a max heap to get the most recent posts
        priority_queue<pair<int, int>> maxHeap;

        // Get the list of users userId follows (including themself)
        unordered_set<int> followeeIds = follows[userId];
        followeeIds.insert(userId); // always include self

        // Collect recent posts from followees
        for (int uid : followeeIds) {
            if (userPosts.count(uid)) {
                auto& posts = userPosts[uid];
                int count = 0;
                for (int i = posts.size() - 1; i >= 0 && count < 10; --i, ++count) {
                    maxHeap.push(posts[i]); // push (timestamp, postId)
                }
            }
        }

        // Extract top 10 most recent postIds
        vector<int> feed;
        while (!maxHeap.empty() && feed.size() < 10) {
            feed.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return feed;
    }
};
int main() {
    NewsFeed nf;

    // Sample interaction
    nf.postTweet(1, 101);
    nf.postTweet(1, 102);
    nf.follow(1, 2);
    nf.postTweet(2, 201);
    nf.postTweet(2, 202);

    // Get news feed for user 1
    vector<int> feed = nf.getNewsFeed(1);
    cout << "News Feed for user 1: ";
    for (int post : feed) {
        cout << post << " ";
    }
    cout << endl;

    nf.unfollow(1, 2);

    feed = nf.getNewsFeed(1);
    cout << "News Feed after unfollowing user 2: ";
    for (int post : feed) {
        cout << post << " ";
    }
    cout << endl;

    return 0;
}
