#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector< vector<int> > v(10, vector <int>(10, 0));
    
    cout << "original" << endl;
    for(vector< vector<int> >::iterator iter = v.begin(); iter!= v.end(); ++iter) {
        for(vector<int>::iterator t_iter = iter->begin(); t_iter != iter->end(); ++t_iter) {
            printf("%d\t", *t_iter);
        }
        cout << endl;
    }

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            v[i][j] = i*j;
        }
    }

    cout << "apply" << endl;
    for(vector< vector<int> >::iterator iter = v.begin(); iter!= v.end(); ++iter) {
        for(vector<int>::iterator t_iter = iter->begin(); t_iter != iter->end(); ++t_iter) {
            printf("%d\t", *t_iter);
        }
        cout << endl;
    }

    return 0;
}