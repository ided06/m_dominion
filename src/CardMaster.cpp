//-----------------------------------------------------------------------------
// CardMaster.cpp
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
// include files
//-----------------------------------------------------------------------------
#include "dominion/CardMaster.h"
//-----------------------------------------------------------------------------
// class methods
//-----------------------------------------------------------------------------
namespace dominion {
    //-----------------------------------------------------------------------------
    // 文字列表現の取得
    //-----------------------------------------------------------------------------
    std::string CardMaster::toString(void) const {
        // アトリビュートを示す文字列を生成
        std::string attrStr = "[";
        bool isFirst = true;
        const char *tbl[] = {
            "T", "V", 
        };
        for(int i = 0; i < ATTRIBUTE_MAX; ++i) {
            if(mAttributeField & getAttributeField(Attribute(i))) {
                if(isFirst == true) {
                    isFirst = false;
                } else {
                    attrStr += "|";
                }
                attrStr += tbl[i];
            }
        }
        attrStr += "]";
        return attrStr;
    };
    //-----------------------------------------------------------------------------
    // この属性を含みますか？
    //-----------------------------------------------------------------------------
    bool CardMaster::hasThisAttribute(Attribute attribute) const {
        return (getAttributeField(attribute) & mAttributeField) != 0;
    }
    //-----------------------------------------------------------------------------
    // 与えられた属性のみを含む属性フィールドを返す
    //-----------------------------------------------------------------------------
    int CardMaster::getAttributeField(Attribute attribute) {
        return 0x1 << attribute;
    }
}
//-----------------------------------------------------------------------------
// End Of File
//-----------------------------------------------------------------------------
