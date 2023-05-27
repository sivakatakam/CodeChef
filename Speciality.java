import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            if(a>b&&a>c)
            System.out.println("Setter");
            else if(b>a&&b>c)
            System.out.println("Tester");
            else
            System.out.println("Editorialist");
        }
    }
}