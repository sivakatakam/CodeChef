import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int k=sc.nextInt();
        int c=0;
        while(t-- >0)
        {
            int n=sc.nextInt();
            if(n%k==0)
            c++;
        }
        System.out.println(c);
    }
}