#ifndef MPOSTDIALOG_H
#define MPOSTDIALOG_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QComboBox>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QCheckBox>
#include <QGroupBox>
#include "mpost.h"
#include "memorymodel.h"

class QDialogButtonBox;

class MpostDialog : public QDialog
{
    Q_OBJECT

public:
    MpostDialog(MemoryModel * m, QWidget *parent = 0);
    void setMpost(Mpost m);
    Mpost getMpost();

signals:
    void setVariableComboBox(int i);
    void setVariable2ComboBox(int i);
    void setOpComboBox(int i);

private:
    QDialogButtonBox *buttonBox;
    QComboBox *variable;
    QComboBox *variable2;
    QComboBox * op;
    QSpinBox * value;
    QSpinBox * value2;
    QCheckBox * myEnabled;
    QGroupBox *lhsGroup;
    QGroupBox *opGroup;
    QGroupBox *rhsGroup;
    Mpost mpost;
    MemoryModel * memory;
    QStringList operators;
};

#endif // MPOSTDIALOG_H
