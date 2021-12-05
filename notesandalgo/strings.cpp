#include <bits/stdc++.h> 
#include <iostream>
#define pb push_back
#define mp make_pair
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
// string test = "abcde";
// cout << test.substr(0, 1) << endl;



// string a, b;
// cin >> a; //input for string will stop after a space
// getline(cin, b); //this will read input for the entire line, even after spaces until it is the next line
// cout << a << endl;
// cout << b<< endl;



// //SPLITTING STRINGs

// char c[] = {"Hello World There!"};
// char* piece = strtok(c, " ");
// while (piece != NULL) {
//     printf("%s\n", piece);
//     piece = strtok(NULL, " ");
// }


//THIS IS A MUCH BETTER WAY!!!!!!!!! USE STRINGSTREAM
string d;
getline(cin, d);
stringstream ss(d);
string word;
while (ss>>word) {
    cout << word << endl;
}


// string findlength = "abcdef";
// cout<<(char)strlen(findlength)<<endl;


return 0;
}