# include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i = 1 ; i<=a; i++)
    {
        for(int j = 1; j<=2*i ; j=j+2)
        {
            
                cout<<j<<' ';
            
        }
        cout<<'\n';
    }
}