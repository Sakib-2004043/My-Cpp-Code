#include <iostream>//
using namespace std;
class Room
{
    int width,height;
    public: //
    void setv (int w, int h)
    {
        width=w;
        height=h;
    }
};
int main()//
{
    Room R1;
    R1.setv(12,10);//
}
