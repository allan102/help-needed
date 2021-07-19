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


    x1 = -b + ((b*b)- ((4*a)* c) / (b*b) - ((4*a) * c)) / (2*a)) ;

    x2 = -b - ((b*b)- ((4*a)* c) / (b*b) - ((4*a) * c)) / (2*a)) ;
    
  /*  x1 = x1 * power ? 
        
     x2 = sqrt? 
        
     or visa versa for x1 and x2  
     
     and or visa versa for sums (line 27 and 29 being plus or negative starts*/



    cout << " x1 equals: " << x1 << endl;

    cout << " x2 equals: " << x2 << endl;







    return 0;
}

