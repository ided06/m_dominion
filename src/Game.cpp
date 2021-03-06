//-----------------------------------------------------------------------------
// Game.cpp
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
// include files
//-----------------------------------------------------------------------------
#include "dominion/Game.h"
//-----------------------------------------------------------------------------
// class methods
//-----------------------------------------------------------------------------
namespace dominion {
    //-----------------------------------------------------------------------------
    // コンストラクタ
    //-----------------------------------------------------------------------------
    Game::Game(void) {
        // カードファクトリのインスタンス生成
        CardFactory::createInstance();
    }
    //-----------------------------------------------------------------------------
    // デストラクタ
    //-----------------------------------------------------------------------------
    Game::~Game(void) {
        // カードファクトリのインスタンス削除
        CardFactory::deleteInstance();
    }
    //-----------------------------------------------------------------------------
    // 初期化
    //-----------------------------------------------------------------------------
    void Game::init(void) {
        // カードマスタの初期化
        initCardMaster();
    }
    //-----------------------------------------------------------------------------
    // カードマスタの初期化
    //-----------------------------------------------------------------------------
    void Game::initCardMaster(void) {
        // カードファクトリのインスタンス取得
        CardFactory *cardFactory = CardFactory::getInstance();
        BasicTreasureMaster *capper = new BasicTreasureMaster("capper", 1);
        factory->addCardMaster(capper);
        BasicTreasureMaster *silver = new BasicTreasureMaster("silver", 2);
        factory->addCardMaster(silver);
        BasicTreasureMaster *gold = new BasicTreasureMaster("gold", 3);
        factory->addCardMaster(gold);
    }
}
//-----------------------------------------------------------------------------
// End Of File
//-----------------------------------------------------------------------------
