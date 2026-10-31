/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10152e0a */

void __fastcall FUN_10152e0a(uint param_1)

{
  if ((int)param_1 < 0) {
    return;
  }
  if (param_1 < 10) {
    return;
  }
  FUN_1026fab0(0,0x40240000,(double)(int)-param_1);
  return;
}

