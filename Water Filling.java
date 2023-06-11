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
            for(int i=0;i<3;i++)
            {
                int n=sc.nextInt();
                if(n==0)
                c++;
            }
            if(c>=2)
            System.out.println("Water filling time");
            else
            System.out.println("Not now");
        }
    }
}