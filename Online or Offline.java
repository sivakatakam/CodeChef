import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            float a=sc.nextInt();
            float b=sc.nextInt();
            float c=a-(a/10);
            if(c<b)
            System.out.println("ONLINE");
            else if(c==b)
            System.out.println("EITHER");
            else
            System.out.println("DINING");
        }
    }
}