#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli excelColumNum(string &str){

    lli mul = 1;
    lli sum = 0;
    int n = str.length();

    for(int i = 0; i < str.length(); i++){

        char ch = str[i];
        mul = (ch - 64) * pow(26, n - 1 );
        sum = sum + mul;
        n--;

    }

    // sum = sum * (str[str.length()-1] - 64);

    return sum; 

}

int main()
{      

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    string str = "CDA";
    lli ans = excelColumNum(str);

    cout << ans << endl;
    return 0;
}