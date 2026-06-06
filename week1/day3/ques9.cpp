#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter number n: ";
   cin>>n;
   int count=0;
   if(n==1) return 0;
   for(int i=1;i<=n;i++){
     if(n%i==0) count++;
   }

   if(count==2) cout<<n<<" is a prime no.";
   else cout<<n<<" is not a prime no.";

    return 0;
}