#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		ref class TascompEngineer; // Forward declaration as we need this class for a property
		ref class AuditActionType; // Forward declaration as we need this class for a property

		public ref class AuditAction
		{
		public:
			// Properties
			property Guid^ ID;
			property TascompEngineer^ Engineer;
			property AuditActionType^ Type;
			property AuditAction^ TriggerAction;
			property DateTime^ Timestamp;

			// Constructor
			AuditAction();

			// Destructor
			~AuditAction();
		};
	}
}
