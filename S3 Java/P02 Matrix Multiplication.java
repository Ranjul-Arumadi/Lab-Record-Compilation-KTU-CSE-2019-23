import java.util.Scanner;

public class Main {
    public static void main(String []args)
    {
        int rowA,columnA,rowB,columnB,i,j,k;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter row value for matrix A");
        rowA= scanner.nextInt();
        System.out.println("Enter column value for matrix A");
        columnA= scanner.nextInt();
        System.out.println("Enter row value for matrix B");
        rowB= scanner.nextInt();
        System.out.println("Enter column value for matrix B");
        columnB= scanner.nextInt();
        if(columnA!=rowB)
        {
            System.out.println("Matrix multiplication not possible");
            System.out.println("Recheck row,column values");

        }
        else
        {

            int a[][] = new int[rowA][columnA];
            int b[][] = new int[rowB][columnB];
            int result[][]=new int[rowA][columnB];
            System.out.println("Enter values for matrix A");
            for (i = 0; i < rowA; i++) {
                for (j = 0; j < columnA; j++) {
                    a[i][j] = scanner.nextInt();
                }
            }
            System.out.println("First matrix is :");
               for (i = 0; i < rowA; i++) {
                for (j = 0; j < columnA; j++) {
                    System.out.println(a[i][j]);
                    System.out.print("\t");
                }
                System.out.print("\n");
            }
            System.out.println("Enter values for matrix B");
            for (i = 0; i < rowB; i++) {
                for (j = 0; j < columnB; j++) {
                    b[i][j] = scanner.nextInt();
                }
            }
               System.out.println("Second matrix is :");
               for (i = 0; i < rowA; i++) {
                for (j = 0; j < columnA; j++) {
                    System.out.println(b[i][j]);
                    System.out.print("\t");
                }
                System.out.print("\n");
            }
            //multiplication
            for (i = 0; i <rowA;i++ )
            {
                for (j=0;j<columnB;j++)
                {
                    for (k=0;k<rowB;k++)
                    {
                        result[i][j]=result[i][j]+(a[i][k]*b[k][j]);
                    }
                }
            }
            //printing the results
            System.out.println("Resultant marix is : ");
            for (i=0;i<rowA;i++)
            {
                //System.out.print("\t");
                for (j=0;j<columnA;j++)
                {
                    System.out.print(result[i][j]);
                    System.out.print("\t");
                }
                System.out.print("\n");

            }
        }
            
    } 
}
