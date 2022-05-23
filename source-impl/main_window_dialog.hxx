#ifndef MAIN_WINDOW_DIALOG_HXX
#define MAIN_WINDOW_DIALOG_HXX

#include <QMainWindow>

#include "source/process_scanner_dialog.hxx"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

protected:
    Ui::MainWindow* ui;

    ProcessScannerDialog* processScannerDlgWindowMode,
                        * processScannerDlgProcessMode;

protected slots:
    void spawnProcessScannerDlgWindowMode();
    void spawnProcessScannerDlgProcessMode();

public:
    MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow() override;
};

#endif // MAIN_WINDOW_DIALOG_HXX
