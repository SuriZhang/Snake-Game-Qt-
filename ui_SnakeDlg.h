/********************************************************************************
** Form generated from reading UI file 'SnakeDlg.ui'
**
** Created: Thu Jul 23 09:31:45 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAKEDLG_H
#define UI_SNAKEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SnakeDlg
{
public:
    QVBoxLayout *m_layVer;
    QLabel *m_labScoreboard;
    QFrame *m_frmAction;

    void setupUi(QDialog *SnakeDlg)
    {
        if (SnakeDlg->objectName().isEmpty())
            SnakeDlg->setObjectName(QString::fromUtf8("SnakeDlg"));
        SnakeDlg->resize(520, 520);
        m_layVer = new QVBoxLayout(SnakeDlg);
        m_layVer->setSpacing(6);
        m_layVer->setContentsMargins(11, 11, 11, 11);
        m_layVer->setObjectName(QString::fromUtf8("m_layVer"));
        m_labScoreboard = new QLabel(SnakeDlg);
        m_labScoreboard->setObjectName(QString::fromUtf8("m_labScoreboard"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(213, 255, 223, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(149, 255, 175, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 170, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 255, 191, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        m_labScoreboard->setPalette(palette);
        m_labScoreboard->setAutoFillBackground(true);
        m_labScoreboard->setFrameShape(QFrame::Panel);
        m_labScoreboard->setFrameShadow(QFrame::Sunken);
        m_labScoreboard->setAlignment(Qt::AlignCenter);

        m_layVer->addWidget(m_labScoreboard);

        m_frmAction = new QFrame(SnakeDlg);
        m_frmAction->setObjectName(QString::fromUtf8("m_frmAction"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_frmAction->sizePolicy().hasHeightForWidth());
        m_frmAction->setSizePolicy(sizePolicy);
        m_frmAction->setFrameShape(QFrame::Box);
        m_frmAction->setFrameShadow(QFrame::Raised);

        m_layVer->addWidget(m_frmAction);


        retranslateUi(SnakeDlg);

        QMetaObject::connectSlotsByName(SnakeDlg);
    } // setupUi

    void retranslateUi(QDialog *SnakeDlg)
    {
        SnakeDlg->setWindowTitle(QApplication::translate("SnakeDlg", "\350\264\252\351\243\237\350\233\207", 0, QApplication::UnicodeUTF8));
        m_labScoreboard->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SnakeDlg: public Ui_SnakeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAKEDLG_H
