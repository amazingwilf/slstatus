/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function		format	argument */
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-updates" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-sep" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-battery" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-sep" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-brightness" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-sep" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-volume" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-sep" },
	{ run_command,	"%s",	"/usr/local/bin/statusbar/sb-clock" },
};
