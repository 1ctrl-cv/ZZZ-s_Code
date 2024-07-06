// copyright(c) A.K.A Hollow Deep Dive System
// Led by Helios Research Insitute
// Author: BW
/////////////////////////////////////////////
#include"deep_dive_prototype_v4.h"
#include"hollow_toolkit.h"
#include"hollow_boost.h"
namespace Hollow
{
    void DeepDivePrototypeV4::RegisterBangbooHandle(HollowSignal signal)
    {
        if(m_initstate != HollowInitstate.HIS_SUCCESS)
            return;

        EHBoostType boostType = signal->GetBoostType();
        switch (boostType)
        {
            case EHBoostType.DEFAULT:
            m_handle = HELIOS::BangbooHandle.DEFAULT;
            break;

        case ......
        }
    }
}