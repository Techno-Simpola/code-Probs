#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(10);
    v.push_back(12);

    cout << "finding 6 = " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << endl;
    cout << "Upper bound = " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << endl;
    cout << "Lower bound = " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << endl;
    int a = 4, b = 5;
    cout << "max = " << max(a,b) << " " << "min = " << min(a,b) << endl;
    cout << endl;

    swap(a,b);

    cout << "a = " << a << endl;


    string s = "abcd";

    reverse(s.begin(), s.end());

    cout << "reversed string is = " << s << endl;

    //printing rotate array

    rotate(v.begin(), v.begin()+3, v.end());

    cout << "After rotating : " << endl;

    for(int i:v){
        cout << i << " ";
    }
    cout << endl;


    sort(v.begin(), v.end()); //based on intro sort

    cout << "After sorting : " << endl;

    for(int i:v){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}