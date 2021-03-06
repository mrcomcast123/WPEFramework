#ifndef __IMEMORY_H
#define __IMEMORY_H

// @stubgen:skip

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

    // This interface allows for retrieval of memory usage specific to the implementor
    // of the interface
    struct IMemory : virtual public Core::IUnknown {
        enum { ID = ID_MEMORY };
        virtual ~IMemory() {}

        virtual uint64_t Resident() const = 0;
        virtual uint64_t Allocated() const = 0;
        virtual uint64_t Shared() const = 0;
        virtual uint8_t Processes() const = 0;
        virtual const bool IsOperational() const = 0;

        virtual void Observe(const uint32_t pid) = 0;
    };
}
}

#endif // __IMEMORY_H
