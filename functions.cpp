#include <iostream>
using namespace std;

int maxim(int a, int b, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
    // return a * b * c;
}

int main()
{
    cout << maxim(10, 11) << '\n';
    cout << maxim(10, 11, 12) << '\n';
    return 0;
}

///////////////////////----------------------------////////////////////

// #include <iostream>
// using namespace std;

// int sum(int a, int b, int c = 0)
// {
//     return a + b + c;
// }

// int main()
// {
//     cout << sum(10, 15) << '\n';
//     cout << sum(10, 15, 20) << '\n';
//     return 0;
// }

////////////////////-------------------------////////////////////

// #include <iostream>
// using namespace std;

// template <class V>
// V maxim(V a, V b)
// {
//     return a > b ? a : b;
// }

// // both argument should be same a and b

// int main()
// {
//     cout << maxim(14, 140) << '\n';
//     cout << maxim(0.4f, 1.4f) << '\n';
//     // cout << maxim(0.4, 1.4f) << '\n';
//     return 0;
// }

/////////////-----------------------/////////////

// #include <iostream>
// using namespace std;

// template <class T>
// T maxmum( T a, T b){
//     if( a>b ) return a;
//     else if( a=b ) return a;
//     else return b;
// }
// // we have to take the return value in some data type
// int main(){
//     int x=10,y=15;
//     int c = maxmum(10,15);
//     cout << c << " " << maxmum(10,15) << '\n';
// }

////////////////-----------------------------//////////////

// #include <iostream>
// using namespace std;

// int Min(int a, int b){
//     if( a>b ){ return b; }
//     else{ return a;}
// }
// int Min(int a, int b, int c){
//     if( a<b && a<c ){ return a; }
//     else if( b<c ){ return b; }
//     else{ return c;}
// }
// float Min(float a, float b){
//     if( a>b ){ return b; }
//     else{ return a;}
// }

// int main(){
//     cout<<Min(10,5)<<'\n';
//     cout<<Min(12,7,9)<<'\n';
//     cout<<Min(18.0f,9.0f)<<'\n';
// }

////////////////---------------------///////////////

// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     return a+b;
// }
// float sum(float a, float b){
//     return a+b;
// }
// int sum(int a, int b, int c){
//     return a+b+c;
// }

// // overloading includes on changing the data type( parameters type) and
// // the number of parameters but not on the return type and in all cases
// // the name of the function will stay same

// // there can be one overload at a time

// int main(){
//     cout << sum(10,5) << '\n';
//     cout << sum(12.9f,8.3f) << '\n';
//     cout << sum(10,20,30) << '\n';
// }

/////////////////------------------/////////////////////

// #include <iostream>
// #include <math.h>

// using namespace std;

// int power(int a, int b){
//     return pow( a,b );
// }

// int main(){
//     int x=2,y=4,z;
//     z = power( 2,4 );
//     cout << z << '\n';
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int max(int x,int y,int z){
//     if( x>=y && x>=z ){ return x;}
//     else if( y>=z ){ return y;}
//     else{ return z;}
// }

// int main(){
//     int a=10,b=15,c=20,i;
//     i = max(a,b,c);
//     cout << i <<'\n';
//     return 0;
// }

////////////////////////-----------------//////////////////////////

// #include <iostream>
// using namespace std;

// float sum(float a, float b){
//     float c = a+b;
//     return c;
// }

// int main(){
//     float x=2.2,y=6.9,z;

//     z = sum(x,y);
//     cout << z << '\n';        //main function and other functions can have same
//     return 0;                 //same variable, 2 different function can use variable
// }                             //of same name

//////////////////////---------------------////////////////////

// #include <iostream>
// using namespace std;

// void display(){
//     cout << "Namaste\n";
// }

// int main(){
//     display();
//     return 0;

// }