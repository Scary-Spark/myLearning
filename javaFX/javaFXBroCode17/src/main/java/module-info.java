module com.example.javafxbrocode {
    requires javafx.controls;
    requires javafx.fxml;

    requires org.controlsfx.controls;
    requires com.dlsc.formsfx;
    requires org.kordamp.bootstrapfx.core;

    opens _1_stages to javafx.fxml;
    exports _1_stages;

    opens _2_scenes to javafx.fxml;
    exports _2_scenes;

    opens _3_sceneBuilder to javafx.fxml;
    exports _3_sceneBuilder;

    opens _4_eventHandler to javafx.fxml;
    exports _4_eventHandler;
}