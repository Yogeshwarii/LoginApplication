#include "mainwindow.h"
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QDebug>
#include<QMessageBox>
#include<QVBoxLayout>
#include<QFont>
#include<dialog.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    { //username icon
        QLabel *lab=new QLabel(this);
        lab->setMinimumSize(70,50);
        lab->move(100,50);

         QPixmap pixx("C:/Users/91978/Documents/LoginApplicationForm/user icon.png");
        lab->setPixmap(pixx.scaled(20,20));

        QLabel *mlabel=new QLabel(this);
        mlabel->move(180,25);
        mlabel->setAlignment(Qt::AlignCenter);
       QPixmap pixxx("C:/Users/91978/Documents/LoginApplicationForm/signup.png");
        mlabel->setPixmap(pixxx.scaled(80,20));

        QLabel *unLabel=new QLabel("UserName",this);
        unLabel->setMinimumSize(70,50);
        unLabel->move(130,50);
        QPalette l1;
        l1.setColor(QPalette::WindowText,Qt::red);
        unLabel->setPalette(l1);


        QLineEdit *unLineEdit=new QLineEdit(this);
        unLineEdit->setMinimumSize(200,50);
        unLineEdit->move(220,50);
        unLineEdit->setStyleSheet("border:2px solid red");


        QLabel *labb=new QLabel(this);
        labb->setMinimumSize(200,50);
        labb->move(100,110);
        QPixmap pix("C:/Users/91978/Documents/LoginApplicationForm/password.png");
        labb->setPixmap(pix.scaled(20,20));


        QLabel *pwd=new QLabel("Password",this);
        pwd->setMinimumSize(70,50);
        pwd->move(130,110);
        QPalette l2;
        l2.setColor(QPalette::WindowText,Qt::green);
        pwd->setPalette(l2);


        QLineEdit *pLineEdit=new QLineEdit(this);
        pLineEdit->setMinimumSize(200,50);
        pLineEdit->move(220,110);
        pLineEdit->setStyleSheet("border:2px solid green");


        QLabel *account=new QLabel("Don't have account",this);
        account->setMinimumSize(110,50);
        account->move(110,170);


        QFont button("Times",8,QFont::Bold);
        QPushButton *button1=new QPushButton("SignUp",this);
        button1->setFont(button);
        button1->move(220,180);
        connect(button1,&QPushButton::clicked,[=](){
            Dialog *dialog=new Dialog(this);
            dialog->exec();

        });



        QFont buttons("Times",18,QFont::Bold);
        QPushButton *button2=new QPushButton("Login",this);
        button2->setFont(buttons);
        button2->move(220,280);
        connect(button2,&QPushButton::clicked,[=](){
            QString userName=unLineEdit->text();
            QString password=pLineEdit->text();
            if(userName=="Text"&&password=="Text")
            {
                QMessageBox::information(this,"Login","UserName and Password is correct");

            }
            else
            {
                QMessageBox::information(this,"Login","UserName and Password is incorrect");
            }

        });


        unLineEdit->setPlaceholderText("username");
        pLineEdit->setPlaceholderText("password");
        pLineEdit->setEchoMode(QLineEdit::Password);


    }

}

MainWindow::~MainWindow()
{
}

