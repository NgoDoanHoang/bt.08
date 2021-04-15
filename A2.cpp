
#include <iostream>

using namespace std;

int main( )
{
 char a[4] = "abc";
 for (char *cp = a; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 return 0;
}

// b

#include <iostream>

using namespace std;

int main()
{
    int a[]={ 1, 2, 3, 4, 5 };
    for (int *cp=a; (*cp)!='\0'; cp++)
    {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}

// c

#include <iostream>

using namespace std;

int main()
{
    double a[]={ 1, 2, 3, 4, 5 };
    double *cp=a;
    for (int i=0;i<5;i++)
    {
        cout << (void*)(cp+i) << " : " << *(cp+i) << endl;
    }
    return 0;
}

//d

#include <iostream>

using namespace std;

int main()
{
    double a[]={ 1, 2, 3, 4, 5 };
    double *cp=a;
    for (int i=0;i<5;i++)
    {
        cout << (void*)(cp) << " : " << *(cp) << endl;
        cp+=2;
    }
    return 0;
}
