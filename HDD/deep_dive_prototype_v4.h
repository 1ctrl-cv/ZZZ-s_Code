// copyright(c) A.K.A Hollow Deep Dive System
// Led by Helios Research Insitute
// Author: BW
// deep_dive_prototype_v4.h
/////////////////////////////////////////////
#ifndef DEEP_DIVE_PROTOTYPE_V4_H
#define DEEP_DIVE_PROTOTYPE_V4_H
#include <MAP>
#include "helios_signal.h"
namespace Hollow
{
    class DeepDivePrototypeV4 : public DeepDiveBase
    {
        private:
            HELIOS::BangbooHandle m_handle;
            HChessboardMap<EHDomainType.HSensorType> m_crossDomainSensorMap;
            HSensorContainer<VisualSensor> m_visualSensorContainer;

        public:
            virtual void RegisterBangbooHandle(Hollowsignal signal)override;
            HCRESULT SyncVisualsensor(const HMatrics matWorld, HLINT hollowIndex);
    }
}

#endif // DEEP_DIVE_PROTOTYPE_V4_H