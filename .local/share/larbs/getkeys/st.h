/* BEGINNING OF THE DOC */
static char *openurlcmd[] = { "/bin/sh", "-c", "st-urlhandler -o", "externalpipe", NULL };
static char *copyurlcmd[] = { "/bin/sh", "-c", "st-urlhandler -c", "externalpipe", NULL };
static char *copyoutput[] = { "/bin/sh", "-c", "st-copyout", "externalpipe", NULL };

static Shortcut shortcuts[] = {
	/* mask                 keysym          function        argument */
	{ XK_ANY_MOD,           XK_Break,       sendbreak,      {.i =  0} },
	{ ControlMask,          XK_Print,       toggleprinter,  {.i =  0} },
	{ ShiftMask,            XK_Print,       printscreen,    {.i =  0} },
	{ XK_ANY_MOD,           XK_Print,       printsel,       {.i =  0} },
	{ TERMMOD,              XK_Prior,       zoom,           {.f = +1} },
	{ TERMMOD,              XK_Next,        zoom,           {.f = -1} },
	{ TERMMOD,              XK_Home,        zoomreset,      {.f =  0} },
	{ TERMMOD,              XK_C,           clipcopy,       {.i =  0} },
	{ TERMMOD,              XK_V,           clippaste,      {.i =  0} },
	{ MODKEY,               XK_c,           clipcopy,       {.i =  0} },
	{ ShiftMask,            XK_Insert,      clippaste,      {.i =  0} },
	{ MODKEY,               XK_v,           clippaste,      {.i =  0} },
	{ ShiftMask,            XK_Insert,      selpaste,       {.i =  0} },
	{ TERMMOD,              XK_Num_Lock,    numlock,        {.i =  0} },
	{ ShiftMask,            XK_Page_Up,     kscrollup,      {.i = -1} },
	{ ShiftMask,            XK_Page_Down,   kscrolldown,    {.i = -1} },
	{ MODKEY,               XK_Page_Up,     kscrollup,      {.i = -1} },
	{ MODKEY,               XK_Page_Down,   kscrolldown,    {.i = -1} },
	{ MODKEY,               XK_k,           kscrollup,      {.i =  1} },
	{ MODKEY,               XK_j,           kscrolldown,    {.i =  1} },
	{ MODKEY,               XK_Up,          kscrollup,      {.i =  1} },
	{ MODKEY,               XK_Down,        kscrolldown,    {.i =  1} },
	{ MODKEY,               XK_u,           kscrollup,      {.i = -1} },
	{ MODKEY,               XK_d,           kscrolldown,    {.i = -1} },
	{ MODKEY,		XK_s,		changealpha,	{.f = -0.05} },
	{ MODKEY,		XK_a,		changealpha,	{.f = +0.05} },
	{ TERMMOD,              XK_Up,          zoom,           {.f = +1} },
	{ TERMMOD,              XK_Down,        zoom,           {.f = -1} },
	{ TERMMOD,              XK_K,           zoom,           {.f = +1} },
	{ TERMMOD,              XK_J,           zoom,           {.f = -1} },
	{ TERMMOD,              XK_U,           zoom,           {.f = +2} },
	{ TERMMOD,              XK_D,           zoom,           {.f = -2} },
	{ MODKEY,               XK_l,           externalpipe,   {.v = openurlcmd } },
	{ MODKEY,               XK_y,           externalpipe,   {.v = copyurlcmd } },
	{ MODKEY,               XK_o,           externalpipe,   {.v = copyoutput } },
	{ MODKEY,               XK_F2,           invert,         { } },
};
/* END OF THE DOC */
