import java.util.Scanner;

public class input
{
    public static void main(String [] args)
    {
        Scanner scn = new Scanner(System.in);
        int n = Integer.parseInt(scn.nextLine());
        //int n = scn.nextInt();
        // for(int i=0; i<n; i++)
        // {
        //     System.out.print(i + " ");
        // }

        String name = scn.nextLine();
        System.out.print("Hello " + name);
    }
}
