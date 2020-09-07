//Java program to ask for full name and the roll number from the user.
//The program should display these entered information as the output.
import java.util.Scanner;

public class Lab_1_a {
    public static void main(String []args)
    {
        int RollNumber;
        String Name;
        Scanner scanner=new Scanner(System.in);
        System.out.print("Enter your roll number : ");
        RollNumber=scanner.nextInt();
        System.out.print("Enter your Full Name : ");
        Scanner scanner_2=new Scanner(System.in);
        Name=scanner_2.nextLine();
        System.out.println("--------------------------");
        System.out.println("Roll Number: "+RollNumber);
        System.out.println("Name : "+Name);
    }
}
