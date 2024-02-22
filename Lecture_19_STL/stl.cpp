#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set> 
#include <algorithm>

using namespace std;

int main()
{
    //          STL (Standard Template Library)

    //              Sequence Containers

    //                 1. Array

    // int arr[3] = {1,2,3};
    // array<int,4> a = {1,2,3,4};

    // cout << endl << "Size of array is : " << a.size() << endl;
    // cout << endl << "Empty array : " << a.empty() << endl;
    // cout << endl << "Front : " << a.front() << endl;
    // cout << endl << "Back : " << a.back() << endl;

    //                 2. STL Vector

    // vector<int> v;
    // vector<int> a(5,1);
    // vector<int> last(a);

    // cout << endl << "Printing Vector a " ;
    // for (auto &&i : a)
    // {
    //     cout << i << " ";
    // }

    // cout << endl << "Printing Vector last " ;
    // for (auto &&i : last)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;

    // cout << "Capacity of v -> " << v.capacity() << endl;
    // v.push_back(1);
    // cout << "Capacity of v -> " << v.capacity() << endl;
    // v.push_back(2);
    // cout << "Capacity of v -> " << v.capacity() << endl;
    // v.push_back(3);
    // cout << "Capacity of v -> " << v.capacity() << endl;

    // cout << "Size of v -> " << v.size() << endl;

    // cout << "Front of v -> " << v.front() << endl;

    // cout << "Back of v -> " << v.back() << endl;

    // last.pop_back();
    // cout << "After pop from last vector ";

    // for (auto &&i : last)
    // {
    //     cout << i << " ";
    // }

    // cout << endl << "Printing v ";

    // for (auto &&i : v)
    // {
    //     cout << i << " ";
    // }

    // v.clear();

    // cout << endl << "After clearing v " << v.size() << endl;

    //                 3. Deque

    // deque<int> d;

    // d.push_front(1);
    // d.push_back(2);

    // cout << "Printing first index element : " << d.at(0) << endl;

    // cout << "Front " << d.front() << endl;
    // cout << "Back " << d.back() << endl;

    // cout << "Empty " << d.empty() << endl;

    // d.erase(d.begin(),d.begin()+1);

    // cout << "Size " << d.size() << endl;

    // for (auto &&i : d)
    // {
    //     cout << i << endl;
    // }

    //              4. List

    // list<int> l;
    // list<int> l1(5, 100);

    // l.push_front(1);
    // l.push_back(2);

    // cout << endl
    //      << "Printing l " << endl;

    // for (auto &&i : l)
    // {
    //     cout << i << " ";
    // }

    // cout << endl
    //      << "Printing l1 " << endl;

    // for (auto &&i : l1)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;

    // cout << "Size of l " << l.size() << endl;
    // l.erase(l.begin());
    // cout << endl
    //      << "Printing l " << endl;

    // for (auto &&i : l)
    // {
    //     cout << i << " ";
    // }

    //          Adaptive Containers

    //              5. Stack

    // stack<string> s;

    // s.push("Asad");
    // s.push("Fahad");
    // s.push("Zia");

    // cout << "Top Element -> " << s.top() << endl;
    // cout << "Size -> " << s.size() << endl;
    // cout << "Empty -> "  << s.empty() << endl;
    // s.pop();
    // cout << "Pop -> " << endl;

    //             6. Queue

    // queue<string> q;

    // q.push("Zia");
    // q.push("Asad");
    // q.push("Fahad");

    // cout << "First Element -> " << q.front() << endl;
    // cout << "Last Element -> " << q.back() << endl;

    // q.pop();

    // cout << "First Element -> " << q.front() << endl;
    // cout << "Size of queue -> " << q.size() << endl;
    
    //              7 - Priority Queue

    // priority_queue<int> maxi;
    // priority_queue<int,vector<int>,greater<int>> mini;

    // maxi.push(0);
    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);

    // int n = maxi.size();
    // cout << endl << "Printing Maxi " << endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout << maxi.top() << " ";
    //     maxi.pop();
        
    // }

    // mini.push(0);
    // mini.push(1);
    // mini.push(2);
    // mini.push(3);

    // int m = mini.size();
    // cout << endl << "Printing Mini " << endl;
    // for (int i=0;i<n;i++)
    // {
    //     cout << mini.top() << " ";
    //     mini.pop();

    // }

    //             8 - Set

    // set<int> s;

    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(1);
    // s.insert(1);
    // s.insert(0);
    // s.insert(0);
    // s.insert(0);
    // s.insert(0);
    // s.insert(2);
    // s.insert(2);

    // cout << endl << "Printing s " << endl;

    // for (auto &&i : s)
    // {
    //     cout << i << " ";
    // }
    
    // cout << endl;

    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);

    // cout << endl;

    // for (auto &&i : s)
    // {
    //     cout << i << " ";
    // }

    // cout <<endl << "-5 present or not " << s.count(-5) << endl;
    
    // set<int>::iterator itr = s.find(5);

    // for(auto it=itr; it!=s.end();it++){
    //     cout << *it << " ";
    // }cout << endl;


    //           Algorithms

    // vector<int> v;

    // v.push_back(9);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(10);
    // v.push_back(0);

    // cout << endl << "Binary Search ->  " << binary_search(v.begin(),v.end(),3) << endl;

    // cout << "Lower Bound -> " << lower_bound(v.begin(),v.end(),6) - v.begin() << endl;

    // cout << "Upper Bound -> " << upper_bound(v.begin(),v.end(),6) - v.begin() << endl;

    // int a = 3;
    // int b = 6;
    // cout << "Max -> " << max(a,b) << endl;
    // cout << "Min -> " << min(a,b) << endl;

    // swap(a,b);

    // cout << "a -> " << a << endl;
    // cout << "b -> " << b << endl;

    // string abcd = "abcd";

    // reverse(abcd.begin(),abcd.end());

    // cout << "abce reverse -> " << abcd << endl;

    // rotate(v.begin(),v.begin()+1,v.end());

    // for (auto &&i : v)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;

    // sort(v.begin(),v.end());

    // for (auto &&i : v)
    // {
    //     cout << i << " ";
    // }
    

}