/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c4df0 */

/* WARNING: This is an inlined function */
/* WARNING: Switch with 1 destination removed at 0x0001401c4df0 */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001401c4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

