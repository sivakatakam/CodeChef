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
            if(n%3==0)
            System.out.println("0");
            else if(n%3==1)
            System.out.println("2");
            else
            System.out.println("1");
        }
    }
}