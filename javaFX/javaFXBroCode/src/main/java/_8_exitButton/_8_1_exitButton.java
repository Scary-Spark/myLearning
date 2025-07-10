package _8_exitButton;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.ButtonType;
import javafx.stage.Stage;

import java.io.IOException;

public class _8_1_exitButton extends Application {
    public static void main(String[] args) {
        Application.launch(args);
    }

    @Override
    public void start(Stage stage) throws IOException {

        Parent root = FXMLLoader.load(getClass().getResource("_8_scene1.fxml"));
        Scene scene = new Scene(root);
        stage.setScene(scene);
        stage.show();

        // if user use the window exit button
        stage.setOnCloseRequest(event -> {
            {
                event.consume(); // make the window to be appeared if cancel the event
                try {
                    logout(stage);
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }

        });
    }

    public void logout(Stage stage) throws IOException {

        // Optional: If we want to set warning
        Alert alert = new Alert(Alert.AlertType.CONFIRMATION);
        alert.setTitle("logout");
        alert.setHeaderText("You are about to logout");
        alert.setContentText("Do you want to save before exiting?: ");

        if (alert.showAndWait().get() == ButtonType.OK) {
            System.out.println("You have been logged out");
            stage.close();
        }

    }
}
