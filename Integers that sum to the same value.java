import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int c=0;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(i+j==n)
                c++;
            }
        }
        System.out.println(c);
    }
}