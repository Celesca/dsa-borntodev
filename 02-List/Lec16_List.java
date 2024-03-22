import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        ArrayList<String> customers = new ArrayList<String>();
        System.out.println("Hello World");
        customers.add("Sommai");
        customers.add("Somchai");
        System.out.println(customers.get(0));
        System.out.println(customers.contains("Somchai"));
        System.out.println(customers.size());

        customers.remove(0);
    }
}