/********************************************************************************
** Form generated from reading UI file 'chifoumivue.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHIFOUMIVUE_H
#define UI_CHIFOUMIVUE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChifoumiVue
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutJoueur;
    QLabel *labelJoueur;
    QLabel *labelScoreJoueur;
    QLabel *labelFigureJoueur;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayoutMachine;
    QLabel *labelMachine;
    QLabel *labelScoreMachine;
    QLabel *labelFigureMachine;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QPushButton *pushButtonPierre;
    QPushButton *pushButtonPapier;
    QPushButton *pushButtonCiseau;
    QPushButton *pushButtonNouvellePartie;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChifoumiVue)
    {
        if (ChifoumiVue->objectName().isEmpty())
            ChifoumiVue->setObjectName(QString::fromUtf8("ChifoumiVue"));
        ChifoumiVue->resize(360, 348);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChifoumiVue->sizePolicy().hasHeightForWidth());
        ChifoumiVue->setSizePolicy(sizePolicy);
        ChifoumiVue->setMinimumSize(QSize(300, 300));
        ChifoumiVue->setIconSize(QSize(0, 0));
        centralwidget = new QWidget(ChifoumiVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayoutJoueur = new QVBoxLayout();
        verticalLayoutJoueur->setObjectName(QString::fromUtf8("verticalLayoutJoueur"));
        labelJoueur = new QLabel(centralwidget);
        labelJoueur->setObjectName(QString::fromUtf8("labelJoueur"));
        sizePolicy.setHeightForWidth(labelJoueur->sizePolicy().hasHeightForWidth());
        labelJoueur->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        labelJoueur->setFont(font);
        labelJoueur->setAlignment(Qt::AlignCenter);

        verticalLayoutJoueur->addWidget(labelJoueur);

        labelScoreJoueur = new QLabel(centralwidget);
        labelScoreJoueur->setObjectName(QString::fromUtf8("labelScoreJoueur"));
        sizePolicy.setHeightForWidth(labelScoreJoueur->sizePolicy().hasHeightForWidth());
        labelScoreJoueur->setSizePolicy(sizePolicy);
        labelScoreJoueur->setFont(font);
        labelScoreJoueur->setAlignment(Qt::AlignCenter);

        verticalLayoutJoueur->addWidget(labelScoreJoueur);

        labelFigureJoueur = new QLabel(centralwidget);
        labelFigureJoueur->setObjectName(QString::fromUtf8("labelFigureJoueur"));
        sizePolicy.setHeightForWidth(labelFigureJoueur->sizePolicy().hasHeightForWidth());
        labelFigureJoueur->setSizePolicy(sizePolicy);
        labelFigureJoueur->setMinimumSize(QSize(75, 75));
        labelFigureJoueur->setMaximumSize(QSize(75, 75));
        labelFigureJoueur->setPixmap(QPixmap(QString::fromUtf8(":/images/images/rien_115.png")));
        labelFigureJoueur->setScaledContents(true);
        labelFigureJoueur->setAlignment(Qt::AlignJustify|Qt::AlignTop);

        verticalLayoutJoueur->addWidget(labelFigureJoueur);


        horizontalLayout->addLayout(verticalLayoutJoueur);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(55, 55));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/versus_70.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label, 0, Qt::AlignBottom);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayoutMachine = new QVBoxLayout();
        verticalLayoutMachine->setObjectName(QString::fromUtf8("verticalLayoutMachine"));
        labelMachine = new QLabel(centralwidget);
        labelMachine->setObjectName(QString::fromUtf8("labelMachine"));
        sizePolicy.setHeightForWidth(labelMachine->sizePolicy().hasHeightForWidth());
        labelMachine->setSizePolicy(sizePolicy);
        labelMachine->setFont(font);
        labelMachine->setAlignment(Qt::AlignCenter);

        verticalLayoutMachine->addWidget(labelMachine);

        labelScoreMachine = new QLabel(centralwidget);
        labelScoreMachine->setObjectName(QString::fromUtf8("labelScoreMachine"));
        sizePolicy.setHeightForWidth(labelScoreMachine->sizePolicy().hasHeightForWidth());
        labelScoreMachine->setSizePolicy(sizePolicy);
        labelScoreMachine->setFont(font);
        labelScoreMachine->setAlignment(Qt::AlignCenter);

        verticalLayoutMachine->addWidget(labelScoreMachine);

        labelFigureMachine = new QLabel(centralwidget);
        labelFigureMachine->setObjectName(QString::fromUtf8("labelFigureMachine"));
        sizePolicy.setHeightForWidth(labelFigureMachine->sizePolicy().hasHeightForWidth());
        labelFigureMachine->setSizePolicy(sizePolicy);
        labelFigureMachine->setMinimumSize(QSize(75, 75));
        labelFigureMachine->setMaximumSize(QSize(75, 75));
        labelFigureMachine->setPixmap(QPixmap(QString::fromUtf8(":/images/images/rien_115.png")));
        labelFigureMachine->setScaledContents(true);
        labelFigureMachine->setAlignment(Qt::AlignJustify|Qt::AlignTop);

        verticalLayoutMachine->addWidget(labelFigureMachine);


        horizontalLayout->addLayout(verticalLayoutMachine);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 90));
        pushButtonPierre = new QPushButton(groupBox);
        pushButtonPierre->setObjectName(QString::fromUtf8("pushButtonPierre"));
        pushButtonPierre->setGeometry(QRect(50, 20, 61, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/pierre_115.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPierre->setIcon(icon);
        pushButtonPierre->setIconSize(QSize(65, 65));
        pushButtonPapier = new QPushButton(groupBox);
        pushButtonPapier->setObjectName(QString::fromUtf8("pushButtonPapier"));
        pushButtonPapier->setGeometry(QRect(130, 20, 61, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/papier_115.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPapier->setIcon(icon1);
        pushButtonPapier->setIconSize(QSize(65, 65));
        pushButtonCiseau = new QPushButton(groupBox);
        pushButtonCiseau->setObjectName(QString::fromUtf8("pushButtonCiseau"));
        pushButtonCiseau->setGeometry(QRect(210, 20, 61, 61));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/ciseau_115.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCiseau->setIcon(icon2);
        pushButtonCiseau->setIconSize(QSize(65, 65));

        verticalLayout->addWidget(groupBox);

        pushButtonNouvellePartie = new QPushButton(centralwidget);
        pushButtonNouvellePartie->setObjectName(QString::fromUtf8("pushButtonNouvellePartie"));
        pushButtonNouvellePartie->setMaximumSize(QSize(80, 20));

        verticalLayout->addWidget(pushButtonNouvellePartie, 0, Qt::AlignRight);

        ChifoumiVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChifoumiVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        ChifoumiVue->setMenuBar(menubar);
        statusbar = new QStatusBar(ChifoumiVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ChifoumiVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuAide->menuAction());

        retranslateUi(ChifoumiVue);

        pushButtonNouvellePartie->setDefault(true);


        QMetaObject::connectSlotsByName(ChifoumiVue);
    } // setupUi

    void retranslateUi(QMainWindow *ChifoumiVue)
    {
        ChifoumiVue->setWindowTitle(QCoreApplication::translate("ChifoumiVue", "ChifoumiVue", nullptr));
        labelJoueur->setText(QCoreApplication::translate("ChifoumiVue", "Vous", nullptr));
        labelScoreJoueur->setText(QCoreApplication::translate("ChifoumiVue", "0", nullptr));
        labelFigureJoueur->setText(QString());
        label->setText(QString());
        labelMachine->setText(QCoreApplication::translate("ChifoumiVue", "Machine", nullptr));
        labelScoreMachine->setText(QCoreApplication::translate("ChifoumiVue", "0", nullptr));
        labelFigureMachine->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("ChifoumiVue", "Choisissez votre figure :", nullptr));
        pushButtonPierre->setText(QString());
        pushButtonPapier->setText(QString());
        pushButtonCiseau->setText(QString());
        pushButtonNouvellePartie->setText(QCoreApplication::translate("ChifoumiVue", "Nouvelle Partie", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("ChifoumiVue", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("ChifoumiVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChifoumiVue: public Ui_ChifoumiVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHIFOUMIVUE_H
