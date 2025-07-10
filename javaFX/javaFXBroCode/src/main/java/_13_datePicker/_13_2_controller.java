package _13_datePicker;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.DatePicker;
import javafx.scene.control.Label;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class _13_2_controller {

    @FXML
    private Label label;

    @FXML
    private DatePicker datePicker;

    public void getDate(ActionEvent event) {
        LocalDate myDate = datePicker.getValue();

        //optional: Formate date
        String myDateFormattedDate = myDate.format(DateTimeFormatter.ofPattern("MM-dd-yyyy"));

        label.setText(myDateFormattedDate);
    }
}
