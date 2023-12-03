#include "Scan.h"
#include "ui_Scan.h"
// Include OpenCV headers if needed
// #include <opencv2/opencv.hpp>

Scan::Scan(QWidget *parent) 
    : QWidget(parent), 
      ui(new Ui::Scan) {
    ui->setupUi(this);

    // Assuming 'label' is the placeholder for the video feed and 'pushButton' is the stop button
    connect(ui->pushButton, &QPushButton::clicked, this, &Scan::on_stopButton_clicked);

    // Initialize OpenCV capture and display loop here...
}

Scan::~Scan() {
    // Properly release OpenCV resources if needed
    delete ui;
}

void Scan::on_stopButton_clicked() {
    // Stop the OpenCV video capture and any related operations here...
    emit stopClicked(); // Emit signal to indicate stopping the scanning process
}
