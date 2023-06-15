#include "qwcomboboxdelegate.h"

QWcomboboxdelegate::QWcomboboxdelegate(QObject *parent):QStyledItemDelegate(parent)
{
}

void QWcomboboxdelegate::setitems(QStringList sl, bool ie)
{
    strlist = sl;
    isedit = ie;
}

QWidget* QWcomboboxdelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QComboBox *combobox = new QComboBox(parent);
    combobox->addItems(strlist);
    combobox->setEditable(isedit);
    return combobox;
}

void QWcomboboxdelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QString value = index.model()->data(index, Qt::EditRole).toString();
    QComboBox *combobox = static_cast<QComboBox*>(editor);
    combobox->setCurrentText(value);
}

void QWcomboboxdelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *combobox = static_cast<QComboBox*>(editor);
    QString value = combobox->currentText();
    model->setData(index, value, Qt::EditRole);
}

void QWcomboboxdelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}
