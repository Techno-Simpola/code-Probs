#include <iostream>
#include <map>
using namespace std;

int main() {
//operates in ordered way of the key
    map<int, string> m;

    m[1] = "Rathore";
    m[10] = "Singh";
    m[2] = "Ashutosh";
    m[11] = "Kumar";

    m.insert({5, "bheem"});
    
    for(auto &it: m){
        cout << it.first << " " << it.second << endl;
     }

    cout << "finding 13 = " << m.count(13) << endl;

    cout << "Before erase" << endl;
    m.erase(11);
    cout << "After erase " << endl;

    for(auto &it: m){
        cout << it.first << " " << it.second << endl;
     }

    cout << endl;

    auto it = m.find(5);

    for(auto i = it; i!=m.end(); i++){
        cout << (*i).first<< endl;
    }
}