import java.io.*;
import java.util.*;

public class normal_stack 
{

  public static class CustomStack 
  {
    int[] data;
    int tos;

    public CustomStack(int cap) 
    {
      data = new int[cap];
      tos = -1;
    }

    int size() 
    {
      // write ur code here
      return tos + 1;
    }

    void display() 
    {
      // write ur code here
        for(int i = tos; i>=0; i--)
        {
            System.out.print(data[i]);
            System.out.print(" ");
        }
        System.out.println("");
    }

    void push(int val)
    {
      // write ur code here
        if(tos < size())
        {
            tos++;
            data[tos] = val;
        }
        else
        {
            System.out.println("Stack Overflow");
        }
    
    }

    int pop() {
      // write ur code here
        int x = -1;
        if(tos > -1)
        {
            x = data[tos];
            tos--;
            return x;
        }
        System.out.println("Stack Underflow");
        return x;
    }

    int top() 
    {
       // write ur code here
       if(tos == -1)
        {
            System.out.println("Stack Underflow");
            return -1;
        }
        return data[tos];
    }
  }












  public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    CustomStack st = new CustomStack(n);

    String str = br.readLine();
    while(str.equals("quit") == false){
      if(str.startsWith("push")){
        int val = Integer.parseInt(str.split(" ")[1]);
        st.push(val);
      } else if(str.startsWith("pop")){
        int val = st.pop();
        if(val != -1){
          System.out.println(val);
        }
      } else if(str.startsWith("top")){
        int val = st.top();
        if(val != -1){
          System.out.println(val);
        }
      } else if(str.startsWith("size")){
        System.out.println(st.size());
      } else if(str.startsWith("display")){
        st.display();
      }
      str = br.readLine();
    }
  }
}