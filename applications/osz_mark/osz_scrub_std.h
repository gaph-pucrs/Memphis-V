/*
 * osz_scrub_std.h
 *
 * Shared layout of the residue test. osz_mark writes the pattern into its own
 * data page and osz_probe looks for it in the page it inherits, so both have to
 * agree on where and what.
 *
 * The window sits well above the .data/.bss of these tiny tasks and well below
 * the stack, which grows down from the top of the 64 KiB data page. Nothing the
 * C runtime does reaches it, so anything found there came from a previous
 * tenant of the PE.
 */

#ifndef OSZ_SCRUB_STD_H_
#define OSZ_SCRUB_STD_H_

#define OSZ_SCRUB_BASE      0x40008000U   /* MMR_DATA_BASE | 0x8000 */
#define OSZ_SCRUB_WORDS     4096          /* 16 KiB */
#define OSZ_SCRUB_MAGIC     0x5EC5E7A5U   /* "secret-ish", easy to spot */
#define OSZ_SCRUB_MSG_WORDS 64            /* message shape copied from prod_cons */

#endif /* OSZ_SCRUB_STD_H_ */
