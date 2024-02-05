public class RemoveDuplicate {
    static int removeDuplicate(int[] arr){
        int d = 0;
        for (int i = 1; i < arr.length; i++) {
            if (arr[d]!= arr[i]) {
                d++;
                arr[d] = arr[i];
            }
        }
        return d + 1;
    }
    public static void main(String[] args){
        int[] arr = {1, 1, 2, 2, 3, 5, 5, 6, 6};
        for (int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + "");
        }
        int d = removeDuplicate(arr); //To remove duplicates beyond index d
        System.out.println();

        for (int i = 0; i < d; i++){
            System.out.print(arr[i] + "");
    }
}
}