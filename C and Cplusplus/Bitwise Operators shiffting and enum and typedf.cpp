#include <iostream>
using namespace std;

enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
// After this line BYTE can be used
// in place of unsigned char
typedef unsigned char BYTE;

int main()
{
    char l=6,m;
    m=l>>1;
    cout<<(int)m<<endl;
    char k=6,a;
    a=k<<1;
    cout<<(int)a<<endl;

    enum week day;
    day = Wed;
    printf("%d\n",day);
    BYTE b1, b2;
    b1 = 'c';
    printf("%c \n", b1);

    return 0;
}
