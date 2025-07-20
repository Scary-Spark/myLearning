package _9_springBoot._9_1_basic;

import org.springframework.stereotype.Component;

@Component
public class _9_1_2_Laptop implements _9_1_4_Computer {

    public void compile() {
        System.out.println("Compiled from laptop");
    }
}
