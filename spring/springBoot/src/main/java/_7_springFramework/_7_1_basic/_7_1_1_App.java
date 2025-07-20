package _7_springFramework._7_1_basic;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class _7_1_1_App {
    public static void main(String[] args) {

        ApplicationContext context = new ClassPathXmlApplicationContext("spring.xml");
        _7_1_2_Alien obj = (_7_1_2_Alien) context.getBean("alien");
        obj.code();
    }
}
