#ifndef COMPANIESREGISTER_H
#define COMPANIESREGISTER_H
#include <QList>

#include "abstractcompany.h"

class CompaniesRegister
{
public:
    static CompaniesRegister& instance();
    void addCompany(AbstractCompany* company);
    bool removeCompany(AbstractCompany* company);
    int getRegisterSize();
    AbstractCompany* getCompany(int i);
    ~CompaniesRegister();
private:
    CompaniesRegister() = default;
    CompaniesRegister(const CompaniesRegister &companiesRegister) = delete;
    CompaniesRegister& operator = (const CompaniesRegister &companiesRegister) = delete;

    QList<AbstractCompany*> register_;
};

#endif // COMPANIESREGISTER_H
