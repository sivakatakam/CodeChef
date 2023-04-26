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
            int p=sc.nextInt();
            int q=sc.nextInt();
            int s=(p-q)*x;
            System.out.println(s);
        }
    }
}