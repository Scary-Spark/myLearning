package _7_springFramework._7_2_constructorInjection;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class _7_2_1_App {
    public static void main(String[] args) {

        ApplicationContext context = new ClassPathXmlApplicationContext("spring.xml");
        _7_2_2_Alien obj = (_7_2_2_Alien) context.getBean("alien");
        obj.code();
    }
}
