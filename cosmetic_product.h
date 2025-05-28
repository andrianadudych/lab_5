#ifndef COSMETIC_PRODUCT_H
#define COSMETIC_PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class ProductBase {
protected:
    string id;
public:
    ProductBase(string id);
    virtual ~ProductBase();
    void DisplayId();
};

class BrandInfo {
protected:
    string brand;
    string country;
public:
    BrandInfo(string brand, string country);
    virtual ~BrandInfo();
    void DisplayBrand();
};

class ColoredProduct {
protected:
    string color;
public:
    ColoredProduct(string color);
    virtual ~ColoredProduct();
    void DisplayColor();
};

class CosmeticProduct : public ProductBase, public BrandInfo {
protected:
    string name;
    double price;
public:
    CosmeticProduct(string id, string brand, string country, string name, double price);
    ~CosmeticProduct() override;
    void DisplayInfo();
};

class FullProduct : virtual public ProductBase,virtual public BrandInfo,virtual public ColoredProduct {
protected:
    string type;
    double price;
public:
    FullProduct(string id, string brand, string country, string color, string type, double price);
    ~FullProduct() override;
    void DisplayFullInfo();
};

class TypedProduct : virtual public ProductBase {
protected:
    string productType;
public:
    TypedProduct(string id, string type);
    ~TypedProduct() override;
    void DisplayType();
};

class VolumeProduct : virtual public ProductBase {
protected:
    double productVolume;
public:
    VolumeProduct(string id, double volume);
    ~VolumeProduct() override;
    void DisplayVolume();
};

class LuxuryProduct : public TypedProduct, public VolumeProduct {
    string specialFeature;
public:
    LuxuryProduct(string id, string type, double volume, string feature);
    ~LuxuryProduct() override;
    void DisplayLuxury();
};

#endif