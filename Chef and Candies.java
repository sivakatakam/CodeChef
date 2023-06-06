import java.util.*;
class COdechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int n=sc.nextInt();
            int a=0;
            int x=sc.nextInt();
            if(n>x)
            {
                if((n-x)%4==0)
                a=(n-x)/4;
                else
                a=((n-x)/4)+1;
            }
            System.out.println(a);
        }
    }
}