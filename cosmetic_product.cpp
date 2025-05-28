#include "cosmetic_product.h"

ProductBase::ProductBase(string id) : id(id) {
    cout << "Конструктор продукту (" << id << ")\n";
}

ProductBase::~ProductBase() {
    cout << "Деструктор продукту (" << id << ")\n";
}

void ProductBase::DisplayId() {
    cout << "ID продукту: " << id << endl;
}

BrandInfo::BrandInfo(string brand, string country)
    : brand(brand), country(country) {
    cout << "Конструктор інформації про бренд (" << brand << ")\n";
}

BrandInfo::~BrandInfo() {
    cout << "Деструктор інформації про бренд (" << brand << ")\n";
}

void BrandInfo::DisplayBrand() {
    cout << "Бренд: " << brand << "\nКраїна: " << country << endl;
}

ColoredProduct::ColoredProduct(string color) : color(color) {
    cout << "Конструктор кольорового продукту (" << color << ")\n";
}

ColoredProduct::~ColoredProduct() {
    cout << "Деструктор кольорового продукту (" << color << ")\n";
}

void ColoredProduct::DisplayColor() {
    cout << "Колір: " << color << endl;
}

CosmeticProduct::CosmeticProduct(string id, string brand, string country,
                               string name, double price)
    : ProductBase(id), BrandInfo(brand, country), name(name), price(price) {
    cout << "Конструктор косметичного продукту (" << name << ")\n";
}

CosmeticProduct::~CosmeticProduct() {
    cout << "Деструктор косметичного продукту (" << name << ")\n";
}

void CosmeticProduct::DisplayInfo() {
    DisplayId();
    DisplayBrand();
    cout << "Назва: " << name << "\nЦіна: " << price << " грн" << endl;
}

FullProduct::FullProduct(string id, string brand, string country, string color, string type, double price)
    : ProductBase(id), BrandInfo(brand, country), ColoredProduct(color), type(type), price(price) {
    cout << "Конструктор повного продукту (" << type << ")\n";
}


FullProduct::~FullProduct() {
    cout << "Деструктор повного продукту (" << type << ")\n";
}

void FullProduct::DisplayFullInfo() {
    DisplayId();
    DisplayBrand();
    DisplayColor();
    cout << "Тип: " << type << "\nЦіна: " << price << " грн" << endl;
}

TypedProduct::TypedProduct(string id, string type)
    : ProductBase(id), productType(type) {
    cout << "Конструктор типу продукту (" << type << ")\n";
}

TypedProduct::~TypedProduct() {
    cout << "Деструктор типу продукту (" << productType << ")\n";
}

void TypedProduct::DisplayType() {
    cout << "Тип продукту: " << productType << endl;
}

VolumeProduct::VolumeProduct(string id, double volume)
    : ProductBase(id), productVolume(volume) {
    cout << "Конструктор обʼєму продукту (" << volume << " мл)\n";
}

VolumeProduct::~VolumeProduct() {
    cout << "Деструктор обʼєму продукту (" << productVolume << " мл)\n";
}

void VolumeProduct::DisplayVolume() {
    cout << "Обʼєм: " << productVolume << " мл" << endl;
}

LuxuryProduct::LuxuryProduct(string id, string type, double volume, string feature)
    : ProductBase(id), TypedProduct(id, type), VolumeProduct(id, volume), specialFeature(feature) {
    cout << "Конструктор розкішного продукту (" << feature << ")\n";
}


LuxuryProduct::~LuxuryProduct() {
    cout << "Деструктор розкішного продукту (" << specialFeature << ")\n";
}

void LuxuryProduct::DisplayLuxury() {
    DisplayId();
    DisplayType();
    DisplayVolume();
    cout << "Особлива властивість: " << specialFeature << endl;
}
