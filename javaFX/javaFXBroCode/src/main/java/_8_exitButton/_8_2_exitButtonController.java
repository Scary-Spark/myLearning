package _8_exitButton;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.ButtonType;
import javafx.scene.layout.AnchorPane;
import javafx.stage.Stage;

import java.io.IOException;

public class _8_2_exitButtonController {

    Stage stage;
    @FXML
    private Button logout;
    @FXML
    private AnchorPane scenePane;

    public void logout(ActionEvent event) throws IOException {

        // Optional: If we want to set warning
        Alert alert = new Alert(Alert.AlertType.CONFIRMATION);
        alert.setTitle("logout");
        alert.setHeaderText("You are about to logout");
        alert.setContentText("Do you want to save before exiting?: ");

        if (alert.showAndWait().get() == ButtonType.OK) {
            // This is main code
            stage = (Stage) scenePane.getScene().getWindow();
            System.out.println("You have been logged out");
            stage.close();
        }

    }
}
