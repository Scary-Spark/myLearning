package _10_textField;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.text.Font;

public class _10_2_controller {

    int age;
    @FXML
    private Label welcomeLabel;
    @FXML
    private TextField textField;
    @FXML
    private Button loginButton;

    public void login(ActionEvent event) {

        try {
            age = Integer.parseInt(textField.getText());

            if (age >= 18) {
                welcomeLabel.setFont(new Font(35));
                welcomeLabel.setText("You are now signed up");
            } else {
                welcomeLabel.setFont(new Font(35));
                welcomeLabel.setText("You must be at least 18");
            }

        } catch (NumberFormatException e) {
            welcomeLabel.setFont(new Font(25));
            welcomeLabel.setText("Enter only number please");
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}
