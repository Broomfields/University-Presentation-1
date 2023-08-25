#pragma once
#include "Entity.h" // Base Class

using namespace System;
using namespace System::Collections::Generic;

namespace SupportTracker
{
	namespace Domain
	{
		// Forward declarations
		ref class Ticket;
		ref struct EventDetails;
		ref class LinkedMantisReference;
		ref class LinkedFile;

		public ref class Event : SupportTracker::Domain::Entity  // Inherit from Entity
		{
		public:
			// Properties
			property EventDetails^ Details;
			property List<LinkedMantisReference^>^ MantisReferences;
			property List<LinkedFile^>^ LinkedFiles;

			// Constructors
			Event();

			// Any other methods or functions related to this class

		private:
			Ticket^ _ticket;  // Association with Ticket class
		};
	}
}
