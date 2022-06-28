#pragma once

using namespace System::Collections::ObjectModel;
generic<typename T>
ref class MyObservableCollection :
    public ObservableCollection<T>
{
};

