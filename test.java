import java.util.Scanner;
public class PrimeNUmber{
    public static void main(string[] args){
        scanner input = new Scanner(System.in);
        int n1,n2,count=0;
        System.out.print("Enter the initial number :");
        n1 = input.nextInt();
        System.out.print("Enter the final number :")
        n2 = input.nextInt();
        for(int i=n1; i<n2; i++)
        {
            for(int j=2; j<i;j++)
            {
                if(i%j == 0)
                {
                    count++;
                    break;
                }
            }
            if(count == 0 && i>1)
            {
                System.out.print(i + " ");
            }
            count = 0;
        }
        
    }
}