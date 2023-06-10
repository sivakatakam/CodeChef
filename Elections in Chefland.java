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
            int x=sc.nextInt();
            int c=0;
            for(int i=0;i<n;i++)
            {
                int a=sc.nextInt();
                if(a>=x)
                c++;
            }
            System.out.println(c);
        }
    }
}