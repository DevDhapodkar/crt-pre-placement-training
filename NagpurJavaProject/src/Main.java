public class Main {
    public static void main(String[] args) {
        String str = "Nagpur";
        String name = "Dev Dhapodkar";

        System.out.println(str);
        System.out.println(name);

        int citylength = str.length();
        System.out.println("Length of the city name: " + citylength);
        int namelength = name.length();
        System.out.println("Length of the name: " + namelength);

        char cityInitial = str.charAt(0);
        char nameInitial = name.charAt(0);
        System.out.println("First character of the city name: " + cityInitial);

}}
