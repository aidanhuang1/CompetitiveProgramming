#include <bits/stdc++.h> 
#include <iostream>
#define INF 2e18
#define MOD 1000000007
using namespace std;
typedef long long ll;
 
int main() {
cin.sync_with_stdio(0);
cin.tie(0);
string input; cin>>input;
int inputlength = input.length();

int Lcount = count(input.begin(), input.end(), 'L');
int Mcount = count(input.begin(), input.end(), 'M');
int Scount = count(input.begin(), input.end(), 'S');

char result[inputlength], difference[inputlength];
fill(result, result+Lcount, 'L');
fill(result+Lcount, result+Lcount+Mcount, 'M');
fill(result+Lcount+Mcount, result+Lcount+Mcount+Scount, 'S');
for (int i=0; i<inputlength; i++) {
    if (result[i]==input[i]) {
        difference[i]='x';
    } else {
        difference[i]=input[i];
    }
}
int s1m =0, s1s = 0;
for (int i=0; i<Lcount; i++) {
    if (difference[i]=='S') s1s++;
    else if (difference[i]=='M') s1m++;
}
int s2l =0, s2s = 0;
for (int i=Lcount; i<Lcount+Mcount; i++) {
    if (difference[i]=='L') s2l++;
    else if (difference[i]=='S') s2s++;
}
int s3m =0, s3l = 0;
for (int i=Lcount+Mcount; i<Lcount+Mcount+Scount; i++) {
    if (difference[i]=='M') s3m++;
    else if (difference[i]=='L') s3l++;
}

int total = 0;
if (s1s>0 && s3l>0) {
    int lowest = min(s1s, s3l);
    total+=lowest;
    s1s-=lowest; s3l-=lowest;
}
if (s1m>0 && s2l>0) {
    int lowest = min(s1m, s2l);
    total+=lowest;
    s1m-=lowest; s2l-=lowest;

}
if (s2s>0 && s3m>0) {   
    int lowest = min(s2s, s3m);
    total+=lowest;
    s2s-=lowest; s3m-=lowest;
}

total += ((s1s+s1m+s2l+s2s+s3l+s3m)/3)*2;
cout<<total<<endl;
return 0;
}