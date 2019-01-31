#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

struct ITestUtility : virtual public Core::IUnknown {
    enum { ID = 0x00000077 };

    struct ICommand : virtual public Core::IUnknown {

        enum { ID = 0x00000078 };

        struct IIterator : virtual public Core::IUnknown {

            enum { ID = 0x00000079 };

            virtual void Reset() = 0;
            virtual bool IsValid() const = 0;
            virtual bool Next() = 0;

            virtual ICommand* Command() const = 0;
        };

        virtual string Execute(const string& params) = 0;

        virtual string Description() const = 0;
        virtual string Signature() const = 0;
        virtual string Name() const = 0;

    };

    virtual ICommand::IIterator* Commands() const = 0;
    virtual ICommand*            Command(const string& name) const =  0;
};

} // namespace Exchange
} // namespace WPEFramework