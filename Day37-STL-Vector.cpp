/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // // create vector,declare
    // vector<int> v;
    // vector<int> v1(5, 1); // initialize

    // // size() and capacity()
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // push_back()
    // v.push_back(2);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
    // v.push_back(3);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.size() << endl;
    // cout << v.capacity() << endl;

    // // update value
    // v[1] = 5;
    // cout << v1.size() << endl;
    // cout << v1.capacity() << endl;
    // v1.push_back(8);
    // cout << v1.size() << endl;
    // cout << v1.capacity() << endl;

    // vector<int> v3 = {1, 2, 3, 4, 5};

    // Deleting Value form vector
    // vector<int> vnew;
    // vnew.push_back(4);
    // vnew.push_back(41);
    // vnew.push_back(14);
    // vnew.push_back(42);
    // vnew.push_back(84);
    // cout << vnew.size() << endl;
    // cout << vnew.capacity() << endl;
    // // pop_back()
    // vnew.pop_back();
    // cout << vnew.size() << endl;
    // cout << vnew.capacity() << endl;

    // // erase()
    // vnew.erase(vnew.begin() + 1);
    // cout << vnew.size() << endl;
    // cout << vnew.capacity() << endl;
    // for (int i = 0; i < vnew.size(); i++)
    //     cout << vnew[i] << " ";
    // cout << endl;
    // // insert()
    // vnew.insert(vnew.begin() + 1, 50);
    // for (int i = 0; i < vnew.size(); i++)
    //     cout << vnew[i] << " ";
    // cout << endl;

    // vnew[1] = 37;
    // for (int i = 0; i < vnew.size(); i++)
    //     cout << vnew[i] << " ";
    // cout << endl;

    // // clear()
    // vnew.clear();
    // cout << vnew.size() << endl;
    // cout << vnew.capacity() << endl;

    // vector<int> arr;
    // arr.push_back(2);
    // arr.push_back(12);
    // arr.push_back(21);
    // arr.push_back(122);
    // // printing First Element of Vector
    // cout << arr[0] << endl;
    // // front()
    // cout << arr.front() << endl;
    // // printing Last Element of vector
    // cout << arr[arr.size() - 1] << endl;
    // // back()
    // cout << arr.back() << endl;

    // vector<int> z;
    // // Copying Value of one vector to another vector
    // z = arr;
    // cout << z.size() << endl;

    // // Iteration over a vector
    // for (auto it = arr.begin(); it != arr.end(); it++)
    //     cout << *it << " ";
    // cout << endl;
    // // alternatively
    // for (auto i : arr)
    //     cout << i << " ";
    // cout << endl;

    // sorting vector
    vector<int> ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);
    vector<int> ans1;
    ans1 = ans;
    // increasing order
    sort(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    // // decreasing order
    // sort(ans.begin(), ans.end(), greater<int>());
    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";
    // cout << endl;
    // // alternatively
    // sort(ans1.rbegin(), ans1.rend());
    // for (int i = 0; i < ans1.size(); i++)
    //     cout << ans1[i] << " ";
    // cout << endl;

    // search --> Binary Search
    // binary_search()
    cout << binary_search(ans.begin(), ans.end(), 54) << endl;
    cout << binary_search(ans.begin(), ans.end(), 55) << endl;
    // find()
    cout << find(ans.begin(), ans.end(), 54) - ans.begin() << endl;
}
*/