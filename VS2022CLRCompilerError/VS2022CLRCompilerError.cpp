#include "pch.h"

#include "MyObservableCollection.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    MyObservableCollection<System::String^>^ collection1 = gcnew MyObservableCollection<System::String^>();
    MyObservableCollection<System::Object^>^ collection2 = gcnew MyObservableCollection<System::Object^>();

    while (collection1->Count < 1)
        collection1->Add(System::String::Empty);
    while (collection2->Count < 1)
        collection2->Add(nullptr);

    System::Console::WriteLine("Finished");

    return 0;
}
