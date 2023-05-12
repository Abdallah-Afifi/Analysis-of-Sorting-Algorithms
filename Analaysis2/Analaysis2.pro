QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    analysis.cpp \
    bubblesort.cpp \
    countingsort.cpp \
    heapsort.cpp \
    insertionsort.cpp \
    main.cpp \
    mainwindow.cpp \
    mergesort.cpp \
    quicksortfirstpivot.cpp \
    quicksortmedianpivot.cpp \
    quicksortrandompivot.cpp \
    randompermutationvectorgenerator.cpp \
    selectionsort.cpp \
    shellsort.cpp \
    sortingalgorithm.cpp \
    sorttester.cpp \
    treesort.cpp

HEADERS += \
    analysis.h \
    bubblesort.h \
    countingsort.h \
    heapsort.h \
    insertionsort.h \
    mainwindow.h \
    mergesort.h \
    quicksortfirstpivot.h \
    quicksortmedianpivot.h \
    quicksortrandompivot.h \
    randompermutationvectorgenerator.h \
    selectionsort.h \
    shellsort.h \
    sortingalgorithm.h \
    sorttester.h \
    treesort.h

FORMS += \
    analysis.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
