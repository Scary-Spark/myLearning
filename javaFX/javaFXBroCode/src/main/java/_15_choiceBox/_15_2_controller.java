package _15_choiceBox;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.ChoiceBox;
import javafx.scene.control.Label;

import java.net.URL;
import java.util.ResourceBundle;

public class _15_2_controller implements Initializable {

    @FXML
    private Label label;

    @FXML
    private ChoiceBox<String> choiceBox;

    private String[] food = {
            "pizza",
            "sushi",
            "ramen"
    };

    public void choiceCheck(ActionEvent event) {

        String myFood = choiceBox.getValue();
        label.setText(myFood);
    }


    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        choiceBox.getItems().addAll(food);
        choiceBox.setOnAction(this::choiceCheck);
    }
}
