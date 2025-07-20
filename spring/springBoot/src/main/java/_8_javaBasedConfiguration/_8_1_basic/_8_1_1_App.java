package _8_javaBasedConfiguration._8_1_basic;

import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class _8_1_1_App {
    public static void main(String[] args) {

        ApplicationContext context = new AnnotationConfigApplicationContext(_8_0_AppConfig.class);

        _8_1_4_Desktop dt = context.getBean(_8_1_4_Desktop.class);
        dt.compile();
    }
}
