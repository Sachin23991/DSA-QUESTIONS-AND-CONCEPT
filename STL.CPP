#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main(){
    // this is vector decleration and printing the vector now we perform various operations on vector

    /*vector<int> v;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);

    }
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;*/

    /*
    vector<int> v1 = {1,2,3,4,5,6,7,8,9};
    // Size and capacity
    cout<<"Size of the vector "<<v1.size()<<endl;

    cout << "First element: " << v1.front() << endl;
    cout << "Last element: " << v1.back() << endl;
    cout << "Element at index 1: " << v1.at(1) << endl;
    // removing last element 
    v1.pop_back();
    // insert at specific location
    v1.insert(v1.begin()+4,56);
    for(int x: v1){
        cout<<x<<" ";
    }
    cout<<endl;*/



    /* These are the operations of the map 
    // now we are going to use map
    map<string , int> mp;
    mp["Apple"] = 90;
    mp["Mango"] = 80;
    cout<<mp["Apple"];
   // this is the littile example of map
    map<int,string>m;
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";

    // Insert using insert()
    m.insert({4, "Dragonfruit"});

    // Iterating
    for (auto pair : m) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Access
    cout << "Value at key 2: " << m[2] << endl;

    // Check if key exists
    if (m.find(3) != m.end())
        cout << "Key 3 found\n";

    // Erase key
    m.erase(1);

    cout << "After erasing key 1:\n";
    for (auto pair : m) {
        cout << pair.first << " => " << pair.second << endl;
    }*/


    /*
    // Now we will do some operation on set
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    // we would get only 1 2 3 4 because set ignores duplicate

    for(auto i : s){
        cout<<i<<" "; // thats the result the output is 1 2 3 4
    }
    // Erase an element
    s.erase(1);

    cout << "\nAfter erasing 1: ";
    for (int x : s) {
        cout << x << " ";
    }
*/

}