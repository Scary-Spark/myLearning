package _1_customerLogin;

import javafx.fxml.FXML;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;

public class _1_2_loginController {
    @FXML
    private VBox loginBox;

    @FXML
    private TextField usernameField;

    @FXML
    private PasswordField passwordField;

    @FXML
    private void initialize() {
        // Show fields when mouse enters box
        loginBox.setOnMouseEntered(e -> {
            usernameField.setVisible(true);
            passwordField.setVisible(true);
        });

        // Hide fields when mouse exits box
        loginBox.setOnMouseExited(e -> {
            usernameField.setVisible(false);
            passwordField.setVisible(false);
        });
    }
}
