import java.util.Scanner;
public class Employees
{
    public static void main(String args[])
    {
        Scanner scanner=new Scanner(System.in);
        /*for manager*/
        System.out.println("Enter Managers Name : ");
        String name=scanner.next();
        System.out.println("Enter Managers Age : ");
        int age=scanner.nextInt();
        System.out.println("Enter Managers Phone Number : ");
        long pno=scanner.nextLong();
        System.out.println("Enter Managers Address : ");
        String add=scanner.next();
        System.out.println("Enter Managers salary : ");
        double slry;
        slry = scanner.nextDouble();
        System.out.println("Enter Managers Department : ");
        String dept=scanner.next();
        /*for officer*/
        System.out.println("------------------------------------");
        System.out.println("\nEnter Officers Name : ");
        String name1=scanner.next();
        System.out.println("Enter Officers Age : ");
        int age1=scanner.nextInt();
        System.out.println("Enter Officers Phone Number : ");
        long pno1=scanner.nextLong();
        System.out.println("Enter Officers Address : ");
        String add1=scanner.next();
        System.out.println("Enter Officers salary : ");
        double slry1;
        slry1=scanner.nextDouble();
        System.out.println("Enter Officers specialization : ");
        String spec=scanner.next();
        Manager ob1=new Manager(name,age,pno,add,slry,dept);
        ob1.display1();
        Officer ob2=new Officer(name1,age1,pno1,add1,slry1,spec);
        ob2.display2();
    }
}
class Employee
{
    String name;
    long phoneNumber;
    int age;
    String address;
    double salary;
    Employee(String n,int a,long p,String ad,double s)
    {
        name=n;
        age=a;
        phoneNumber=p;
        address=ad;
        salary=s;
    }
    void print_salary()
    {
        System.out.println("Salary of "+name+" is "+salary);
    }
}

class Manager extends Employee
{
    String department;
    Manager(String n,int a,long p,String ad,double s,String dep)
    {
        super(n,a,p,ad,s);
        department=dep;
    }
    void display1()
    {
        System.out.println("----------------------");
        System.out.println("Managers Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Phone number : "+phoneNumber);
        System.out.println("Adress : "+address);
        System.out.println("Department : "+department);
        print_salary();
        System.out.println("--------------");
    }
}

class Officer extends Employee
{
    String specialization;
    Officer(String n,int a,long p,String ad,double s,String spec)
    {
        super(n,a,p,ad,s);
        specialization=spec;
    }
    void display2()
    {
        System.out.println("Officers Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Phone : "+phoneNumber);
        System.out.println("Address : "+address);
        System.out.println("Specialization : "+specialization);
        print_salary();
    }
}
