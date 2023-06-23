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
            if(a*10>b*5)
            System.out.println("FIRST");
            else if(a*10<b*5)
            System.out.println("SECOND");
            else
            System.out.println("ANY");
        }
    }
}