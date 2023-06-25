import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int x=sc.nextInt();
            int y=sc.nextInt();
            int z=sc.nextInt();
            int g=0;
            int s=x*y;
            if(x<=3)
            g=0;
            else if(x%3!=0)
            g=(x/3)*z;
            else if(x%3==0)
            g=((x/3)-1)*z;
            System.out.println(s+g);
        }
    }
}