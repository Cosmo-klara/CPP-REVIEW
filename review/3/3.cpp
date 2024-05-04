#include <iostream>
#include <string>

using namespace std;
class Employee
{
protected:
    string name_;
    double salary_;

public:
    Employee(const string &name) : name_(name), salary_(0.0) {}
    ~Employee() {}
    virtual double pay() = 0;

    const string &getName() const { return name_; }
};

class Manager : public virtual Employee
{

private:
    double fixed_salary;

public:
    Manager(const string &name, double fixedSalary) : Employee(name), fixed_salary(fixedSalary) {}

    double pay()
    {
        salary_ = fixed_salary;
        cout << "Manager " << getName() << " earns " << salary_ << " per month.\n";
        return salary_;
    }

    double getFixedSalary() const{
        return fixed_salary;
    }
};

class Technician : public virtual Employee
{
private:
    double hoursWorked_;

public:
    Technician(const string &name, double hoursWorked)
        : Employee(name), hoursWorked_(hoursWorked) {}

    double pay()
    {
        salary_ = hoursWorked_ * 100.0;
        cout << "Technician " << getName() << " earns " << salary_
             << " per month for working " << hoursWorked_ << " hours.\n";
        return salary_;
    }
    
};

class Salesman : public virtual Employee
{
private:
    double salesAmount_;

public:
    Salesman(const string &name, double salesAmount)
        : Employee(name), salesAmount_(salesAmount) {}

    double pay ()
    {
        salary_ = salesAmount_ * 0.05;
        cout << "Salesman " << getName() << " earns " << salary_
             << " per month from sales amount of " << salesAmount_ << ".\n";
        return salary_;
    }
    double getSalesAmount() const{
        return salesAmount_;
    }
};

class SalesManager : public Salesman, public Manager
{
public:
    SalesManager(const string &name, double salesAmount, double fixedSalary)
        : Employee(name), Salesman(name, salesAmount), Manager(name, fixedSalary) {}

    double pay()
    {

        salary_ = getFixedSalary() + getSalesAmount() * 0.005;
        cout << "SalesManager " << getName() << " earns " << salary_
             << " per month.\n";

        return salary_;
    }
};

int main()
{
    Employee *employees[] = {
        new Manager("A", 7000),
        new Technician("B", 160),
        new Salesman("C", 80000),
        new SalesManager("D", 120000, 4000)};

    for (const auto &employee : employees)
    {
        employee->pay();
    }
    for (const auto &employee : employees)
    {
        delete employee;
    }
    return 0;
}