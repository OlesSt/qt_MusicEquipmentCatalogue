#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include <QObject>
#include <QPixmap>

class Compressor
{

public:
    Compressor();
    ~Compressor() {}


    QString brand() const;
    void setBrand(const QString &newBrand);

    QString model() const;
    void setModel(const QString &newModel);

    QString price() const;
    void setPrice(const QString &newPrice);

    QString description() const;
    void setDescription(const QString &newDescription);

    QPixmap image() const;
    void setImage(const QPixmap &newImage);

signals:

private:
    QString m_brand;
    QString m_model;
    QString m_price;
    QString m_description;
    QPixmap m_image;
};

#endif // COMPRESSOR_H
