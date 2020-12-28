/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: fsiamp
 *
 * Created on June 25, 2017, 1:10 AM
 */

#include <QApplication>
#include <QSqlDatabase>
#include "newForm.h"
#include <QSqlQuery>
#include <QtGlobal>
#include <iostream>
#include <QSqlRelationalTableModel>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    newForm form;
    form.show();  
    
    // create and show your widgets here

    return app.exec();
}
