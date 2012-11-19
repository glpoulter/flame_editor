#ifndef VARIABLEDECLAREDDELEGATE_H
#define VARIABLEDECLAREDDELEGATE_H

#include <QItemDelegate>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QComboBox>
#include <QLineEdit>

class VariableDeclaredDelegate : public QItemDelegate
{
    Q_OBJECT

public:
    VariableDeclaredDelegate(QObject *parent = 0);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;

    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;

    void updateEditorGeometry(QWidget *editor,
        const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // VARIABLEDECLAREDDELEGATE_H