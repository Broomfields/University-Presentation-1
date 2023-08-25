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

		public ref class LinkedFile : SupportTracker::Domain::Entity
		{
		public:
			// Properties
			property Ticket^ ParentTicket;  // Association with Ticket class
			property Event^ RelatedEvent;   // Association with Event class (can be null)
			property String^ DisplayName;
			property String^ FilePath;
			property String^ Notes;

			// Constructor
			LinkedFile();

			// Any other methods or functions related to this class
		};
	}
}
