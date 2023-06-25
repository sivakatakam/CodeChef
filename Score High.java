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
            int [] a = new int[ 4 ];
            int max=0;
            for(int i=0;i<4;i++)
            {
                a[i]=sc.nextInt();
                if(max<a[i])
                max=a[i];
            }
            System.out.println(max);
        }
    }
}