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
            int c=0;
            while(n-- >0)
            {
                int x=sc.nextInt();
                if(x>=1000)
                c++;
            }
            System.out.println(c);
        }
    }
}