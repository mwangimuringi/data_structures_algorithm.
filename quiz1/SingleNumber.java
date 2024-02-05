public class SingleNumber {
    public int singleNumber(int[] arr){
        //variables to store XOR result
        int single = arr[0];
        for (int i = 1; i < arr.length; i++) {
            //xOR the element with previous index
            single = single ^ arr[1];
        }
        return single;
    }
}
