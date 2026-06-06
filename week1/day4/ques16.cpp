#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int start,end;
    cout<<"enter start: ";
    cin>>start;
    cout<<"enter end: ";
    cin>>end;
    
    for(int i=start;i<=end;i++){
        int n1=i;
        int n2=i;
        int arms=0;
        int count=0;

        while(n1>0){
            count++;
            n1=n1/10;
        }
        while(n2>0){
            int digit=n2%10;
            arms=arms+ pow(digit,count);
            n2=n2/10;
        }

        if(arms==i){
            cout<<i<<" ";
        }
        
    }
    return 0;
}
