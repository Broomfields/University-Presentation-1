#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace SupportTracker
{
	namespace Domain
	{
		// Forward declarations
		ref struct EntityAuditDetails;

		public ref class Entity abstract  // Making the class abstract
		{
		public:
			// Properties
			property Guid^ ID;
			property List<EntityAuditDetails^>^ AuditDetails;
			property bool Deleted;

			// Constructors
			Entity();

			// Abstract functions will be defined in child classes
		protected:
			virtual void TriggerDelete() abstract;
			virtual void TriggerDeletedAuditAction() abstract;

		private:
			// Any private fields or utility functions will be declared here.
		};
	}
}
