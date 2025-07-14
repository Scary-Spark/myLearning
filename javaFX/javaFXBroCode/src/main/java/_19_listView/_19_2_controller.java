package _19_listView;

import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;

import java.net.URL;
import java.util.ResourceBundle;

public class _19_2_controller implements Initializable {
    String[] food = {"pizza", "sushi", "raman"};

    String currentFood;

    @FXML
    private Label myLabel;
    @FXML
    private ListView<String> myListView;

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        myListView.getItems().addAll(food);

        myListView.getSelectionModel().selectedItemProperty().addListener(new ChangeListener<String>() {

            @Override
            public void changed(ObservableValue<? extends String> observableValue, String s, String t1) {

                currentFood = myListView.getSelectionModel().getSelectedItem();

                myLabel.setText(currentFood);
            }
        });
    }
}
