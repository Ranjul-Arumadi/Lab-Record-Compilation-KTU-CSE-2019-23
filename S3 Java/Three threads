/*Write a Java program that implements a multi-threaded program which has three threads. 
First thread generates a random integer every 1 second. If the value is even, second thread 
computes the square of the number and prints. If the value is odd the third thread will print 
the value of cube of the number*/
import java.util.*;
import java.lang.System;
public class threadprogram extends Thread 
  {
    public static void main(String[] args) 
    {
        
        System.out.println("Starting...\n\n");
        Number thread0 = new Number();
        thread0.start();
    }
  
   
}


class Number extends Thread 
{ 
    
    public void run() 
   {
       Scanner scanner=new Scanner(System.in);
       int i=1,randomNumber,counter=0;
    try {
        while(i==1)
        {
            
            
            Thread.sleep(1000);
            Random random = new Random();
            randomNumber=random.nextInt(100);
            counter++;
            if(counter%5==0)
            {
                System.out.println("Do you want to continue? 1:Yes 0:No");
                int temp=scanner.nextInt();
                if(temp==0)
                {
                    System.out.println("Exiting...");
                    System.exit(0);
                }
            }
            if(randomNumber%2==0)
            {
                Square thread1 = new Square(randomNumber);
                thread1.start();
            }
            if(randomNumber%2!=0)
            {
                Cube thread2 = new Cube(randomNumber);
                thread2.start();
            }
            
            System.out.println("Random number generated is : "+randomNumber);
            
        }
        
    } 
    catch(Exception e) 
    {
        System.out.println("Thread 1 has errors");
    }
    
       
   }
} 

class Square extends Thread 
{ 
    int value;
    Square(int a)  
    { 
        
        this.value=a;
         
    }
    
    
    public void run()
    {
      int square=(value*value);
      System.out.println("Number "+value+" was odd , square value is : "+square);
      System.out.println("___________________________________________________________");
      
    }
}

class Cube extends Thread 
{ 
    
    int value;
    Cube(int a)  
    { 
        
        this.value=a;
         
    }
    
    
    public void run()
    {
      int cube=(value*value*value);
      System.out.println("Number "+value+" was odd , Cube value is : "+cube); 
      System.out.println("___________________________________________________________");
    }
}
