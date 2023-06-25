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
            int k=sc.nextInt();
            int m=sc.nextInt();
            int a;
            if(n%(k*m)==0)
            a=n/(k*m);
            else
            a=n/(k*m)+1;
            System.out.println(a);
        }
    }
}