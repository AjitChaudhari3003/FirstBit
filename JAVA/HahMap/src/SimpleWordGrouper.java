import java.util.*;

public class SimpleWordGrouper {
    public static void main(String[] args) {
        List<String> words = Arrays.asList("apple", "ant", "banana", "ball", "cat", "cup", "car");

        Map<Character, List<String>> map = new HashMap<>();

        for (String word : words) {
            char first = word.charAt(0); // get first letter

            // if map doesn't contain key, add new list
            if (!map.containsKey(first)) {
                map.put(first, new ArrayList<>());
            }

            // add word to the list
            map.get(first).add(word);
        }

        // print the result
        for (Character key : map.keySet()) {
            System.out.println(key + " = " + map.get(key));
        }
    }
}
