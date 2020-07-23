#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<=n;i++)
    {

        for(int j=i;j<=n;j++)
        {
            while(k!=((2*i)))
            {
                cout<<" ";
                k++;
            }
            cout<<"*";
        }
        cout<<endl;k=0;
    }
}
