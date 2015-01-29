#pragma once


#include "core/lumix.h"
#include "core/iallocator.h"


namespace Lumix
{

	class LUMIX_CORE_API DefaultAllocator : public IAllocator
	{
		public:
			DefaultAllocator()
			{ }

			virtual void* allocate(size_t n) override;
			virtual void deallocate(void* p) override;
	};


} // ~namespace Lumix