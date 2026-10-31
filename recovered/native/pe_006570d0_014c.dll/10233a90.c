/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233a90 */

void __fastcall FUN_10233a90(int param_1)

{
  if (*(FILE **)(param_1 + 0x4c) != (FILE *)0x0) {
    __unlock_file(*(FILE **)(param_1 + 0x4c));
  }
  return;
}

