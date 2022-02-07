// ALL THESE MEMBERS ARE HERE TO ILLUSTRATE THE PROPERTIES OF CLASS


#include <iostream>
using namespace std;

class Rectangle
{
    // private by default
    
    int length , breadth;

    public:
        Rectangle()
        {
            length = 0;
            breadth = 0;
        }
        Rectangle(int l , int b)
        {
            length = l;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
        int perimeter()
        {
            return 2*(length + breadth);
        }
        void SetLength(int l)
        {
            length = l;
        }
        void SetBreadth(int b)
        {
            breadth = b;
        }
        int getLength(int l)
        {
            return length;
        }
        int getBreadth(int b)
        {
            return breadth;
        }

        ~Rectangle()
        {
            cout << "Destructor";
        }
};

int main()
{
    Rectangle r(10 , 5);

    cout << "Area is " << r.area()<< endl << "Perimeter is " << r.perimeter()<< endl;
   
    return 0;
}