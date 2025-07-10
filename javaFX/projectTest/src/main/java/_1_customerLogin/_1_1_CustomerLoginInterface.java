package _1_customerLogin;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.io.IOException;

public class _1_1_CustomerLoginInterface extends Application {
    public static void main(String[] args) {
        Application.launch(args);
    }

    @Override
    public void start(Stage stage) throws IOException {

        Parent root = FXMLLoader.load(getClass().getResource("_1_scene1.fxml"));
        Scene scene = new Scene(root);
        scene.getStylesheets().add(getClass().getResource("_1_style.css").toExternalForm());
        stage.setScene(scene);
        stage.show();
    }
}
