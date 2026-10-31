/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f75ac */

uint __fastcall FUN_100f75ac(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return uVar1 >> 3;
}

