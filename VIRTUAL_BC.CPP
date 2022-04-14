
#include <iostream>

using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set(int x)
        {
            roll_no=x;   
        }
        void get()
        {
            cout<<"Roll No. : "<<roll_no<<endl;
        }
};
class Test:virtual public Student
{
    protected:
        int math1,math2;
    public:
        void get_marks(int x,int y)
        {
            math1=x;
            math2=y;
        }
        void put()
        {
            cout<<"Marks in Math1 : "<<math1<<endl;
            cout<<"Marks in Math2 : "<<math2<<endl;
        }
};
class Sports:public virtual Student
{
    protected:
        int marks;
    public:
        void set1(int x)
        {
            marks=x;
        }
        void put1()
        {
            cout<<"Marks in Sports : "<<marks<<endl;
        }
};
class Result:public Test,public Sports
{
    private:
        int sum;
    public:
        void total()
        {
            sum=math1+math2+marks;
            get();
            put();
            put1();
            cout<<"Total Marks : "<<sum;
        }
};
int main()
{
  Result obj;
  obj.set(12);
  obj.get_marks(95,91);
  obj.set1(96);
  obj.total();

  return 0;
}
