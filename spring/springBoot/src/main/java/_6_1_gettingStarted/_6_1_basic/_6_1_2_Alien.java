package _6_1_gettingStarted._6_1_basic;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class _6_1_2_Alien {

    @Autowired
    _6_1_3_Laptop laptop;

    public void code() {
        System.out.println("I am coding");
        laptop.compile();
    }
}
