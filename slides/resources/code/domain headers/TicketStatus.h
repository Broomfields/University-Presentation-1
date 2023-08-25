#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		public ref class TicketStatus
		{
		public:
			// Properties
			property Guid^ ID;
			property String^ Name;

			// Constructor
			TicketStatus();

			// Any other methods or functions related to this class
		};
	}
}
