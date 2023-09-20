.PHONY: default all
default: build
all: eu jp usa demo_jp demo_usa
MAKEFLAGS += --no-print-directory
BUILD_DIR = build/EU
.PHONY: build eu jp usa demo_jp demo_usa custom
build: GAME_VERSION ?=EU
build: tools
	@$(MAKE) -f GBA.mk build GAME_VERSION=$(GAME_VERSION) SPEEDVERSION=$(SPEEDVERSION)

.PHONY: test
test: build
	@mgba-qt tmc_eu.gba

eu: GAME_VERSION=EU
jp: GAME_VERSION=JP
usa: GAME_VERSION=USA
demo_jp: GAME_VERSION=DEMO_JP
demo_usa: GAME_VERSION=DEMO_USA
eu jp usa demo_jp demo_usa: tools
	@$(MAKE) GAME_VERSION=$(GAME_VERSION)

.PHONY: speedon speedoff
speedon: SPEEDVERSION = 1
speedon: clean_files build

speedoff: SPEEDVERSION = 0
speedoff: clean_files build

clean_files:
	@rm -rf $(BUILD_DIR)/src/player.i
	@rm -rf $(BUILD_DIR)/src/player.o
	@rm -rf $(BUILD_DIR)/src/player.s
	@rm -rf $(BUILD_DIR)/src/playerUtils.i
	@rm -rf $(BUILD_DIR)/src/playerUtils.o
	@rm -rf $(BUILD_DIR)/src/playerUtils.s

custom: tools
	@$(MAKE) GAME_VERSION=USA CUSTOM=1
.PHONY: extract_assets
extract_assets: tools
	@$(MAKE) -f GBA.mk extract_assets

.PHONY: tools
tools: tools/bin

tools/bin:
	mkdir -p tools/cmake-build
	cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=tools -S tools -B tools/cmake-build
	cmake --build tools/cmake-build -j --target install

.PHONY: clean clean-tools
clean:
	@$(MAKE) -f GBA.mk clean

clean-tools:
	rm -rf tools/bin
	rm -rf tools/cmake-build
	@$(MAKE) tools