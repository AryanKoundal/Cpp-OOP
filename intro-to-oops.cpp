#include <iostream>
using namespace std;

class rectangle
{
public:
    int length, breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r;
    rectangle *p = new rectangle();
    p->length = 15;
    p->breadth = 10;
    cout << p->area() << '\n';
    return 0;
}

////////////////////////////--------------------------////////////////////////

// #include <iostream>
// using namespace std;

// class rectangle
// {
// public:
//     int length;
//     int breadth;

//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2 * (length + breadth);
//     }
// };

// int main()
// {
//     rectangle r;
//     rectangle *p;
//     p = &r;
//     p->length = 15;
//     p->breadth = 10;
//     cout << p->area() << '\n';
// }

//////////////////////////////------------------------------/////////////////////////////

// #include <iostream>
// using namespace std;

// class rectangle
// {
// public:
//     int length;
//     int breadth;

//     int area()
//     {
//         return length * breadth;
//     }

//     int perimeter()
//     {
//         return 2 * (length + breadth);
//     }
// };

// int main()
// {
//     rectangle r1, r2;

//     cin >> r1.length >> r1.breadth;
//     cout << r1.length << '\n';
//     cout << r1.breadth << '\n';
//     cout << r1.area() << '\n';
//     cout << r1.perimeter() << '\n';

//     return 0;
// }