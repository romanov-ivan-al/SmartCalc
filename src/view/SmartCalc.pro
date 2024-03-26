QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    debit.cc \
    main.cc \
    qcustomplot.cc \
    smartcalc.cc \
    credit.cc \
    ../model/model.cc \
    ../controller/controller.cc
 

HEADERS += \
    debit.h \
    qcustomplot.h \
    smartcalc.h \
    qcustomplot.h \
    credit.h \
    ../model/model.h \
    ../controller/controller.h 


FORMS += \
    credit.ui \
    debit.ui \
    smartcalc.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
