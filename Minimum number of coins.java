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
            if(n%10==0)
            System.out.println(n/10);
            else if(n%10==5)
            System.out.println((n/10)+1);
            else
            System.out.println(-1);
        }
    }
}