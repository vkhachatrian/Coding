#include "calculator.h"





QPushButton* Calculator::createButton(const QString &str)
{
    QPushButton* pcmd = new QPushButton(str, this);
    pcmd->setMinimumSize(80,80);
    QString style = "QPushButton {background: #333333}"
                    "QPushButton:hover {background: #737373}"
                    "QPushButton{border-style: outset}"
                    "QPushButton{border-radius: 40px}"
                    "QPushButton{color: white}"
                    "QPushButton{font: 30px,20px}"
            ;
    pcmd->setStyleSheet(style);

    if(pcmd->text() == "AC" ||pcmd->text() == "±" || pcmd->text() == "%" )
    {
        pcmd->setStyleSheet(style + "QPushButton{background: #a5a5a5}" + "QPushButton:hover {background: #d9d9d9}" + "QPushButton{color: black}");
    }

    if(pcmd->text() == "÷" || pcmd->text() == "×" || pcmd->text() == "-" || pcmd->text() == "+" || pcmd->text() == "=")
    {
        pcmd->setStyleSheet(style +  "QPushButton{background: #fe9e0a}" + "QPushButton:hover {background: #fbc78e}");
    }

    connect(pcmd, SIGNAL(clicked()),this, SLOT(slotButtonClicked()));
    return pcmd;
}




Calculator::Calculator(QWidget* pwgt):QWidget(pwgt)
{
    m_plcd = new QLineEdit(this);
    m_plcd->setStyleSheet("color:white");
    m_plcd->setReadOnly(true);
    m_plcd->setFrame(false);
    m_plcd->setAlignment(Qt::AlignRight);
    QFont font = m_plcd->font();
    font.setPointSize(font.pointSize() + 38);
    m_plcd->setFont(font);


    QString aButtons[4][4] = {{"7","8","9","÷"},
                            {"4","5","6","×"},
                            {"1","2","3","-"},
                            {"0           ",",","=","+"}
                           };

    QGridLayout* ptopLayout = new QGridLayout(this);
    ptopLayout->addWidget(m_plcd,0,0,2,5);
    ptopLayout->addWidget(createButton("AC"),1,0);
    ptopLayout->addWidget(createButton("±"),1,1);
    ptopLayout->addWidget(createButton("%"),1,2);


    for(int i = 0;i < 4;++i)
    {
        for(int j = 0; j < 4;++j)
        {


            if(aButtons[i][j] == "÷")
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),1,3);
            }
            else if(aButtons[i][j] == "×")
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),2,3);
            }
            else if(aButtons[i][j] == "-")
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),3,3);
            }
            else if(aButtons[i][j] == "+")
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),4,3);
            }
            else if(aButtons[i][j] == "=")
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),5,3);
            }
            else if(aButtons[i][j] == ",")
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),5,2);
            }
            else if(aButtons[i][j] == "0           ")
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),5,0,0,2);
            }
            else
            {
                ptopLayout->addWidget(createButton(aButtons[i][j]),i+2,j);
            }
        }
    }
    setLayout(ptopLayout);
}





void Calculator::calculate()
{

    double dOperand2 = m_stk.pop().toDouble();
    QString strOperation = m_stk.pop();
    double dOperand1 = m_stk.pop().toDouble();



    double dResult = 0;

    if(strOperation == "+")
    {
        dResult = dOperand1+dOperand2;
    }
    if(strOperation == "-")
    {
        dResult = dOperand1 - dOperand2;
    }

    if(strOperation == "÷")
    {
        dResult = dOperand1 / dOperand2;
    }
    if(strOperation == "×")
    {
        dResult = dOperand1 * dOperand2;
    }
    QString a = QString().setNum(dResult);

    if(a.contains('.'))
    a[a.lastIndexOf('.')] = ',';
    m_plcd->setText(a);
}


