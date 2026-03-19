#include <iostream>
#include <string>
#include <optional>

// [globals] -----------------------
bool game_running = true;

// [structs] -------------------------
struct cell {
    std::optional<int> latitude;
    std::optional<int> longitude;
    std::string cell_name;
    int cell_difficulty;
    std::string cell_id;
    bool is_interior;
};

struct player {
    int player_health;
    int player_action_points;
    int player_armor_class;
    int player_damage_resist;
    int player_level;
    int player_xp;
    int player_xp_to_next_level;
    int player_carry_weight;
    std::string player_location;
};

struct skill {
    std::string skill_name;
    std::string skill_description;
};

struct player_skills {
    int melee_weapons;
    int energy_weapons;

};

struct attribute {
    std::string attribute_name;
    std::string attribute_description;
};

struct player_attributes {
    int strength;
    int cunning;
    int fortitude;
    int agility;
    int intellect;
};



struct npc {
    std::string npc_name;
    std::string npc_description;
    int npc_health;
    std::string npc_faction;
};



// item structs ------------------
struct item_armor {
    std::string item_name;
    std::string item_description;
    float item_weight;
    int item_value;
    int item_armor_class;
    int item_durability;
    bool has_overshield;
    bool requires_training;
    bool is_stackable;
};

struct item_weapon {
    std::string item_name;
    std::string item_description;
    float item_weight;
    int item_value;
    int item_damage;
    int item_durability;
    std::string skill_type_required;
    int skill_amount_required;
    bool is_stackable;
};

struct item_aid {
    std::string item_name;
    std::string item_description;
    float item_weight;
    int item_value;
    int item_restoration;
    bool is_stackable;
};

struct item_misc {
    std::string item_name;
    std::string item_description;
    float item_weight;
    int item_value;
    bool is_stackable;
};

struct item_ammo {
    std::string item_name;
    std::string item_description;
    float item_weight;
    int item_value;
    std::string item_ammo_type;
    bool is_stackable;
};


// [database] --------------------------

    // armors
item_armor athanatos_suit = {
    .item_name = "Athanatos Suit",
    .item_description = "A suit of Mark II-b Athanatos Powered Combat Armor. It is fully charged. It feels strange to wear someone else's skin.",
    .item_weight = 40.0f,
    .item_value = 5000,
    .item_armor_class = 100,
    .item_durability = 1000,
    .has_overshield = true,
    .requires_training = true
};


// weapons
item_weapon rusty_knife = {
    .item_name = "Rusty Knife",
    .item_description = "A rusty kitchen knife. It has certainly seen better days.",
    .item_weight = 1.0f,
    .item_value = 5,
    .item_damage = 1,
    .item_durability = 10,
    .skill_type_required = "Melee Weapons",
    .skill_amount_required = 0
};

item_weapon omnirifle = {
    .item_name = "Omnirifle",
    .item_description = "An advanced particle beam weapon capable of switching between rifle, pistol, and shotgun configurations. It lethally irradiates users without overshields. Standard issue among the Immortals.",
    .item_weight = 15.0f,
    .item_value = 500,
    .item_damage = 50,
    .item_durability = 100,
    .skill_type_required = "Energy Weapons",
    .skill_amount_required = 100
};



// skills
skill melee_weapons = {
    .skill_name = "Melee Weapons"
};

skill energy_weapons = {
    .skill_name = "Energy Weapons"
};

skill hacking = {
    .skill_name = "Hacking"
};

// attributes
attribute strength = {
    .attribute_name = "Strength",
    .attribute_description = "Your physical strength. Allows you to carry more, deal more damage with melee weapons, and access heavier equipment."
};

attribute cunning = {
    .attribute_name = "Cunning",
    .attribute_description = "Your combined perception, calmness, and charm. Allows you to detect items and enemies others wouldn't, and better influence people."
};

attribute fortitude = {
    .attribute_name = "Fortitude",
    .attribute_description = "Your overall durability. Increases your health and damage resistance."
};



// cells
cell wilderness_neg8_0 = {
    .latitude = -8,
    .longitude = 0,
    .cell_name = "Wilderness",
    .cell_difficulty = 1,
    .cell_id = "wilderness_neg8_0",
    .is_interior = false
};

cell cave1 = {
    .latitude = std::nullopt,
    .longitude = std::nullopt,
    .cell_name = "Cave",
    .cell_difficulty = 2,
    .cell_id = "cave1",
    .is_interior = true
};


void calculate_damage() {

}

int main() {
    while (game_running) {
        std::cout << "Your random number is: " << std::endl;
        game_running = false;
    }
    return 0;
}