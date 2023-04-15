﻿#pragma once

#include "RobocopyViewModel.g.h"
#include "PropertyChangeHelper.hpp"
#include "ProcessIOUpdater.hpp"

namespace winrt::FastCopy::implementation
{
    struct RobocopyViewModel : RobocopyViewModelT<RobocopyViewModel>, PropertyChangeHelper<RobocopyViewModel>, ProcessIOUpdater<RobocopyViewModel>
    {
        RobocopyViewModel() = default;

        winrt::hstring RecordFile();
        void RecordFile(winrt::hstring value);

        winrt::hstring OperationString();
        int ItemCount();
        winrt::hstring Source();
        winrt::hstring Destination();
        double Percent();

        void Start();
        void Pause();
        void Cancel();

        void OnUpdate(ProcessIoCounter::IOCounterDiff diff);
    private:
        winrt::hstring m_recordFile;
    };
}

namespace winrt::FastCopy::factory_implementation
{
    struct RobocopyViewModel : RobocopyViewModelT<RobocopyViewModel, implementation::RobocopyViewModel>
    {
    };
}
