/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a542 */

uint __fastcall FUN_1009a542(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = **(uint **)(param_1 + 4) >> 4 & 7;
  uVar1 = 5;
  if (uVar2 < 5) {
    uVar1 = uVar2;
  }
  return uVar1;
}

