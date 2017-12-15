#ifndef CHECK_TAGS_H
#define CHECK_TAGS_H

/* Program argument options */
struct
{
	const char *file_name;
	bool verbose;
	bool pound;
	bool single;
	bool multi;
} options;

/* Print to screen */
#define PRINT(...) printf(__VA_ARGS__);

/* Print to stderr */
#define PRINTE(...) fprintf(stderr, "Error: "); fprintf(stderr, __VA_ARGS__);

/* Print verbose messages */
#define PRINTV(...) if (options.verbose) PRINT(__VA_ARGS__);


/*
	Program usage.

	@param	argv	show program name
*/
static void usage(char *argv[]);

/*
	Program version.

	@param	argv	show program name
*/
static void version(char *argv[]);

/*
	Parse program arguments.

	@param	argc	argument count
	@param	argv	argument array
	@return			exit_success or exit_failure
*/
static int parse_args(int argc, char *argv[]);

#endif /* CHECK_TAGS_H */