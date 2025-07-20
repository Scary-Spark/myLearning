package _8_javaBasedConfiguration._8_1_basic;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class _8_0_AppConfig {

    @Bean
    public _8_1_4_Desktop desktop() {
        return new _8_1_4_Desktop();
    }
}
