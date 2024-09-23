#include<iostream>
using namespace std;
int main(){
int x=4,y=2;
cout<<(x+y)<<endl;
cout<<x-y<<endl;
cout<<x*y<<endl;
cout<<x/y<<endl;
cout<<x%y<<endl;
cout<<x++<<endl;
cout<<x--<<endl;
cout<<++x<<endl;
cout<<--x<<endl;

cout<<(x>y)<<endl;
cout<<(x>=y)<<endl;
cout<<(x<y)<<endl;
cout<<(x<=y)<<endl;
cout<<(x==y)<<endl;
cout<<(x!=y)<<endl;

x=89;
cout<<x<<endl;
x+=4;
cout<<x<<endl;
x-=3;
cout<<x<<endl;
x*=6;
cout<<x<<endl;
x/=5;
cout<<x<<endl;

cout<<((x>10)&&(x<200))<<endl;
cout<<((x>10)||(x<200))<<endl;
cout<<!(x>10)<<endl;

x>y?cout<<"x is greater than y":cout<<"y is greater than x";
return 0;
}

