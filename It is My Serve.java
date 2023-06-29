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
            if((a+b)%4==0||(a+b)%4==1)
            System.out.println("Alice");
            else
            System.out.println("Bob");
        }
    }
}