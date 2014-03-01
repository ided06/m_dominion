//=============================================================================
/// @class CardMaster.h
/// @brief �J�[�h�̒��g
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
#ifndef DOMINION_CARD_MASTER_H
#define DOMINION_CARD_MASTER_H
//-----------------------------------------------------------------------------
// include files
//-----------------------------------------------------------------------------
#include <string>
//-----------------------------------------------------------------------------
// class
//-----------------------------------------------------------------------------
namespace dominion {
    class CardMaster {
    public:
        /// �J�[�h����
        enum Attribute {
            ATTRIBUTE_TREASURE,        //����
            ATTRIBUTE_VICTORY_POINT,   //�����_
            ATTRIBUTE_MAX,
            ATTRIBUTE_INVALID,
            FORCE_DWORD         = 0xFFFFFFFF
        };
        //---------------------------------------------------------------------
        /// @brief �R���X�g���N�^
        //---------------------------------------------------------------------
        CardMaster(const char *name, int attributeField) : mName(name), mAttributeField(attributeField) {}
        //---------------------------------------------------------------------
        /// @brief ���z�f�X�g���N�^
        //---------------------------------------------------------------------
        virtual ~CardMaster(void) {}
        //---------------------------------------------------------------------
        /// @brief ���̑����������Ă��܂����H
        /// @return true:�͂��@false:������
        //---------------------------------------------------------------------
        bool hasThisAttribute(Attribute attribute) const;
        //---------------------------------------------------------------------
        /// @brief ������\���̎擾
        /// @return ������\��
        //---------------------------------------------------------------------
        virtual std::string toString(void) const;
        //---------------------------------------------------------------------
        /// @brief �^����ꂽ�����݂̂��܂ޑ����t�B�[���h��Ԃ�
        /// @param attribute ���ƂȂ鑮��
        /// @return �����t�B�[���h
        //---------------------------------------------------------------------
        static int getAttributeField(Attribute attribute);
        //---------------------------------------------------------------------
        /// @brief ���O�̎擾
        /// @return ���O
        //---------------------------------------------------------------------
        const char *getName(void) const { return mName.c_str(); }
    protected:
        std::string mName;
        int mAttributeField;
    };
}
#endif
//-----------------------------------------------------------------------------
// End Of File
//-----------------------------------------------------------------------------