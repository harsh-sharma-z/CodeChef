/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */


class Codechef

{

  public static void main (String[] args) throws java.lang.Exception{

    
    // your code goes here
    Scanner sc = new Scanner(System.in);

    int t = sc.nextInt();

    for(int h=0;h<t;h++)
    {
        int n = sc.nextInt();
        int[] arr = new int[n];
        Map<Integer,Integer> freq = new HashMap<>();
        ArrayList<int[]> list = new ArrayList<>();

        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();

        for(int i: arr){
            freq.put(i, freq.getOrDefault(i,0)+1);
        }

        for(int i : freq.keySet()){
            int element = freq.get(i);
            list.add(new int[]{i,element});
        }

        Collections.sort(list, (o1,o2)->o2[1]-o1[1]);

        if(list.size()==1 || list.get(0)[1] > list.get(1)[1] )
            System.out.println("YES");
        else

            System.out.println("NO");

        

    }

  }

}
