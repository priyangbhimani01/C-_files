#include <iostream>
#include <string>

using namespace std;

class cwh
{
public:
    string title;
    float rating;

    cwh(string title, float rating)
    {
        this->title = title;
        this->rating = rating;
    }

    virtual void display()
    {
        cout << "it is the base class" << endl;
        cout << '\n';
    }
};

class cwhvideo : public cwh
{
public:
    int videolength;

    cwhvideo(string a, float b, int c) : cwh(a, b)
    {
        videolength = c;
    }

    void display()
    {
        cout << "The title of the video is " << title << endl;
        cout << "The length of the video is around " << videolength << endl;
        cout << "The rating of this video is " << rating << endl;

        cout << '\n';
    }
};

class cwhtext : public cwh
{
public:
    int videotext;

    cwhtext(string a, float b, int c) : cwh(a, b)
    {
        videotext = c;
    }

    void display()
    {
        cout << "The title of the video is " << title << endl;
        cout << "The rating og this video is " << rating << endl;
        cout << "Text of the video is " << videotext << endl;
        cout << '\n';
    }
};

int main()
{

    cwhvideo data1("Djangovideo", 4.6, 18);
    data1.display();
    cwhtext data2("Djangotext", 4.3, 15);
    data2.display();

    cwh *ptr;
    ptr = &data1;
    ptr->display();

    cwh *ptr_base;
    ptr_base = &data2;
    ptr_base->display();
}
