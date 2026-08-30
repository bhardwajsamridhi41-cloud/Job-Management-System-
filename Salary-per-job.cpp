#include<iostream>
#include<string.h>
using namespace std;

class employee
{
  private:
   int emp_id;
   string name;
  
  public:
    employee(int e,string n)
     {
        emp_id=e;
        name=n;
     }
    
    int getempid()
     {
        return emp_id;
     }

    string getname()
     {
        return name;
     }
};

class fulltimejob : public employee
{ private:
   int salary;

  public:
   fulltimejob(int e,string n,int s) : employee(e , n)
   {
     salary=s;
   }

   int getsalary()
   {
    return salary;
   }

   
};


class parttimejob : public employee
{
  private:
   int hourly_wages;
   int work_hou;
  
  public:
   parttimejob(int e,string n,int HW,int h) : employee(e,n)
    {
      hourly_wages=HW;
      work_hou=h;  
    }

   int getdailywages();
};

int parttimejob :: getdailywages()
{
    return hourly_wages*work_hou;
}

int main()
{
  int i,eid[2],salary,hourlywages,work_hours;
  string name[2];

  for(i=0;i<2;i++)
  {
    cout<<"Enter employee id and name of the employee :- "<<endl;
    cin>>eid[i]>>name[i];

  }

  cout<<"Enter the value of salary of full time working employee :- "<<endl;
  cin>>salary;

  cout<<"Enter the value of hourly wages and how many hours the person work in part time job :- "<<endl;
  cin>>hourlywages>>work_hours;

  fulltimejob p1(eid[0],name[0],salary);
  parttimejob p2(eid[1],name[1],hourlywages,work_hours);

  cout<<"The employee ["<<eid[0]<<".] "<<name[0]<<" salary is = Rs."<<p1.getsalary()<<endl;
  cout<<"The employee ["<<eid[1]<<".] "<<name[1]<<" salary is = Rs."<<p2.getdailywages()<<endl;

}

