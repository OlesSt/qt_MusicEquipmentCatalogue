#include "compressor.h"

Compressor::Compressor()
{

}

QString Compressor::brand() const
{
    return m_brand;
}

void Compressor::setBrand(const QString &newBrand)
{
    m_brand = newBrand;
}

QString Compressor::model() const
{
    return m_model;
}

void Compressor::setModel(const QString &newModel)
{
    m_model = newModel;
}

QString Compressor::price() const
{
    return m_price;
}

void Compressor::setPrice(const QString &newPrice)
{
    m_price = newPrice;
}

QString Compressor::description() const
{
    return m_description;
}

void Compressor::setDescription(const QString &newDescription)
{
    m_description = newDescription;
}

QPixmap Compressor::image() const
{
    return m_image;
}

void Compressor::setImage(const QPixmap &newImage)
{
    m_image = newImage;
}
