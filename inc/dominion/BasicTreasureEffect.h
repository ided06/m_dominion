//=============================================================================
/// @class BasicTreasure
/// @brief ���̌��ʂ��Ȃ�����J�[�h�i���݁A��݁A���݁j
/// @author ide
/// @since 14/02/20
/// @version $Revision$
/// �ŏI�X�V�� : $Author$<BR>
/// 
/// 
/// <H2>�X�V����</H2>
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
        /// @brief �R���X�g���N�^
        //---------------------------------------------------------------------
        BasicTreasure(const char *name, int value) : mName(name), mValue(value) {}
        //---------------------------------------------------------------------
        /// @brief ���l�̎擾
        /// @return ���l
        //---------------------------------------------------------------------
        int getValue(void) const { return mValue; }
        //---------------------------------------------------------------------
        /// @brief ������\���̎擾
        /// @return ������\��
        //---------------------------------------------------------------------
        const char *toString(void) const;
    };
}
#endif
//-----------------------------------------------------------------------------
// End Of File
//-----------------------------------------------------------------------------