#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace SupportTracker
{
	namespace Domain
	{
		// Forward declarations
		ref class Ticket;
		ref class TicketStatus;
		ref class SupportContract;
		ref class ProdigyVersion;
		ref class ProdigyBuild;
		ref class TascompEngineer;
		ref class SiteContact;
		ref struct TicketAwaitingDetails;
		ref class ProdigyProgram;

		public ref struct TicketDetails
		{
		private:
			Ticket^ _Ticket;

		public:
			// Properties
			property TicketStatus^ Status;
			property SupportContract^ Contract;
			property ProdigyVersion^ Version;
			property ProdigyBuild^ Build;
			property TascompEngineer^ PrimaryEngineer;
			property SiteContact^ PrimaryContact;
			property String^ Overview;
			property String^ Notes;
			property TicketAwaitingDetails^ AwaitingDetails;
			property TimeSpan^ TicketDuration;
			property TimeSpan^ TicketAge;
			property List<ProdigyProgram^>^ RelatedPrograms;

			// Constructor
			TicketDetails();
		};
	}
}
