QT += core gui widgets
CONFIG += c++17

LIBS += -lUser32

SOURCES += \
    source-impl/main.cpp \
    source-impl/main_window_dialog.cxx \
    source/process_scanner_dialog.cxx \
    source/process_scanner.cpp

HEADERS += \
    source-impl/main_window_dialog.hxx \
    source/process_scanner_dialog.hxx \
    source/process_scanner.hpp

FORMS += \
    source-impl/main_window_dialog.ui \
    source/process_scanner_dialog.ui
