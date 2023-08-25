#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		public ref class AuditActionType
		{
		public:
			// Properties
			property System::Guid^ ID;
			//property System::String^ Name;
			property System::String^ Action;

			// Constructor
			AuditActionType();

			// Destructor
			~AuditActionType();
		};
	}
}
