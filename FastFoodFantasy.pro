#-------------------------------------------------
#
# Project created by QtCreator 2018-02-10T15:12:52
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FastFoodFantasy
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        launcher.cpp \
        dbmanager.cpp \
    datamanager.cpp \
    restauranttable.cpp \
    viewrest.cpp \
    menuview.cpp \
    menutable.cpp \
    tripview.cpp \
    login.cpp \
    adminlauncher.cpp \
    addrestaurant.cpp \
    addmenu.cpp \
    adddistance.cpp \
    carttable.cpp \
    triptable.cpp \
    custom_trip.cpp \
    customtrip_table.cpp \
    invoice.cpp

HEADERS += \
        launcher.h \
        dbmanager.h \
    datamanager.h \
    main.h \
    restauranttable.h \
    structs.h \
    restView.h \
    menutable.h \
    menuview.h \
    tripview.h \
    login.h \
    adminlauncher.h \
    addrestaurant.h \
    addmenu.h \
    adddistance.h \
    carttable.h \
    triptable.h \
    custom_trip.h \
    customtrip_table.h \
    invoice.h

FORMS += \
        launcher.ui \
    viewrest.ui \
    menuview.ui \
    tripview.ui \
    login.ui \
    adminlauncher.ui \
    addrestaurant.ui \
    addmenu.ui \
    adddistance.ui \
    custom_trip.ui \
    invoice.ui
