import java.util.*;
class COdechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            int x,y,a;
            x=sc.nextInt();
            y=sc.nextInt();
            a=sc.nextInt();
            if(a>=x&&a<y)
            System.out.println("YES");
            else
            System.out.println("NO");
            t--;
        }
    }
}