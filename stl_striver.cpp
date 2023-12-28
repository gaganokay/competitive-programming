#include <bits/stdc++.h>
using namespace std;

/*
    1. Algorithms
    2. Containers
    3. Functions
    4. Iterators
*/

// PAIRS
void explainPair() {
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    // nested pair
    pair<int, pair<int, int>> p1 = {5, {15, 20}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;

    // array of pairs
    pair<int, int> arr[] = { {1, 2}, {10, 20}, {100, 200} };
    cout << arr[1].second << endl;
}

// VECTOR (Dynamic-Sized Array)
void explainVector() {
    vector<int> v;

    // inserting elements
    v.push_back(1);  // efficient
    v.emplace_back(2);  // faster

    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // vector of pairs
    vector<pair<int,int>> v1;
    v1.push_back({10, 20});  // push_back - need to use {}
    v1.emplace_back(30, 40);  // emplace_back -  no need to use {}, automatically assumes the values as a pair

    // initializing vector with size of 5
    vector<int> v2(5);  // {0,0,0,0,0}

    // intializing vector with size of 5 having value 7
    vector<int> v3(5, 7);   // {7,7,7,7,7}

    // duplicate a vector (creates a new copy)
    vector<int> v4(v);  // v4 = v

    // iterators in vector (stores the address of vector)
    vector<int>::iterator it = v.begin();  // stores the address of first element of vector
    // auto it = v.begin();  // short-hand

    cout << *it << endl;

    // +/- on iterators
    it = it + 2;
    cout << *it << endl;

    it++;
    cout << *it << endl;

    it--;
    cout << *it << endl;

    // end and reverse iterators
    auto it1 = v.end();  // end() points to a memory location right after the last element of vector
    auto it2 = v.rend();  // rend() points to a memory location just before the first element of vector
    auto it3 = v.rbegin();  // rbegin() points to the memory location of last element of vector

    // element at index i
    cout << v[0] << " " << v.at(0) << endl;

    // element at the end/back
    cout << v.back() << endl;

    // traversing vector using iterators
    for(auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    } cout << endl;

    // for-each loop
    for(auto i : v) {
        cout << i << " ";
    } cout << endl;

    // erase function
    v.erase(v.begin() + 2);  // {1,2,3,4,5} -> {1,2,4,5}
    v.erase(v.begin(), v.begin() + 2);  // {1,2,4,5} -> {4,5}

    // insert function
    v.insert(v.begin(), 10);  // {4,5} -> {10,4,5}
    v.insert(v.begin() + 1, 2, 7);  // {10,4,5} -> {10,7,7,4,5}

    // copy a part of vector using insert
    vector<int> copy(2, 50);  // {50,50}
    copy.insert(copy.begin() + 1, v.begin() + 2, v.end());  // {50,7,4,5,50}

    // remove/pop last element
    copy.pop_back();

    // swap two vectors
    v.swap(copy);

    // clear/empty vector
    v.clear();

    // return 1/0 if the vector is empty or not
    cout << v.empty() << endl;
    cout << copy.empty() << endl;
}

// LIST (similar to vector : provide front operations also)
void explainList() {
    list<int> l;

    // add elements from back
    l.push_back(1);
    l.emplace_back(2);

    // add elements from front
    l.push_front(10);
    l.emplace_front(20);

    for(auto i : l) cout << i << " "; cout << endl;

    // rest functions are same as vector.
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// DEQUE (similar to vector & list)
void explainDeque() {
    deque<int> dq;

    // adding elements
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(10);
    dq.emplace_front(20);
    
    for(auto i : dq) cout << i << " "; cout << endl;

    // removing elements 
    dq.pop_back();
    dq.pop_front();

    for(auto i : dq) cout << i << " "; cout << endl;

    // acceesing elements
    cout << dq.at(1) << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// STACK (LIFO : Last In First Out)
void explainStack() {
    stack<int> st;

    // adding elements at top
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    
    // top() - access last element inserted
    cout << st.top() << endl;

    // pop() - remove last element inserted
    st.pop();

    // size() - returns size of stack
    cout << st.size() << endl;

    // empty() - returns 1/0 if stack is empty or not
    cout << st.empty() << endl;

    // swap() - swap two stacks
    stack<int> st1, st2;
    st1.swap(st2);
}

// QUEUE (FIFO : First In First Out)
void explainQueue() {
    queue<int> q;

    // adding elements from back
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    // +/- with queue elements
    q.back() += 4;

    // back() - last inserted element of queue
    cout << q.back() << endl;

    // front() - first inserted element of queue
    cout << q.front() << endl;

    // same functions as stack 
    // size, swap, empty
}

// PRIORITY QUEUE (element with highest priority stays on the top)
void explainPQ() {
    // by default : largest element stays on the top
    priority_queue<int> pq;

    // inserting elements in the PQ 
    pq.push(2);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.emplace(3);

    cout << pq.top() << endl;

    // remove the top element
    pq.pop();

    // rest functions are same as others
    // size, swap, empty 

    // MINIMUM HEAP : creating PQ where, smallest element stays on the top
    priority_queue<int, vector<int>, greater<int>> mh;
    mh.push(10);
    mh.push(50);
    mh.push(30);
    mh.push(20);
    mh.emplace(40);

    cout << mh.top() << endl;
    mh.pop();
}

// SET (store unique elements in sorted order)
void explainSet() {
    set<int> st;

    // insert elements in set 
    st.insert(1);
    st.emplace(5);
    st.insert(3);
    st.insert(4);
    st.insert(2);
    
    // iterators in set
    auto it = st.find(5);  // returns the iterator of element 5
    auto itt = st.find(10);  // if the element isn't present then, it'll return the end() iterator (iterator just after the last element)

    // erase/remove element
    st.erase(3);

    // count the occurences of element x
    int count = st.count(5);

    // erase between two iterators [it1, it2)
    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1, it2);

    for(auto i : st) cout << i << " "; cout << endl;
}

// MULTISET (same as Set but, stores duplicate elements)
void explainMultiset() {
    multiset<int> ms;

    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);

    // all 2's will be erased 
    ms.erase(2);

    // count occurences of x 
    int count = ms.count(3);
    cout << count << endl;

    // only single 3 will be erased
    ms.erase(ms.find(3));

    for(auto i : ms) cout << i << " "; cout << endl;

    // rest all functions are same as set
}

// UNORDERED SET (same as set but, doesn't stores in order)
void explainUS() {
    unordered_set<int> us;

    us.insert(1);
    us.emplace(5);
    us.insert(3);
    us.insert(4);
    us.insert(2);

    for(auto i : us) cout << i << " "; cout << endl;

    // all functions are same as set
}

// MAP (stores key-value & they can be of any datatype)
// - it stores unique keys in sorted order.
void explainMap() {
    map<int, int> mp;
    map<int, pair<int,int>> mp1;
    map<string, double> mp2;

    mp[3] = 300;
    mp[1] = 100;
    mp[2] = 200;

    for(auto i : mp) cout << i.first << " " << i.second << endl;

    cout << mp[1] << endl;
    cout << mp[2] << endl;
    cout << mp[3] << endl;
}

// MULTIMAP (same as map but, it can store duplicate keys)
// - mp[key] can't be used here because of duplicate keys
void explainMultimap() {
}

// UNORDERED MAP (same as map but, doesn't store in sorted order)
void explainUM() {
}

int main() {
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiset();
    // explainUS();
    // explainMap();
    // explainMultimap();
    // explainUM();

    return 0;
}