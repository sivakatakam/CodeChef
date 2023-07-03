import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int a=sc.nextInt();
            int x=sc.nextInt();
            int b=sc.nextInt();
            int y=sc.nextInt();
            float s1,s2;
            s1=(float)a/x;
            s2=(float)b/y;
            if(s1>s2)
            System.out.println("Alice");
            else if(s1<s2)
            System.out.println("Bob");
            else
            System.out.println("Equal");
        }
    }
}