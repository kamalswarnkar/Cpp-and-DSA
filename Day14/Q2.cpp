#include <iostream>
#include <string>

using namespace std;

class Rectangle{
    private:
        int length;
        int width;
    
    public:
        Rectangle(int l, int w) : length(l), width(w){}
        
        Rectangle(const Rectangle &rect){
            length = rect.length;
            width = rect.width;
        }
        
        void display(){
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
        }
};

int main() {
    int l, w;
    cout << "Lemgth: ";
    cin >> l;
    
    cout << "Width: ";
    cin >> w;
    
    Rectangle rect1(l,w);
    Rectangle rect2 = rect1;
    
    rect1.display();
    rect2.display();
    
    return 0;
}
