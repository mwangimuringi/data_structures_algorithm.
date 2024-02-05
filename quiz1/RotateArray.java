import java.util.Arrays;

public class RotateArray {
    public static void main(String[] args){
        int arr[] = {5, 6, 7, 8, 9, 10, 11};
        int k = 2;
        System.out.printf(Arrays.toString(rotate(arr,k)));
    }
    public static int[] rotate(int[] arr, int k){
        int n = arr.length;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        return arr;
    }
    public static void reverse(int[] arr, int start,int end){
        while (start<=end){
            int newArr = arr[start];
            arr[start] = arr[end];
            arr[end] = newArr;
            start++;
            end--;
        }
    }
}
