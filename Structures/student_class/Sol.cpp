#include <iostream>
#include <string>

using namespace std;

class student
{
private:

    string name;
    int rollno;
    int marks[3];
    
public:
    
    student(string n, int r, int m[])
    {
        name = n;
        setRoll(r);
        for(int i = 0; i < 3; i++)
        {
            marks[i] = m[i];
        }
    }
    
    void setRoll(int r)
    {
        if (r > 0)
        {
            rollno = r;
        }
        else
        {
            cout << "Invalid Roll No.\n";
            exit(0);
        }
    }
    
    void grades()
    {
        int total = 0;
        for (auto x: marks)
        {
            total += x;
        }
        
        float avg = total / 3;
        
        if (avg >= 85) cout << "A" << endl;
        else if (avg > 70) cout << "B" << endl;
        else if (avg > 50) cout << "C" << endl;
        else cout << "D" << endl;
    }
    
    void display()
    {
        cout << "Name of the student: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Grade: ";
        grades();
        cout << endl;
        
    }
};


int main()
{
    int m1[] = {91, 93, 95}; // student1 marks for PCM
    student s1("Sachin", 21, m1); // student1
    
    s1.display();
    
    int m2[] = {88, 92, 89};  // student2 marks for PCM
    student s2("Saurabh", 23, m2); // student2
    
    s2.display();
}
