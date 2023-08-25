#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace SupportTracker
{
	namespace Domain
	{
		// Necessary forward declarations
		ref class Ticket;
		ref class Event;
		ref class EventType;
		ref class TascompEngineer;
		ref class SiteContact;
		ref class ProdigyProgram;

		public ref struct EventDetails
		{
		private:
			Ticket^ _Ticket;  // Associated Ticket
			Event^ _Event;    // Associated Event

		public:
			// Properties
			property EventType^ Type;				// Type of the event
			property TascompEngineer^ Engineer;		// Associated Engineer
			property SiteContact^ Contact;			// Associated Contact
			property ProdigyProgram^ Program;		// Associated Program (optional, so can be nullptr)
			property String^ Overview;				// Overview of the event
			property String^ Notes;					// Notes related to the event
			property DateTime^ Timestamp;			// Timestamp of the event
			property TimeSpan^ Duration;			// Duration of the event

			// Constructors and methods
			EventDetails();
		};
	}
}
