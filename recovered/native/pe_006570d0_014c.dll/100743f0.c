/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100743f0 */

void __fastcall FUN_100743f0(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) {
    __lock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}

