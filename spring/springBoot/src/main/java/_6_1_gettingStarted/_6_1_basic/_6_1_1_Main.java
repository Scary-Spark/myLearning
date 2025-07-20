package _6_1_gettingStarted._6_1_basic;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;

@SpringBootApplication
public class _6_1_1_Main {
    public static void main(String[] args) {
        ApplicationContext context = SpringApplication.run(_6_1_1_Main.class, args);
        _6_1_2_Alien obj = context.getBean(_6_1_2_Alien.class);
        obj.code();
    }
}
