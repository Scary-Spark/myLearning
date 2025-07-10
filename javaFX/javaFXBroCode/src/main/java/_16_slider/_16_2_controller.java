package _16_slider;

import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.Slider;

import java.net.URL;
import java.util.ResourceBundle;

public class _16_2_controller implements Initializable {
    int myTemp;
    @FXML
    private Label label;
    @FXML
    private Slider slider;

    public void sliderCheck(ActionEvent event) {

    }

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {

        slider.valueProperty().addListener(new ChangeListener<Number>() {
                                               @Override
                                               public void changed(ObservableValue<? extends Number> observableValue, Number number, Number t1) {
                                                   myTemp = (int) slider.getValue();
                                                   label.setText(Integer.toString(myTemp) + "'C");
                                               }
                                           }
        );
    }
}
