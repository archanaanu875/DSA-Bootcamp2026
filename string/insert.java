
//insert string in stringlist and delete string in stringlist considering as array.....
//concept of arraylist
// used for store the differnt data type element in it , without fixing the size of array
// we easily perform operation like insert, remove, get, set, clear, and collections.sort()....


import java.util.ArrayList;
public class insert{
    public static void main(String[] args){
        // Scanner sc=new Scanner(System.in);
        // ArrayList<String> fruits=new ArrayList<String>();
        var fruits=new ArrayList<String>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Grapes");
        fruits.add("Orange");
        fruits.add(1,"pear");
        System.out.println(fruits+" ");
        fruits.remove(2);
        System.out.println(fruits+" ");
        
        System.out.println(fruits.get(3));
        fruits.set(2,"xys");
        System.out.println(fruits+" ");
        
        
    }
}