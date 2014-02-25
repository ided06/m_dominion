//=============================================================================
/// @class BasicTreasureEffect
/// @brief 何の効果もない財宝カード（銅貨、銀貨、金貨）の効果
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
#ifndef DOMINION_BASIC_TREASURE_EFFECT_H
#define DOMINION_BASIC_TREASURE_EFFECT_H
//-----------------------------------------------------------------------------
// include files
//-----------------------------------------------------------------------------
#include "dominion/TreasureEffect.h"
//-----------------------------------------------------------------------------
// class
//-----------------------------------------------------------------------------
namespace dominion {
    class BasicTreasureEffect : public TreasureEffect {
    public:
        //---------------------------------------------------------------------
        /// @brief コンストラクタ
        //---------------------------------------------------------------------
        BasicTreasureEffect(const char *name, int value) : TreasureEffect(name), mValue(value) {}
        //---------------------------------------------------------------------
        /// @brief 価値の取得
        /// @return 価値
        //---------------------------------------------------------------------
        int getValue(void) const { return mValue; }
        //---------------------------------------------------------------------
        /// @brief 文字列表現の取得
        /// @return 文字列表現
        //---------------------------------------------------------------------
        std::string toString(void) const;
    private:
        int mValue;
    };
}
#endif
//-----------------------------------------------------------------------------
// End Of File
//-----------------------------------------------------------------------------
