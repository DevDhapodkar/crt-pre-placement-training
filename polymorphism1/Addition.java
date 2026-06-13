package polymorphism1;

public class Addition {

    public void add(){
        System.out.println("Inside no parameter method");

    int a = 10;
    int b = 20;
    int c = a+b;
    System.out.println("Addition is : "+c);


}
public void add(int x){
    System.out.println("Inside one parameter method");
    int a = x;
    int b = x;
    int c = a+b;
    System.out.println("Addition is : "+c);

}

public void add(int x, int y){
    System.out.println("Inside two parameter method");
    int a = x;
    int b = y;
    int c = a+b;
    System.out.println("Addition is : "+c);

}

public void add(double x, double y){
    System.out.println("Inside two parameter method");
    double a = x;
    double b = y;
    double c = a+b;
    System.out.println("Addition is : "+c);

}
    
}

    

