package _9_springBoot._9_1_basic;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Component;

@Component
public class _9_1_3_Alien {

    private _9_1_4_Computer com;

    @Value("25")
    private int age;

    void code() {
        System.out.println("I am coding");
        com.compile();
    }

    @Autowired
    public void setCom(_9_1_4_Computer com) {
        this.com = com;
    }

    public int getAge() {
        return this.age;
    }

    public void setAge(int age) {
        this.age = age;
    }


}
