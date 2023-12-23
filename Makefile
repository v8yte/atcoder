# ベースのシェルスクリプトのパス
SHELL_PATH = ./shell

# C++を利用する
cpp:
	echo "cpp" > .mode

# 実行する
run:
	$(SHELL_PATH)/run.sh

# テンプレートの上書き
base:
	$(SHELL_PATH)/base.sh

# ファイルの移動
move:
	$(SHELL_PATH)/movefile.sh

# コンテスト名を指定してファイルを移動
mc:
	$(SHELL_PATH)/movefilecontest.sh

# contestのファイルにあるコンテストからダウンロード
download:
	$(SHELL_PATH)/download.sh

# URLからダウンロード
du:
	$(SHELL_PATH)/downloadurl.sh

# テスト
test:
	$(SHELL_PATH)/test.sh

# 提出
submit:
	$(SHELL_PATH)/submit.sh

# URLで提出
su:
	$(SHELL_PATH)/submiturl.sh

# AtCoderへログイン
login:
	oj login https://atcoder.jp

.PHONY: cpp run base move mc download du test submit su login help

# ヘルプ
help:
	@echo "利用可能なコマンド:"
	@echo "cpp       - C++モードを設定"
	@echo "run       - プログラムを実行"
	@echo "base      - テンプレートを上書き"
	@echo "move      - ファイルを移動"
	@echo "mc        - コンテスト名を指定してファイルを移動"
	@echo "download  - contestのファイルからダウンロード"
	@echo "du        - URLからダウンロード"
	@echo "test      - テスト実行"
	@echo "submit    - 提出"
	@echo "su        - URLで提出"
	@echo "login     - AtCoderにログイン"
	@echo ""
	@echo "使い方:"
	@echo "  echo abc333 > contest   # コンテストIDを設定"
	@echo "  make base               # 基本環境の初期化"
	@echo "  vim main.cpp            # 問題を解く"
	@echo "  make download           # 問題データをダウンロード"
	@echo "  make test               # 解答をテスト"
	@echo "  make submit             # 解答を提出"
	@echo "  make move               # ファイルを特定のディレクトリに移動"
