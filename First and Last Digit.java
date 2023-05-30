import java.util.*;
import java.lang.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int n=sc.nextInt();
            int c=(int)Math.log10(n)+1;
            int f=n%10;
            int l=n/(int)(Math.pow(10,c-1));
            System.out.println(f+l);
        }
    }
}