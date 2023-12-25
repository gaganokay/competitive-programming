#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "****** VECTOR ******" << endl;
    // 1. VECTOR (Dynamic Sized Array)
    vector<int> v;

    // inserting elements from back-side
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    // size of vector
    cout << v.size() << endl;

    // accessing vector elements using index
    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    // removing element from back-side
    v.pop_back();
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;

    v.push_back(100);
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;

    // empty the vector
    v.clear();
    cout << v.size() << endl;

    // declaring array with size & initalizing equal values
    vector<int> v1(5);  // {0,0,0,0,0}
    vector<int> v2(5, 7);  // {7,7,7,7,7}


    cout << endl << "****** SORT ******" << endl;
    // 2. SORT : TC = O(NlogN)
    // sort(ptr to 1st elememt, ptr to last element + 1)

    // sort array
    int arr[] = {5, 4, 3, 2, 1};
    sort(arr, arr + 5);
    for(int i = 0; i < 5; i++) cout << arr[i] << " "; cout << endl;

    // sort vector
    vector<int> vs {5, 4, 3, 2, 1};
    sort(vs.begin(), vs.end());
    for(int i = 0; i < 5; i++) cout << vs[i] << " "; cout << endl;

    // sort string
    string s = "gagan";
    sort(s.begin(), s.end());
    for(int i = 0; i < 5; i++) cout << s[i] << " "; cout << endl;


    cout << endl << "****** PAIR ******" << endl;
    // 3. PAIR (composite datatype : store two datatypes)

    // initializing pair
    pair<int, string> p = {4, "Gagandeep"};
    cout << p.first << " " << p.second << endl;

    // update pair values
    p.first = 2016;
    p.second = "Singh";
    cout << p.first << " " << p.second << endl;


    cout << endl << "****** ITERATORS ******" << endl;
    // 4. ITERATORS
    vector<int> vt = {1,2,3,4,5};

    // storing vector in a pointer (it will store the iterator of first element of the vector)
    vector<int>::iterator it = vt.begin();
    // auto it = vt.begin();

    cout << *it << endl;

    it++;
    cout << *it << endl;

    it--;
    cout << *it << endl;

    cout << *(it + 3) << endl;


    cout << endl << "****** SET ******" << endl;
    // 4. SET (unique copy in sorted order)
    // - operations : s.insert(x), s.erase(x), s.count(x), s.clear(), s.size()
    set<int> st;

    // inserting elements
    st.insert(5);
    st.insert(3);
    st.insert(4);

    // count elements
    cout << st.count(5) << endl;
    cout << st.count(3) << endl;
    cout << st.count(4) << endl;
    cout << st.count(100) << endl;

    // erase elements
    st.erase(5);
    cout << st.count(5) << endl;

    // - can't access set elements using indxex/[], use iterators.
    auto itt = st.begin();
    cout << *itt << endl;

    itt++;
    cout << *itt << endl;

    // - functions of set iterators :
    // - st.find(x), st.lower_bound(x), st.upper_bound(x), st.erase(it);

    st.insert(1); 
    cout << *st.begin() << endl;

    // erase smallest element of set
    st.erase(st.begin());
    cout << *st.begin() << endl;

    // if(s.find(x) == s.end()) --> NOT FOUND
    // if(s.count(x) == 0) --> NOT FOUND


    cout << endl << "****** MAP ******" << endl;
    // 5. MAP (store key and value) - mainly used in counting frequency
    // - map is sorted in the lexicographical order of keys 
    // - if we try to acces a key which isn't present in the map then, it initialize the key with 0 value 
    map<string,int> mp;

    // adding key-value
    mp["hello"] = 1;
    mp["world"] = 2;

    // size of map 
    cout << mp.size() << endl;

    // accessing map
    cout << mp["hello"] << " " << mp["world"] << endl;

    // clear map
    mp.clear();


    cout << endl << "****** ITERATING CONTAINERS ******" << endl;
    // 6. ITERATING CONTAINERS
    // for(auto it = s.begin(); it != s.end(); it++) { use *it }

    // ShortHand
    // - Vector : for(int i : vector_name) { use i }
    // - Set : for(int i : set_name) { use i }
    // - Map : for(pair<int,int> i : map_name) { use i.first, i.second }

    cout << "Vector : "; for(int i : v) cout << i << " "; cout << endl;
    cout << "Set : "; for(int i : st) cout << i << " "; cout << endl;
    cout << "Map : "; for(pair<string,int> i : mp) cout << i.first << " " << i.second << " | "; cout << endl;

    return 0;
}

// Slide Link - https://docs.google.com/presentation/d/1MA06UJP1fZzRIk08MshIZCJUDBOSB1KJDSYN87_W2A4/edit#slide=id.p