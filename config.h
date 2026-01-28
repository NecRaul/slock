/* user and group to drop privileges to */
static const char *user = "necraul"; /* replace nobody with your username */
static const char *group = "nobody"; /* don't touch this */

static const char *colorname[NUMCOLS] = {
    [INIT] = "black",     /* after initialization */
    [INPUT] = "#005577",  /* during input */
    [FAILED] = "#CC3333", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
/* The path should be absolute like /home/username/Pictures/Wallpapers/Wallpaper.jpg */
static const char *background_image = "/home/necraul/Pictures/Wallpapers/Kuroneko/Kuroneko_23.png";
