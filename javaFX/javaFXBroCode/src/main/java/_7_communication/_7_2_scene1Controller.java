package _7_communication;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.stage.Stage;

import java.io.IOException;

public class _7_2_scene1Controller {

    @FXML
    TextField textField;

    private Stage stage;
    private Scene scene;
    private Parent root;

    public void login(ActionEvent event) throws IOException {

        // taking the user-input from text field and store it as a string
        String userName = textField.getText();

        // root = FXMLLoader.load(getClass().getResource("_7_scene2.fxml"));
        FXMLLoader loader = new FXMLLoader(getClass().getResource("_7_scene2.fxml"));
        root = loader.load();

        _7_3_scene2Controller controller = loader.getController();
        controller.displayName(userName);


        stage = (Stage) ((Node) event.getSource()).getScene().getWindow();
        scene = new Scene(root);
        stage.setScene(scene);
        stage.show();
    }
}
