#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main() {
    //vector
    vector<int> v;

    for(int i=0; i<10; i++) {
        v.push_back(i);
    }

    //반복자를 이용하는 방법
    
    cout << "vector: ";
    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) {
        cout << *iter << " ";
    }

    cout << "\ndelete last number";
    v.pop_back();
    cout << "8->55" << endl;
    v.at(8) = 55;
    
    cout << "vector: ";
    for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter) {
        cout << *iter << " ";
    }

    //list
    list <int> l;
    for(int i=0; i<10; i++) {
        l.push_back(i);
    }
    l.pop_back();
    l.front() = 55;
    cout << "\nlist: ";
    for(list<int>::iterator iter = l.begin(); iter != l.end(); ++iter) {
        cout << *iter << " ";
    }

    //set
    set <int> s;
    for (int i=0; i<10; i++) {
        s.insert(i);
    }
    set<int>::iterator siter;
    siter = s.find(8);
    s.erase(siter);

    s.insert(55);
    cout << "\nset: ";
    for(set<int>::iterator iter = s.begin(); iter != s.end(); ++iter) {
        cout << *iter << " ";
    }
    
    //map
    map<char, int> m;
    char str[20] = "abcdefghij";
    for(int i=0; i<10; i++) {
        m.insert(pair<char, int> (str[i], i));
    }
    m['i'] = 55;
    map<char, int>::iterator miter;
    miter = m.find('j');
    m.erase(miter);
    cout << "\nmap: ";
    for(map<char, int>::iterator iter = m.begin(); iter != m.end(); ++iter) {
        cout << "[ " << iter->first << ", " << iter->second <<"], ";
    }
    return 0;
}