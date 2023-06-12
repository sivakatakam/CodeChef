import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int max=0;
            for(int i=0;i<3;i++)
            {
                int n=sc.nextInt();
                if(max<n)
                max=n;
            }
            System.out.println(max);
        }
    }
}