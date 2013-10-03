#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


 class Employee
{
 protected:
   string surname;
   string first_name;
   double salary;

public:
	Employee(string surname="X",string firstName="man",double salary=0):surname(surname),first_name(firstName),salary(salary){}
	~Employee(){};
  virtual void print();
};

  class Clerk:public Employee
  {
    string profession;
    string jobDescription;
    string personalResponsibility;
  public:
	  Clerk(string surname,string firstName,string profession,int salary,string personalResponsibility):Employee(surname, firstName,salary),
		  jobDescription("Clerk tasks"),profession(profession),personalResponsibility(personalResponsibility){}
	  ~Clerk(){};
  virtual void print();
  };

  class Engineer:public Employee
  {
    string profession;
    string jobDescription;
    string personalResponsibility;
  public:
  Engineer(string surname,string firstName,string profession,int salary,string personalResponsibility):Employee(surname, firstName,salary),
	  profession(profession),personalResponsibility(personalResponsibility),jobDescription("Engineer tasks ") {}
  ~Engineer(){}
  virtual void print();
  };


  class Manager: public Employee
  {
    string profession;
    string jobDescription;
    string personalResponsibility;
    int num_of_team_members;
  public:
  Manager(string surname,string firstName,string profession,int salary,string personalResponsibility,int num_of_team_members):Employee(surname, firstName,salary),
 profession(profession),personalResponsibility(personalResponsibility),num_of_team_members(num_of_team_members),jobDescription("Manager tasks ")
  {}
  ~Manager(){}
  virtual void print();
  };



  class Programmer: public Employee
  {
    string profession;
    string jobDescription;
    string personalResponsibility;
  public:
  Programmer(string surname,string firstName,string profession,int salary,string personalResponsibility):Employee(surname, firstName,salary),
	  profession(profession),jobDescription("Programmer tasks "),personalResponsibility(personalResponsibility){}
  ~Programmer(){}
  virtual void print();
  };



  class Accountant: public Employee
  {
	string profession;
    string jobDescription;
    string personalResponsibility;
  public:
  Accountant(string surname,string firstName,string profession,int salary,string personalResponsibility):Employee(surname, firstName,salary),
	  jobDescription("Accountant tasks "),profession(profession),personalResponsibility(personalResponsibility){}
  ~Accountant(){}
 virtual void print();
  };



  class Electrician: public Employee
  {
	string profession;
	string jobDescription;
	string personalResponsibility;
  public:
  Electrician(string surname,string firstName,string profession,int salary,string personalResponsibility):Employee(surname, firstName,salary),
  jobDescription("Electrician tasks "),profession(profession),personalResponsibility(personalResponsibility){}
  ~Electrician(){}
 virtual void print();
  };




  class Scientist: public Employee
  {
	  string profession;
    string jobDescription;
    string personalResponsibility;
    int num_of_publications;
  public:
  Scientist(string surname,string firstName,string profession,int salary,string personalResponsibility,int num_of_publications):Employee(surname, firstName,salary),
	  jobDescription("Scientist tasks "),profession(profession),personalResponsibility(personalResponsibility),num_of_publications(num_of_publications){}
  ~Scientist(){}
  virtual void print();

  };