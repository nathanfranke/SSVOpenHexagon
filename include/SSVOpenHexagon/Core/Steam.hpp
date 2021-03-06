// Copyright (c) 2013-2020 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: https://opensource.org/licenses/AFL-3.0

#pragma once

#include <stdint.h> // Steam API needs this.
#include "steam/steam_api.h"

#include <functional>
#include <string_view>
#include <unordered_set>

namespace hg::Steam
{

class steam_manager
{
private:
    bool _initialized;
    bool _got_stats;

    std::unordered_set<std::string> _unlocked_achievements;
    std::unordered_set<std::string> _workshop_pack_folders;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winvalid-offsetof"
    STEAM_CALLBACK(steam_manager, on_user_stats_received, UserStatsReceived_t);
    STEAM_CALLBACK(steam_manager, on_user_stats_stored, UserStatsStored_t);
    STEAM_CALLBACK(
        steam_manager, on_user_achievement_stored, UserAchievementStored_t);
#pragma GCC diagnostic pop

    bool update_hardcoded_achievement_cube_master();
    bool update_hardcoded_achievement_hypercube_master();

    void load_workshop_data();

public:
    steam_manager();
    ~steam_manager();

    steam_manager(const steam_manager&) = delete;
    steam_manager& operator=(const steam_manager&) = delete;

    steam_manager(steam_manager&&) = delete;
    steam_manager& operator=(steam_manager&&) = delete;

    bool request_stats_and_achievements();

    bool run_callbacks();

    bool store_stats();
    bool unlock_achievement(std::string_view name);

    bool set_rich_presence_in_menu();
    bool set_rich_presence_in_game(std::string_view level_name_format,
        std::string_view difficulty_mult_format, std::string_view time_format);

    bool set_and_store_stat(std::string_view name, int data);
    [[nodiscard]] bool get_achievement(bool* out, std::string_view name);
    [[nodiscard]] bool get_stat(int* out, std::string_view name);

    bool update_hardcoded_achievements();

    void for_workshop_pack_folders(
        const std::function<void(const std::string&)>& f) const;
};

} // namespace hg::Steam
