/********************************************************************************
** Form generated from reading UI file 'newForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFORM_H
#define UI_NEWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newForm
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *urlEdit;
    QTextEdit *codeEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *newForm)
    {
        if (newForm->objectName().isEmpty())
            newForm->setObjectName(QStringLiteral("newForm"));
        newForm->resize(815, 746);
        verticalLayout = new QVBoxLayout(newForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        urlEdit = new QTextEdit(newForm);
        urlEdit->setObjectName(QStringLiteral("urlEdit"));
        urlEdit->setMinimumSize(QSize(100, 50));
        urlEdit->setMaximumSize(QSize(1000, 50));
        QFont font;
        font.setFamily(QStringLiteral("Geneva"));
        font.setPointSize(18);
        urlEdit->setFont(font);

        verticalLayout->addWidget(urlEdit);

        codeEdit = new QTextEdit(newForm);
        codeEdit->setObjectName(QStringLiteral("codeEdit"));
        codeEdit->setFont(font);

        verticalLayout->addWidget(codeEdit);

        pushButton = new QPushButton(newForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(113, 32));
        QFont font1;
        font1.setFamily(QStringLiteral("Futura"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QStringLiteral(""));
#endif // QT_NO_SHORTCUT
        pushButton->setAutoDefault(false);

        verticalLayout->addWidget(pushButton);


        retranslateUi(newForm);

        QMetaObject::connectSlotsByName(newForm);
    } // setupUi

    void retranslateUi(QDialog *newForm)
    {
        newForm->setWindowTitle(QApplication::translate("newForm", "paroDATA", Q_NULLPTR));
        urlEdit->setHtml(QApplication::translate("newForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Geneva'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text';\">Website URL</span></p></body></html>", Q_NULLPTR));
        urlEdit->setPlaceholderText(QString());
        codeEdit->setHtml(QApplication::translate("newForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Geneva'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.SF NS Text';\">Website Source Code</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("newForm", "Submit Code", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class newForm: public Ui_newForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFORM_H
