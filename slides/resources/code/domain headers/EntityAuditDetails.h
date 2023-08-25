#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		// Forward declarations
		ref class TascompEngineer;

		public ref struct EntityAuditDetails
		{
		public:
			// Properties
			property TascompEngineer^ CreatedByEngineer;
			property DateTime^ CreationDate;
			property TimeSpan^ TicketAge;
			property TascompEngineer^ ClosedByEngineer;	// Nullable
			property DateTime^ ClosedDate;				// Nullable

			// Constructors
			EntityAuditDetails();

			// Any other methods or functions related to this struct

		private:
			// Any private fields or utility functions can be declared here.
		};
	}
}
