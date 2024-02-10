# include <iostream>
using namespace std;
int main()
{
    char a[1];
    cout<<"Enter the Character : ";
    cin>>a;
    int b;
    cout<<"Enter number of lines : ";
    cin>>b;
    for(int i = 0 ; i<b ; i++)
    {
        for(int j = 0; j<b ; j++)
        {
            cout<<a<<' ';
        }
        cout<<'\n';
    }

    return 0;
}