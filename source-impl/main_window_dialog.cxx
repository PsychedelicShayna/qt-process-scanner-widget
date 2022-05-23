#include "main_window_dialog.hxx"
#include "ui_main_window_dialog.h"

void MainWindow::spawnProcessScannerDlgWindowMode() {
    if(processScannerDlgWindowMode == nullptr) {
        processScannerDlgWindowMode = new ProcessScannerDialog { this, ProcessScanner::SCAN_SCOPE::WINDOW_MODE };

        connect(processScannerDlgWindowMode, &ProcessScannerDialog::treeSelectionMade, [this](QString process_name, HWND window_handle) -> void {
            ui->lineEditWindowModeScanner->setText(process_name);
            processScannerDlgWindowMode->close();
        });

        connect(processScannerDlgWindowMode, &ProcessScannerDialog::destroyed, [this]() -> void {
            processScannerDlgWindowMode = nullptr;
        });

        processScannerDlgWindowMode->show();
    }
}

void MainWindow::spawnProcessScannerDlgProcessMode() {
    if(processScannerDlgProcessMode == nullptr) {
        processScannerDlgProcessMode = new ProcessScannerDialog { this, ProcessScanner::SCAN_SCOPE::PROCESS_MODE };

        connect(processScannerDlgProcessMode, &ProcessScannerDialog::treeSelectionMade, [this](QString process_name, HWND window_handle) -> void {
            ui->lineEditProcessModeScanner->setText(process_name);
            processScannerDlgProcessMode->close();
        });

        connect(processScannerDlgProcessMode, &ProcessScannerDialog::destroyed, [this]() -> void {
            processScannerDlgProcessMode = nullptr;
        });

        processScannerDlgProcessMode->show();
    }
}

MainWindow::MainWindow(QWidget* parent)
    :
      QMainWindow                  { parent },
      ui 						   { new Ui::MainWindow },
      processScannerDlgWindowMode  { nullptr },
      processScannerDlgProcessMode { nullptr }
{
    ui->setupUi(this);

    setWindowFlags(
                Qt::Dialog
                | Qt::CustomizeWindowHint
                | Qt::WindowTitleHint
                | Qt::WindowCloseButtonHint
                );

    connect(ui->pushButtonSpawnScannerWindowMode, &QPushButton::clicked,
            this, 								  &MainWindow::spawnProcessScannerDlgWindowMode);

    connect(ui->pushButtonSpawnScannerProcessMode, &QPushButton::clicked,
            this, 								   &MainWindow::spawnProcessScannerDlgProcessMode);
}

MainWindow::~MainWindow() {
    delete ui;
}

