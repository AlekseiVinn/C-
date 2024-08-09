#include "IContact.h"

#pragma once
class IContactFactory
{
public:
	virtual IContact* CreateContact() =0;
};


class OrganizationFactory : public IContactFactory
{
public:
	IContact* CreateContact() override {
		return new Organization();
	}
};

class PersonFactory : public IContactFactory
{
public:
	IContact* CreateContact() override {
		return new Person();
	}
};