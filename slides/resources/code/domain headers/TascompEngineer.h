#pragma once

using namespace System;

namespace SupportTracker
{
	namespace Domain
	{
		public ref class TascompEngineer
		{
		public:
			// Properties
			property String^ ID;
			property String^ Name;
			property String^ Email;

			// Constructors
			TascompEngineer();

			// Any other methods or functions related to this class

		private:
			// Any private fields or utility functions can be declared here.
		};
	}
}
