// Copyright (c) 2013-2020 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: https://opensource.org/licenses/AFL-3.0

#pragma once

#include <vector>
#include <string>

namespace ssvs
{
class GameWindow;
} // namespace ssvs

namespace ssvs::Input
{
class Trigger;
} // namespace ssvs::Input

namespace hg::Config
{

void loadConfig(const std::vector<std::string>& mOverridesIds);
void resetConfigToDefaults();
void resetBindsToDefaults();
void saveConfig();

[[nodiscard]] bool isEligibleForScore();

void recalculateSizes();
void setFullscreen(ssvs::GameWindow& mWindow, bool mFullscreen);

void refreshWindowSize(unsigned int mWidth, unsigned int mHeight);
void setCurrentResolution(
    ssvs::GameWindow& mWindow, unsigned int mWidth, unsigned int mHeight);
void setCurrentResolutionAuto(ssvs::GameWindow& mWindow);

void setVsync(ssvs::GameWindow& mWindow, bool mValue);
void setLimitFPS(ssvs::GameWindow& mWindow, bool mValue);
void setMaxFPS(ssvs::GameWindow& mWindow, unsigned int mValue);
void setTimerStatic(ssvs::GameWindow& mWindow, bool mValue);
void setAntialiasingLevel(ssvs::GameWindow& mWindow, unsigned int mValue);

void setOnline(bool mOnline);
void setOfficial(bool mOfficial);
void setDebug(bool mDebug);
void setNoRotation(bool mNoRotation);
void setNoBackground(bool mNoBackground);
void setBlackAndWhite(bool mBlackAndWhite);
void setNoSound(bool mNoSound);
void setNoMusic(bool mNoMusic);
void setPulse(bool mPulse);
void set3D(bool m3D);
void setInvincible(bool mInvincible);
void setAutoRestart(bool mAutoRestart);
void setSoundVolume(float mVolume);
void setMusicVolume(float mVolume);
void setFlash(bool mFlash);
void setMusicSpeedDMSync(bool mValue);
void setShowFPS(bool mValue);
void setServerLocal(bool mValue);
void setServerVerbose(bool mValue);
void setMouseVisible(bool mValue);
void setMusicSpeedMult(float mValue);
void setDrawTextOutlines(bool mX);
void setDarkenUnevenBackgroundChunk(bool mX);
void setRotateToStart(bool mX);
void setJoystickDeadzone(float mX);
void setTextPadding(float mX);
void setTextScaling(float mX);
void setTimescale(float mX);
void setShowKeyIcons(bool mX);
void setKeyIconsScale(float mX);
void setFirstTimePlaying(bool mX);
void setSaveLocalBestReplayToFile(bool mX);

[[nodiscard]] bool getOnline();
[[nodiscard]] bool getOfficial();
[[nodiscard]] std::string getUneligibilityReason();
[[nodiscard]] float getSizeX();
[[nodiscard]] float getSizeY();
[[nodiscard]] float getSpawnDistance();
[[nodiscard]] float getZoomFactor();
[[nodiscard]] int getPixelMultiplier();
[[nodiscard]] float getPlayerSpeed();
[[nodiscard]] float getPlayerFocusSpeed();
[[nodiscard]] float getPlayerSize();
[[nodiscard]] bool getNoRotation();
[[nodiscard]] bool getNoBackground();
[[nodiscard]] bool getBlackAndWhite();
[[nodiscard]] bool getNoSound();
[[nodiscard]] bool getNoMusic();
[[nodiscard]] float getSoundVolume();
[[nodiscard]] float getMusicVolume();
[[nodiscard]] bool getLimitFPS();
[[nodiscard]] bool getVsync();
[[nodiscard]] bool getAutoZoomFactor();
[[nodiscard]] bool getFullscreen();
[[nodiscard, gnu::const]] float getVersion();
[[nodiscard, gnu::const]] const char* getVersionString();
[[nodiscard]] bool getWindowedAutoResolution();
[[nodiscard]] bool getFullscreenAutoResolution();
[[nodiscard]] unsigned int getFullscreenWidth();
[[nodiscard]] unsigned int getFullscreenHeight();
[[nodiscard]] unsigned int getWindowedWidth();
[[nodiscard]] unsigned int getWindowedHeight();
[[nodiscard]] unsigned int getWidth();
[[nodiscard]] unsigned int getHeight();
[[nodiscard]] bool getShowMessages();
[[nodiscard]] bool getRotateToStart();

[[nodiscard]] bool getDebug();
[[nodiscard]] bool getPulse();
[[nodiscard]] bool getBeatPulse();
[[nodiscard]] bool getInvincible();
[[nodiscard]] bool get3D();
[[nodiscard]] unsigned int get3DMaxDepth();
[[nodiscard]] float get3DMultiplier();
[[nodiscard]] bool getAutoRestart();
[[nodiscard]] bool getFlash();
[[nodiscard]] bool getShowTrackedVariables();
[[nodiscard]] bool getMusicSpeedDMSync();
[[nodiscard]] unsigned int getMaxFPS();
[[nodiscard]] bool getShowFPS();
[[nodiscard]] bool getTimerStatic();
[[nodiscard]] unsigned int getAntialiasingLevel();
[[nodiscard]] bool getServerLocal();
[[nodiscard]] bool getServerVerbose();
[[nodiscard]] bool getMouseVisible();
[[nodiscard]] float getMusicSpeedMult();
[[nodiscard]] bool getDrawTextOutlines();
[[nodiscard]] bool getDarkenUnevenBackgroundChunk();
[[nodiscard]] float getJoystickDeadzone();
[[nodiscard]] float getTextPadding();
[[nodiscard]] float getTextScaling();
[[nodiscard]] float getTimescale();
[[nodiscard]] bool getShowKeyIcons();
[[nodiscard]] float getKeyIconsScale();
[[nodiscard]] bool getFirstTimePlaying();
[[nodiscard]] bool getSaveLocalBestReplayToFile();

// keyboard binds

void keyboardBindsSanityCheck();

[[nodiscard]] ssvs::Input::Trigger getTriggerRotateCCW();
[[nodiscard]] ssvs::Input::Trigger getTriggerRotateCW();
[[nodiscard]] ssvs::Input::Trigger getTriggerFocus();
[[nodiscard]] ssvs::Input::Trigger getTriggerSelect();
[[nodiscard]] ssvs::Input::Trigger getTriggerExit();
[[nodiscard]] ssvs::Input::Trigger getTriggerForceRestart();
[[nodiscard]] ssvs::Input::Trigger getTriggerRestart();
[[nodiscard]] ssvs::Input::Trigger getTriggerReplay();
[[nodiscard]] ssvs::Input::Trigger getTriggerScreenshot();
[[nodiscard]] ssvs::Input::Trigger getTriggerSwap();
[[nodiscard]] ssvs::Input::Trigger getTriggerUp();
[[nodiscard]] ssvs::Input::Trigger getTriggerDown();

void addBindTriggerRotateCCW(int key, int btn, int index);
void addBindTriggerRotateCW(int key, int btn, int index);
void addBindTriggerFocus(int key, int btn, int index);
void addBindTriggerSelect(int key, int btn, int index);
void addBindTriggerExit(int key, int btn, int index);
void addBindTriggerForceRestart(int key, int btn, int index);
void addBindTriggerRestart(int key, int btn, int index);
void addBindTriggerReplay(int key, int btn, int index);
void addBindTriggerScreenshot(int key, int btn, int index);
void addBindTriggerSwap(int key, int btn, int index);
void addBindTriggerUp(int key, int btn, int index);
void addBindTriggerDown(int key, int btn, int index);

void setTriggerRotateCCW(ssvs::Input::Trigger trig);
void setTriggerRotateCW(ssvs::Input::Trigger trig);
void setTriggerFocus(ssvs::Input::Trigger trig);
void setTriggerSelect(ssvs::Input::Trigger trig);
void setTriggerExit(ssvs::Input::Trigger trig);
void setTriggerForceRestart(ssvs::Input::Trigger trig);
void setTriggerRestart(ssvs::Input::Trigger trig);
void setTriggerReplay(ssvs::Input::Trigger trig);
void setTriggerScreenshot(ssvs::Input::Trigger trig);
void setTriggerSwap(ssvs::Input::Trigger trig);
void setTriggerUp(ssvs::Input::Trigger trig);
void setTriggerDown(ssvs::Input::Trigger trig);

void clearBindTriggerRotateCCW(int index);
void clearBindTriggerRotateCW(int index);
void clearBindTriggerFocus(int index);
void clearBindTriggerSelect(int index);
void clearBindTriggerExit(int index);
void clearBindTriggerForceRestart(int index);
void clearBindTriggerRestart(int index);
void clearBindTriggerReplay(int index);
void clearBindTriggerScreenshot(int index);
void clearBindTriggerSwap(int index);
void clearBindTriggerUp(int index);
void clearBindTriggerDown(int index);

// joystick binds

void joystickBindsSanityCheck();

[[nodiscard]] unsigned int getJoystickSelect();
[[nodiscard]] unsigned int getJoystickExit();
[[nodiscard]] unsigned int getJoystickFocus();
[[nodiscard]] unsigned int getJoystickSwap();
[[nodiscard]] unsigned int getJoystickForceRestart();
[[nodiscard]] unsigned int getJoystickRestart();
[[nodiscard]] unsigned int getJoystickReplay();
[[nodiscard]] unsigned int getJoystickScreenshot();
[[nodiscard]] unsigned int getJoystickOptionMenu();
[[nodiscard]] unsigned int getJoystickChangePack();
[[nodiscard]] unsigned int getJoystickCreateProfile();

[[nodiscard]] int reassignToJoystickSelect(unsigned int button);
[[nodiscard]] int reassignToJoystickExit(unsigned int button);
[[nodiscard]] int reassignToJoystickFocus(unsigned int button);
[[nodiscard]] int reassignToJoystickSwap(unsigned int button);
[[nodiscard]] int reassignToJoystickForceRestart(unsigned int button);
[[nodiscard]] int reassignToJoystickRestart(unsigned int button);
[[nodiscard]] int reassignToJoystickReplay(unsigned int button);
[[nodiscard]] int reassignToJoystickScreenshot(unsigned int button);
[[nodiscard]] int reassignToJoystickOptionMenu(unsigned int button);
[[nodiscard]] int reassignToJoystickChangePack(unsigned int button);
[[nodiscard]] int reassignToJoystickCreateProfile(unsigned int button);

void setJoystickSelect(unsigned int button);
void setJoystickExit(unsigned int button);
void setJoystickFocus(unsigned int button);
void setJoystickSwap(unsigned int button);
void setJoystickForceRestart(unsigned int button);
void setJoystickRestart(unsigned int button);
void setJoystickReplay(unsigned int button);
void setJoystickScreenshot(unsigned int button);
void setJoystickOptionMenu(unsigned int button);
void setJoystickChangePack(unsigned int button);
void setJoystickCreateProfile(unsigned int button);

} // namespace hg::Config
