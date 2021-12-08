#include <iostream>
using namespace std;

/*program for this pointer

*/
class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r1(10, 5);
    cout << r1.area() << endl;
}

//////////////////////-----------------------///////////////////////////

// #include <iostream>
// using namespace std;

// /*program for creating default constructors

// */
// class rectangle
// {
// private:
//     int length;
//     int breadth;

// public:
//     rectangle()
//     {
//         length = 1;
//         breadth = 1;
//     }
//     int area()
//     {
//         return length * breadth;
//     }
// };
// int main()
// {
//     rectangle r1;
//     cout << r1.area() << endl;
// }

//////////////////////////------------------------//////////////////////////

// #include <iostream>
// using namespace std;

// class rectangle
// {
// private:
//     int length, breadth;

// public:
//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2 * (length + breadth);
//     }
//     void setLength(int l)
//     {
//         length = l;
//     }
//     void setBreadth(int b)
//     {
//         breadth = b;
//     }
//     int getLength()
//     {
//         return length;
//     }
// };

// int main()
// {
//     rectangle r;
//     r.setLength(10);
//     int b = 20;
//     r.setBreadth(b);
//     cout << r.area() << '\n';
//     return 0;
// }

/////////////////////////----------------------/////////////////////////////

// #include <iostream>
// using namespace std;

// class rectangle
// {
// public:
//     int length, breadth;

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
//     rectangle *p = new rectangle();
//     p->length = 15;
//     p->breadth = 10;
//     cout << p->area() << '\n';
//     return 0;
// }

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