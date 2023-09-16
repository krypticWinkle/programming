import java.util.Scanner;
public class rotateArray 
{
    public static void main(String[] args) throws Exception
    {
        Scanner scn = new Scanner(System.in);
        int n = Integer.parseInt(scn.nextLine());
        int[] arr = new int[n];

        for(int i=0; i<n; i++)
        {
            arr[i] = Integer.parseInt(scn.nextLine());
        }
        int k = Integer.parseInt(scn.nextLine());
        int l1=0, l2=n-k;
        int r1=n-k-1, r2=n-1;
    
        while(l1 < r1)
        {
            int tmp = arr[l1];
            arr[l1] = arr[r1];
            arr[r1] = tmp;
            //swap(arr[l1], arr[r1]);
            l1++; r1--;
        }
        while(l2 < r2)
        {
            int tmp = arr[l2];
            arr[l2] = arr[r2];
            arr[r2] = tmp;
            l2++; r2--;
        }
        int l=0, r=n-1;
        while(l < r)
        {
            int tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
            l++; r--;
        }
        for(int i=0; i<arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }

    }
}



