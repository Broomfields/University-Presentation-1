#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		// Forward declaration
		ref class TascompEngineer;
		ref class SiteContact;

		public ref struct TicketAwaitingDetails
		{
		public:
			// Properties
			property TascompEngineer^ AwaitingEngineer;  // Nullable for optional Engineer
			property SiteContact^ AwaitingContact;  // Nullable for optional SiteContact
			property String^ AwaitingReason;

			// Constructor
			TicketAwaitingDetails();
		};
	}
}
