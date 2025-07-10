package _12_radioButton;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.RadioButton;

import java.io.IOException;

public class _12_2_controller {

    @FXML
    private Label label;

    @FXML
    private RadioButton button1, button2, button3;

    public void getFood(ActionEvent event) throws IOException {

        if (button1.isSelected()) {
            label.setText("You have selected: " + button1.getText());
        } else if (button2.isSelected()) {
            label.setText("You have selected: " + button2.getText());
        } else {
            label.setText("You have selected: " + button3.getText());
        }
    }
}
