//=============================================================================
/// @class BasicTreasure
/// @brief 何の効果もない財宝カード（銅貨、銀貨、金貨）
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
#ifndef DOMINION_BASIC_TREASURE_H
#define DOMINION_BASIC_TREASURE_H
//-----------------------------------------------------------------------------
// include files
//-----------------------------------------------------------------------------
#include "dominion/Treasure.h"
//-----------------------------------------------------------------------------
// class
//-----------------------------------------------------------------------------
namespace dominion {
    class BasicTreasure : public Treasure {
        //---------------------------------------------------------------------
        /// @brief コンストラクタ
        //---------------------------------------------------------------------
        BasicTreasure(const char *name, int value) : mName(name), mValue(value) {}
        //---------------------------------------------------------------------
        /// @brief 価値の取得
        /// @return 価値
        //---------------------------------------------------------------------
        int getValue(void) const { return mValue; }
        //---------------------------------------------------------------------
        /// @brief 文字列表現の取得
        /// @return 文字列表現
        //---------------------------------------------------------------------
        const char *toString(void) const;
    };
}
#endif
//-----------------------------------------------------------------------------
// End Of File
//-----------------------------------------------------------------------------
