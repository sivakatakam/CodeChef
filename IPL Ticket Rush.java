import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int n=sc.nextInt();
            int m=sc.nextInt();
            if(n>m)
            System.out.println(n-m);
            else
            System.out.println("0");
        }
    }
}