import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int c=0;
            int a=sc.nextInt();
            while(a-- >0)
            {
                int n=sc.nextInt();
                if(n>=10&&n<=60)
                c++;
            }
            System.out.println(c);
        }
    }
}