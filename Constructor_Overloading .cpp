#include <iostream>
#include <iomanip>
using namespace std;


class test
{
int a;
char dummy;
void set_a(int data);

protected:
int b;

public:
int c;
void public_set_a(int data);
void show_a();

test()//constructor phải nằm trong public
{
    this->a = 1;
    this->b = 2;
    this->c = 3;
}
test(char a)
{
    this->a = 255;
    this->b = 2;
    this->c = 3;
}
test(int a,int b =3)
{
    this->a = a;
    this->b = 2;
    this->c = 3;
}

};

void test::set_a(int data)
{
    this->a = data;//(*this).a=data;
}
void test::show_a()
{
    cout<<"a="<<this->a<<endl;
}
void test::public_set_a(int data)
{
    //gọi hàm private
    this->set_a(data);//dùng con trỏ this cho hàm private
}


class test2 : public test
{

};



int main()
{

    // overloading constructor

    test temp((char)1);
    temp.show_a();
   


}
//a=255