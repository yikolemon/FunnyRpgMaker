/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018fc17 */

uint __fastcall FUN_1018fc17(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

