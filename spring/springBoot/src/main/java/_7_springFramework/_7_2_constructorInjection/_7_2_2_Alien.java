package _7_springFramework._7_2_constructorInjection;


public class _7_2_2_Alien {

    private int age;
    private _7_1_3_Laptop laptop;

    public _7_2_2_Alien() {
        System.out.println("Object created");
    }

    public _7_2_2_Alien(int age) {
        this.age = age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void code() {
        System.out.println("I am coding");
    }

    public void setLaptop(_7_1_3_Laptop laptop) {
        this.laptop = laptop;
    }

}
