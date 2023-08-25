#pragma once
#include "Entity.h" // Base Class

using namespace System;
using namespace System::Collections::Generic;

namespace SupportTracker
{
	namespace Domain
	{
		// Forward declarations
		ref struct TicketDetails;
		ref class Event;
		ref class LinkedMantisReference;
		ref class LinkedFile;

		public ref class Ticket : SupportTracker::Domain::Entity
		{
			// Properties
		public:
			property TicketDetails^ Details; // The exact type will be replaced once the `TicketDetails` class is defined.
			property List<Event^>^ Events;
			property List<LinkedMantisReference^>^ MantisReferences;
			property List<LinkedFile^>^ LinkedFiles;

			// Constructors
		public:
			Ticket();

			// Functions
		public:
			void LinkFile();
			void LinkMantisEntry();
		private:
			void TriggerLinkedFileAuditAction();
			void TriggerLinkMantisEntryAuditAction();

			// Function Overrides
		public:
			virtual void TriggerDelete() override;
			virtual void TriggerDeletedAuditAction() override;

		private:
			// Any private fields or utility functions will be declared here.
		};
	}
}
