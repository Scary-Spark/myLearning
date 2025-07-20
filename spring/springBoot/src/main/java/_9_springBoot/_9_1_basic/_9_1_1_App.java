package _9_springBoot._9_1_basic;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;

@SpringBootApplication
public class _9_1_1_App {
    public static void main(String[] args) {

        ApplicationContext context = SpringApplication.run(_9_1_1_App.class, args);

        _9_1_3_Alien obj = context.getBean(_9_1_3_Alien.class);
        obj.code();

        System.out.println(obj.getAge());

    }
}
