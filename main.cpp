#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a;
    float b;
    float c;

    float x1;
    float x2;


    cout << " enter value for a: " << endl;
    cin >> a;

    cout << " enter value for b: " << endl;
    cin >> b;


    cout << " enter value for c: " << endl;
    cin >> c;


    x1 = -a + ((b*b)- (4*a)* c / (b*b) -(4*a) * c) ;

    x2 = -a - ((b*b)- (4*a)* c / (b*b) - (4*a) * c);



    cout << " x1 equals: " << x1 << endl;

    cout << " x2 equals: " << x2 << endl;







    return 0;
}

