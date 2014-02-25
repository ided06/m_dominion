//=============================================================================
/// @class TreasureEffect
/// @brief 財宝カードの中身
/// @author ide
/// @since 14/02/20
/// @version $Revision$
/// 最終更新者 : $Author$<BR>
/// 
/// 
/// <H2>更新履歴</H2>
// @author 
// @data 
// 
// @todo 
// @bug 
// @defgroup 
// @ingroup 
//=============================================================================
#ifndef DOMINION_TREASURE_EFFECT_H
#define DOMINION_TREASURE_EFFECT_H
//-----------------------------------------------------------------------------
// include files
//-----------------------------------------------------------------------------
#include "dominion/CardEffect.h"
//-----------------------------------------------------------------------------
// class
//-----------------------------------------------------------------------------
namespace dominion {
    class TreasureEffect : public CardEffect {
    public:
        //---------------------------------------------------------------------
        /// @brief コンストラクタ
        //---------------------------------------------------------------------
        TreasureEffect(void) : CardEffect(CardEffect::getAttributeField(CardEffect::ATTRIBUTE_TREASURE)) {}
        //---------------------------------------------------------------------
        /// @brief 価値の取得
        /// @return 価値
        //---------------------------------------------------------------------
        virtual int getValue(void) const = 0;
    private:
    };
}
#endif
//-----------------------------------------------------------------------------
// End Of File
//-----------------------------------------------------------------------------
