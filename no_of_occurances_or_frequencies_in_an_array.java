package sample;
import java.util.*;
public class Count_Occurrences {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();
        int[] arr = new int[size];
        System.out.print("Enter the elements of the array: ");
        for (int i = 0; i < size; i++) {
            arr[i] = scanner.nextInt();
        }
       int[] counts = new int[size];
        for (int i = 0; i < size; i++) {
            int element = arr[i];
            boolean counted = false;
            for (int j = 0; j < i; j++) {
                if (arr[j] == element) {
                    counts[j]++;
                    counted = true;
                    break;
                }
            }
            if (!counted) {
                counts[i] = 1;
            }
        }
        System.out.println("Number of occurrences of each element:");
        for (int i = 0; i < size; i++) {
            if (counts[i] > 0) {
                System.out.println(arr[i] + " occurs " + counts[i]+" times");
            }
        }
    }
}
