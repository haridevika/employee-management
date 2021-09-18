#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
        //data members
        private:
                int empid;
                char ename[30];
                float empsal;
                //member functions
        public:
                //setter functions
                void setempid(int eid)
                {
                        empid=eid;
                }
                void setename(char name[30])
                {
                        strcpy(ename,name);
                }
                void setempsal(float sal)
                {
                        empsal=sal;
                }
                //getter functions
                int getempid()
                {
                        return empid;
                }
                char *getename()
                {
                        return ename;
                }
                float getempsal()
                {
                        return empsal;
                }
};
int main(int argc,char **argv)
{
        Employee e1;
        int eid;
        char name;
        float sal;
        cout<<"\nenter emp id";
        cin>>eid;
        e1.setempid(eid);
        cout<<"\nenter emp name;
        cin>>name;
        e1.setename(name);
        cout<<"\nenter emp sal";
        cin>>sal;
        e1.setempsal(sal);
        //display employee details stored in object e1
        cout<<"id="<<e1.getempid()<<endl;
        cout<<"name="<<e1.getename()<<endl;
        cout<<"sal="<<e1.getempsal()<<endl;
        return 0;
}