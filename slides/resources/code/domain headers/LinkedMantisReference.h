#pragma once
#include "Entity.h" // Base Class

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		// Forward declarations
		ref class Ticket;
		ref class Event;

		public ref class LinkedMantisReference : SupportTracker::Domain::Entity
		{
		public:
			// Properties
			property Ticket^ ParentTicket;	// Association with Ticket class
			property Event^ RelatedEvent;	// Association with Event class (can be null)
			property String^ MantisReferenceID;
			property String^ Overview;

			// Constructor
			LinkedMantisReference();

			// Any other methods or functions related to this class
		};
	}
}
