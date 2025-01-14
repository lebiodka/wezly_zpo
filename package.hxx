#ifndef PACKAGE_HPP
#define PACKAGE_HPP

#include "types.hxx"
#include <set>

class Package {
public:
    Package();

    explicit Package(ElementID id) : ID_(id) {assigned_IDs.insert(ID_);}

    Package(Package&& other) : ID_(other.ID_){}

    Package& operator=(Package&& other) noexcept;

    ElementID get_id() const {return ID_;}

    ~Package();

private:
    ElementID ID_;
    static std::set<ElementID> assigned_IDs;
    static std::set<ElementID> freed_IDs;
};

#endif
