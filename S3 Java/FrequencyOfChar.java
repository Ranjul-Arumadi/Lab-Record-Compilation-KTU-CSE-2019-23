import java.util.Scanner;

public class FrequencyOfChar {
    public static void main(String []args)
    {
        String user_value;
        char user_input;
        int frequency=0;
        boolean flag=false;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter String :");
        user_value=scanner.nextLine();
        System.out.println("Enter character whose frequency is to be known :");
        user_input=scanner.next().charAt(0);
        for(int i=0;i<user_value.length();i++)
        {
            if(user_value.charAt(i)==user_input)
            {
                frequency++;
                flag=true;
            }
        }
        if(flag==false)
        {
            System.out.println("Character '"+user_input +"' is not present in "+user_value);
        }
        else
        {
            System.out.println("No. of occurance of "+user_input+" is "+ frequency);
        }


    }

}
