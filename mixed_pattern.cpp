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
            if(i%2==0)
            {
                cout<<char(b)<<' ';
                b++;
            }
            else
            {
                cout<<j<<' ';
            }
        }
        cout<<'\n';
        b = 65;
    }
}