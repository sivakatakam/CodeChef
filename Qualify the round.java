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
            int a=sc.nextInt();
            int b=sc.nextInt();
            if(a+(b*2)>=x)
            System.out.println("Qualify");
            else
            System.out.println("NotQualify");
        }
    }
}