void Calculator::slotButtonClicked()
{
    bool isVisit = false;
    QString str =((QPushButton*)sender())->text();
    if (str == "AC") {
        m_stk.clear();
        m_strDisplay = "";
        m_plcd->clear();
        m_plcd->setText("0");
        return;
    }


    if (str.contains(QRegExp("[0-9]")))
    {
        if(m_strDisplay == '0')
        {
            if(str.right(12) == "0           ")
            {
                str = '0';
            }
            if(str != '0')
            {

                m_strDisplay = str;
                m_plcd->setText(m_strDisplay);
            }
        }
        else
        {
            if(str.right(12) == "0           ")
            {
                str = '0';
            }
            m_strDisplay += str;
            if(m_strDisplay.contains('.'))
            m_strDisplay[m_strDisplay.lastIndexOf('.')] = ',';
            m_plcd->setText(m_strDisplay);
        }

    }
    else if(str == ",")
    {
        isVisit = true;
        if(m_strDisplay == "")
        {

            m_strDisplay = '0' + str;
            m_plcd->setText(m_strDisplay);
            int a = m_strDisplay.lastIndexOf(',');
            m_strDisplay[a] = '.';
        }
        else if(m_stk.isEmpty() && !m_strDisplay.contains('.') && !isVisit)
        {

            m_strDisplay += str;
            m_plcd->setText(m_strDisplay);
            int a = m_strDisplay.lastIndexOf(',');
            m_strDisplay[a] = '.';
        }
        else if (!m_strDisplay.contains('.') && !m_strDisplay.contains(','))
        {
            m_strDisplay += str;
            m_plcd->setText(m_strDisplay);
        }
        else{
            if (m_strDisplay.contains('.'))
                m_strDisplay[m_strDisplay.lastIndexOf('.')] = ',';


            m_plcd->setText(m_strDisplay);
            int a = m_strDisplay.lastIndexOf(',');


            if (m_strDisplay.contains(','))
            m_strDisplay[a] = '.';
        }
    }
    else if(str == "=")
    {
        if(m_strDisplay != "")
        {
            if(m_strDisplay.contains(','))
            m_strDisplay[m_strDisplay.lastIndexOf(',')] = '.';


            m_stk.push(m_strDisplay);
            m_strDisplay.clear();
        }
        if(m_stk.count() > 2)
        {
            calculate();
            m_stk.clear();
            QString b = m_plcd->displayText();
            if(b.contains(','))
            b[b.lastIndexOf(',')] = '.';
            m_stk.push_back(b);
        }
    }
    else
    {
        if(m_strDisplay != "")
        {
            if(m_strDisplay.contains(','))
            m_strDisplay[m_strDisplay.lastIndexOf(',')] = '.';

            m_stk.push(m_strDisplay);
            m_strDisplay.clear();
        }
        if(m_stk.count() > 2)
        {
            calculate();
            m_stk.clear();
            QString b = m_plcd->displayText();
            if(b.contains(','))
            b[b.lastIndexOf(',')] = '.';
            m_stk.push_back(b);
        }
        if(!m_stk.isEmpty() && m_stk.top() == "×" && m_stk.top() == str)
        {
            m_stk.pop();
            m_stk.push(str);
        }
        else if(!m_stk.isEmpty() && m_stk.top() == "÷" && m_stk.top() == str)
        {
            m_stk.pop();
            m_stk.push(str);
        }
        else if(!m_stk.isEmpty() && m_stk.top() == "+" && m_stk.top() == str)
        {
            m_stk.pop();
            m_stk.push(str);
        }
        else if(!m_stk.isEmpty() && m_stk.top() == "-" && m_stk.top() == str)
        {
            m_stk.pop();
            m_stk.push(str);
        }
        else
        {
            if (!m_stk.isEmpty() && (m_stk.top() == "×" || m_stk.top() == "÷" || m_stk.top() == "+" || m_stk.top() == "-"))
            {
                m_stk.pop();
                m_stk.push(str);
            }
            else m_stk.push(str);            
        }
    }
}

