#-------------------------------------------------
#
# Project created by QtCreator 2020-04-16T16:46:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test_main
TEMPLATE = app


SOURCES += \
    usb_test.cpp \
    uarttest.cpp \
    test_main.cpp \
    spi_test.cpp \
    main.cpp \
    keypad.cpp \
    ii2test.cpp \
    gpiotest.cpp \
    eth_test.cpp \
    direction.cpp \
    Api_Gpio.cpp

HEADERS  += \
    usb_test.h \
    uarttest.h \
    test_main.h \
    spi_test.h \
    keypad.h \
    ii2test.h \
    gpiotest.h \
    eth_test.h \
    direction.h \
    Api_Gpio.h \
    Api_Drv.h \
    Api_Defines.h

FORMS    += \
    usb_test.ui \
    uarttest.ui \
    test_main.ui \
    spi_test.ui \
    keypad.ui \
    ii2test.ui \
    gpiotest.ui \
    eth_test.ui \
    direction.ui

OTHER_FILES += \
    test_main.pro.user \
    test_main.pro \
    Eth_test.pro
