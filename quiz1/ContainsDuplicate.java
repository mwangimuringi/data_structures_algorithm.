import java.util.HashSet;
import java.util.Set;

class Duplicate {
    public boolean containsDuplicate(int[] arr) {
        //create hashset to store integers
        Set<Integer> intSet = new HashSet<>();
        //iterate over each element
        for (int num : arr) {
            if (intSet.contains(num))
                return true;
            //add the number to hashset
            intSet.add(num);
        }
        return false;
   }
}
