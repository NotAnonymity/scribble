#include <QApplication>

#include "mainwindow.h"
/*#include "baseapi.h"
#include "allheaders.h"
#include <iostream>*/
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
   /* std::cout<<"app start ..."<<std::endl;

    tesseract::TessBaseAPI tessapi;
    tessapi.Init(NULL,"eng",tesseract::OEM_DEFAULT);

    const char * filepath = "C:\Users\Dell\Pictures\test.png";

    std::string textouttemp;
    STRING textout;
    if(!tessapi.ProcessPages(filepath,NULL,0,&textout)){
        std::cout<<"tesseract error!"<<std::endl;
        return -1;
    }

    textouttemp = textout.string();
    std::cout<<textouttemp;//<<std::endl;
    std::cout<<textouttemp.c_str();//<<std::endl;

    std::cout<<"app done ..."<<std::endl;
    return 0;*/
    return app.exec();
}
