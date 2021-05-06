#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,m,i,j=1;

// no of players
cin >> n;

 // player score and final rank array
long long int a[n],r[n];

//player score array
 for(i=0;i<n;i++){
  cin>>a[i];
 }

 //No of games Alice played
 cin>>m;

//Alice score array
 long long int b[m];

 //Alice score array
 for(i=0;i<m;i++){
 cin>>b[i];
 }

//set first index to 1
 r[0]=j;

 for(i=1;i<n;i++)
 {

//check current score is equal to previous or not
 if(a[i]==a[i-1])
 {

//maintain same rank
  j=j;
 }
 else
 {

 //increase rank
  j++;
 }

//input rank in rank array
 r[i]=j;
 }

 i=0;

//checking Alice's Rank
 while(m--)
 {

//check scored highest or not
 if(b[i]>=a[0])
 {
 cout<<r[0]<<endl;
 i++;
 }

//checking from last
 else if(b[i]>a[n-1])
 {
 n--;
 m++;
 }

 //match found
 else if(b[i]==a[n-1])
 {
 cout<<r[n-1]<<endl;
 i++;
 }

//last option
 else
 {
 cout<<r[n-1]+1<<endl;
 i++;
  }
 }
 return 0;
}

