#include<bits/stdc++.h>
using namespace std;

class Employee
{
  private:
    string name, company;
    int age;
  public:
    Employee(string naam, string comp, int umar)//a constructor doesn't have return type
    {
        name = naam;
        company = comp;
        age = umar;
    }
    void setName(string naam)
    {
        name = naam;
    }
    string getName()
    {
        return name;
    }

    void setCompany(string comp)
    {
        company = comp;
    }
    string getCompany()
    {
        return company;
    }

    void setAge(int umar)
    {
        if(umar >= 18)
        {
            age = umar;
        }
    }
    int getAge()
    {
        return age;
    }


    void Intro()
    {
        cout<<"Name - "<< name<<"\n";
        cout<<"Company - "<<company<<"\n";
        cout<<"Age - "<<age<<"\n";
    }
};

int main()
{

    Employee e1("seldina", "youtube", 25),e2("Ayush", "Amazon", 22);
    // e1.name = "Saldina";
    // e1.company = "Youtube";
    // e1.age = 25;

    // e2.name = "Ayush";
    // e2.company = "Amazon";
    // e2.age = 35;

    e1.setAge(15);

    e1.Intro();
    e2.Intro();
}