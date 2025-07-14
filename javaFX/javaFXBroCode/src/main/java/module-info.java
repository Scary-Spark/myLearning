module com.example.javafxbrocode {
    requires javafx.controls;
    requires javafx.fxml;

    requires org.controlsfx.controls;
    requires com.dlsc.formsfx;
    requires org.kordamp.bootstrapfx.core;
    requires jdk.jfr;

    opens _4_eventHandler to javafx.fxml;
    exports _4_eventHandler;

    opens _5_cssStyling to javafx.fxml;
    exports _5_cssStyling;

    opens _6_switchScene to javafx.fxml;
    exports _6_switchScene;

    opens _7_communication to javafx.fxml;
    exports _7_communication;

    opens _8_exitButton to javafx.fxml;
    exports _8_exitButton;

    opens _9_imageView to javafx.fxml;
    exports _9_imageView;

    opens _10_textField to javafx.fxml;
    exports _10_textField;

    opens _11_checkBox to javafx.fxml;
    exports _11_checkBox;

    opens _12_radioButton to javafx.fxml;
    exports _12_radioButton;

    opens _13_datePicker to javafx.fxml;
    exports _13_datePicker;

    opens _14_colorPicker to javafx.fxml;
    exports _14_colorPicker;

    opens _15_choiceBox to javafx.fxml;
    exports _15_choiceBox;

    opens _16_slider to javafx.fxml;
    exports _16_slider;

    opens _17_progressBar to javafx.fxml;
    exports _17_progressBar;

    opens _18_spinner to javafx.fxml;
    exports _18_spinner;

    opens _19_listView to javafx.fxml;
    exports _19_listView;

    opens _20_treeView to javafx.fxml;
    exports _20_treeView;

    opens _21_menuBar to javafx.fxml;
    exports _21_menuBar;

    opens _22_flowPane to javafx.fxml;
    exports _22_flowPane;

    opens _23_keyEvent to javafx.fxml;
    exports _23_keyEvent;

    opens _24_animation to javafx.fxml;
    exports _24_animation;
}