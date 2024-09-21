#include<iostream>
using namespace std;
int main()
{
    int balance,withdraw_amount;
    cout<<"enter withdraw amount:"<<endl;
    cin>>withdraw_amount;
    balance=90000;
    try
    {
        if(withdraw_amount<=balance)
        {
            cout<<"transaction is successful"<<endl;
            balance-=withdraw_amount;
            cout<<"your current balance is:"<<balance<<endl;
        }
        else
        {
            throw"ERROR:Insufficient Balance";
        }
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    return 0;

}
