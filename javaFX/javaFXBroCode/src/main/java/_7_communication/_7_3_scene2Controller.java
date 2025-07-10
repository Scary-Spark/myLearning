package _7_communication;

import javafx.fxml.FXML;
import javafx.scene.control.Label;

public class _7_3_scene2Controller {

    @FXML
    Label label;

    public void displayName(String userName) {
        label.setText("Hello, " + userName);
    }
}
