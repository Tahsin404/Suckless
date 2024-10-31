static const char norm_fg[] = "#decfc5";
static const char norm_bg[] = "#0a0b0d";
static const char norm_border[] = "#9b9089";

static const char sel_fg[] = "#decfc5";
static const char sel_bg[] = "#96533C";
static const char sel_border[] = "#decfc5";

static const char urg_fg[] = "#decfc5";
static const char urg_bg[] = "#62524F";
static const char urg_border[] = "#62524F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
