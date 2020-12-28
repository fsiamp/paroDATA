/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newForm.cpp
 * Author: fsiamp
 *
 * Created on June 25, 2017, 11:50 AM
 */

#include "newForm.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QInputDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtGlobal>
#include <iostream>
#include <QSqlRelationalTableModel>
#include <QSqlError>
newForm::newForm() {
    widget.setupUi(this);
}

newForm::~newForm() {
}

void newForm::on_pushButton_clicked()
{
    
    QString url = widget.urlEdit->toPlainText(); 
    QString code = widget.codeEdit->toPlainText(); 
    QString name = "archive.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");//not dbConnection
    db.setDatabaseName(name);
    db.open();
    QSqlQuery query;
    query.prepare("INSERT INTO websites (url, code) VALUES(:url, :code)");
    query.bindValue(":url", url);
    query.bindValue(":code", code);

    if(query.exec())
   {
        QMessageBox::information(this,"xxx","Code was successfully submitted to database. Open archive.db file for displaying new row.");
   }
   else
   {
        qDebug() << query.lastError();
        QMessageBox::information(this,"xxx","Code failed to be submitted");
        
   }

}
