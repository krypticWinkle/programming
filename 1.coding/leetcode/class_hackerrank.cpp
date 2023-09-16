#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
    int stud_age, stud_std;
    string stud_fname,stud_lname;
    public:
    void set_age(int age);
    int get_age();
    
    void set_standard(int standard);
    int get_standard();
    
    void set_first_name(string first_name);
    string get_first_name();
    
    void set_last_name(string last_name);
    string get_last_name();
    
    string to_string();
};

    string Student :: to_string()
    {
        string s;
        std::string s1 = std::to_string(stud_age);
        std::string s2 = std::to_string(stud_std);

        s = s1 + ',' + stud_fname + ',' + stud_lname + ',' + s2;
        /*stringstream s(stud_age, stud_std, stud_fname, stud_lname); 
        string concat_details;
        s>>concat_details;*/
        return s;
    }

void Student :: set_age(int age)
{
    stud_age = age;
}
int Student :: get_age()
{
    int stud_aage = stud_age;
    return stud_aage;
}
void Student :: set_standard(int standard)
{
    stud_std = standard;
}
int Student :: get_standard()
{
    int stud_sstd;
    stud_sstd = stud_std;
    return stud_sstd;
}
void Student :: set_first_name(string first_name)
{
    stud_fname = first_name;
}
string Student :: get_first_name()
{
    string stud_ffname;
    stud_ffname=stud_fname;
    return stud_ffname;
}
void Student :: set_last_name(string last_name)
{
    stud_lname = last_name;
}
string Student :: get_last_name()
{
    string stud_llname;
    stud_llname = stud_lname;
    return stud_llname;
    
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}