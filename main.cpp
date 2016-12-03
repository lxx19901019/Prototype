#include <iostream>

using namespace std;


class Person
{
public:
    virtual Person * clone()=0;
    virtual void printT()=0;

};
class JavaProgrammer: public Person
{
public:
    JavaProgrammer()
    {
        m_name  = "";
        m_age   = 0;
    }

    JavaProgrammer(string name, int age)
    {
        m_name = name;
        m_age  = age;
    }
    Person * clone()
    {
        JavaProgrammer *tmp = new JavaProgrammer;
        *tmp = *this;
        return tmp;
    }
    void printT()
    {
        cout<<"name:"<<m_name<<" age:"<<m_age<<endl;
    }
private:
    string m_name;
    int m_age;
};

int main()
{

    JavaProgrammer *c1 = new JavaProgrammer("ÕÅÈý",34);
    c1->printT();

    Person *c2 = c1->clone();
    c2->printT();

    delete c1;
    delete c2;
    cout << "Hello world!" << endl;
    return 0;
}
