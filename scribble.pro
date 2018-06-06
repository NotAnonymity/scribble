QT += widgets
requires(qtConfig(filedialog))
qtHaveModule(printsupport): QT += printsupport
target.path = G:\qt\build-scribble
HEADERS       = mainwindow.h \
                scribblearea.h \
    scribbleshape.h \
    fillingdialog.h \
    sizedialog.h \
    fillingdialog.h \
    mainwindow.h \
    scribblearea.h \
    scribbleshape.h \
    sizedialog.h
SOURCES       = main.cpp \
                mainwindow.cpp \
                scribblearea.cpp \
    scribbleshape.cpp \
    fillingdialog.cpp \
    sizedialog.cpp \
    fillingdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    scribblearea.cpp \
    scribbleshape.cpp \
    sizedialog.cpp

# install

INSTALLS += target

FORMS += \
    fillingdialog.ui \
    sizedialog.ui \
    fillingdialog.ui \
    sizedialog.ui

RESOURCES += \
    icon.qrc \
    icon.qrc

DISTFILES += \
    icon/pen.png \
    icon/about.png \
    icon/brush.png \
    icon/color.png \
    icon/dashdotdot.png \
    icon/dashdotline.png \
    icon/dashline.png \
    icon/dotline.png \
    icon/ellipse.png \
    icon/eraser.png \
    icon/exit.png \
    icon/fill.png \
    icon/line.png \
    icon/linecolor.png \
    icon/move.png \
    icon/open.png \
    icon/painter.png \
    icon/pen.png \
    icon/print.png \
    icon/rect.png \
    icon/save.png \
    icon/width.png \
    rect.png \
    save.png

INCLUDEPATH +=  "C:\Program Files (x86)\Tesseract-OCR\include" \
                "C:\Program Files (x86)\Tesseract-OCR\include\leptonica" \
                "C:\Program Files (x86)\Tesseract-OCR\include\tesseract"


win32:CONFIG(debug, debug | release):{
LIBS +=  -L"C:\Program Files (x86)\Tesseract-OCR\lib" \
-llibtesseract302d              \
-llibtesseract302-static-debug  \
-llibtiff394-static-mtdll-debug \
-lzlib125-static-mtdll-debug    \
-llibpng143-static-mtdll-debug  \
-lliblept168-static-mtdll-debug \
-llibjpeg8c-static-mtdll-debug  \
-lgiflib416-static-mtdll-debug  \
-lliblept168d                   \
-llibtesseract302           \
-llibtesseract302-static    \
-llibtiff394-static-mtdll   \
-lzlib125-static-mtdll      \
-llibpng143-static-mtdll    \
-lliblept168-static-mtdll   \
-llibjpeg8c-static-mtdll    \
-lgiflib416-static-mtdll    \
-lliblept168                \

} else : win32:CONFIG(release, debug | release):{
LIBS +=  -L"C:\Program Files (x86)\Tesseract-OCR\lib" \
-llibtesseract302           \
-llibtesseract302-static    \
-llibtiff394-static-mtdll   \
-lzlib125-static-mtdll      \
-llibpng143-static-mtdll    \
-lliblept168-static-mtdll   \
-llibjpeg8c-static-mtdll    \
-lgiflib416-static-mtdll    \
-lliblept168                \

}

SUBDIRS += \
    scribble.pro
