import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int p=sc.nextInt();
            int q=sc.nextInt();
            int r=sc.nextInt();
            int s=sc.nextInt();
            if(p>q+r+s||q>p+r+s||r>p+q+s||s>p+q+r)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}