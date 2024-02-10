# include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b = 65;
    for(int i = 1 ; i<=a; i++)
    {
        for(int j = 1; j<=i ; j++)
        {
            
                cout<<char(b)<<' ';
                b++;
            
        }
        cout<<'\n';
        b = 65;
    }
}