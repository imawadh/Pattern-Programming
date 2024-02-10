# include <iostream>
using namespace std;
int main()
{
    char a[1];
    cout<<"Enter the Character : ";
    cin>>a;
    int b,c;
    cout<<"Enter number of lines of row : ";
    cin>>b;
    cout<<"Enter number of lines of col : ";
    cin>>c;
    for(int i = 0 ; i<c ; i++)
    {
        for(int j = 0; j<b ; j++)
        {
            cout<<a<<' ';
        }
        cout<<'\n';
    }

    return 0;
}