#include<iostream>
using namespace std;
int main()
{
    double num,den,arr[4]={1,2,3,4};
    int index;
    cout<<"enter the index of array:"<<endl;
    cin>>index;
    try
    {
        if(index>=4)
        {
            throw"ERROR:Array Out Of Bound";
        }
        cout<<"enter the numerator:"<<endl;
        cin>>num;
        cout<<"enter the denominator:"<<endl;
        cin>>den;
        if(den==0)
        {
            throw 0;
        }
        arr[index]=num/den;
        cout<<arr[index]<<endl;
    }
    catch(const char *s)
    {
        cout<<s<<endl;
    }
    catch (int num)
    {
        cout<<"ERROR:cannot divide by"<<num<<endl;
    }
    catch(...)
    {
        cout<<"unexpected exception!"<<endl;
    }
    return 0;
}
