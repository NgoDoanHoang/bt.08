#include <iostream>
#include <cstring>

using namespace std;

void reverse (const char *a)
{
    char *x=new char;
    int c =0;
    while (a[c] != '\0')        // dem so ki tu
    {
        c++;
    }

    for (int i=0;i<c;i++)       //sao chep
    {
        *(x+i)=*(a+i);
    }
    *(x+c)='\0';
    for (int i=c-1; i>=0;i--)       //in ngc
    {
        cout << *(x+i);
    }
}

void delete_char( const char *a, char x )
{
    int c =0;
    while (a[c] != '\0')        // dem so ki tu
    {
        c++;
    }

    char *z=new char;           //khai bao moi cho de
    int zz=0;

    for (int i=0;i<c;i++)           //neu khac thi gan
    {
        if (*(a+i)!=x)
        {
            *(z+zz)=*(a+i);
            zz++;
        }
    }
    *(z+zz)='\0';
    cout << z;
}

void padright( const char *a, int n)
{
    int c =0;
    while (a[c] != '\0')        // dem so ki tu
    {
        c++;
    }
    char *s=new char;
    for (int i=0;i<c;i++)
    {
        *(s+i)=*(a+i);
    }
    *(s+c)='\0';

    if (c<n)
    {
        for (int i=c;i<n;i++)
        {
            *(s+i)='_';
        }
    }
    cout << s;
}


int main()
{
    char s[1000];
    cin.getline(s,1000);
    reverse(s);
    cout << endl <<"nhap chu can xoa" << endl;
    char c;
    cin >> c;
    delete_char(s,c);
    int n;
    cin >> n;
    padright(s,n);
}
