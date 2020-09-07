/*Java program to implement a simple calculator that reads two numbers. It should display
        a) sum
        b) difference
        c) product
        d) reminder when the first number is divided by the second number.
*/
import java.util.Scanner;

public class Lab_1_b {
    public static void main(String []a)
    {
        int FirstNumber,SecondNumber;
        System.out.println("Simple Calculator");
        System.out.println("------------------");
        Scanner scanner=new Scanner(System.in);
        System.out.println("Input first number :");
        FirstNumber=scanner.nextInt();
        System.out.println("Input second number :");
        SecondNumber=scanner.nextInt();
        System.out.println("-----------------------");
        System.out.println("Sum of "+FirstNumber+" and "+SecondNumber+" is : "+(FirstNumber+SecondNumber));
        System.out.println("Difference of "+FirstNumber+" and "+SecondNumber+" is : "+(FirstNumber-SecondNumber));
        System.out.println("Product of "+FirstNumber+" and "+SecondNumber+" is : "+(FirstNumber*SecondNumber));
        System.out.println("Remainder of "+FirstNumber+" divided by "+SecondNumber+" is : "+(FirstNumber%SecondNumber));
    }
}

