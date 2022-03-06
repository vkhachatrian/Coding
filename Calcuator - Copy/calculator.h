#pragma once
//#ifndef CALCULATOR_H
//#define CALCULATOR_H

#include <QtWidgets>
#include <QStack>
#include <QLCDNumber>
#include <QPushButton>

class QLCDNumber;
class QPushButton;



//=====================================================================
class Calculator:public QWidget
{
    Q_OBJECT
private:
    QLineEdit*  m_plcd;
    QStack<QString> m_stk;
    QString m_strDisplay;
public:
    Calculator(QWidget* pwgt = 0);
    QPushButton* createButton(const QString& str);
    void calculate();
public slots:
    void slotButtonClicked();
};





//#endif // CALCULATOR_H
