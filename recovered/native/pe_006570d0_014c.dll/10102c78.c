/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102c78 */

uint __fastcall FUN_10102c78(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xfffe3fff;
  if ((param_1 & 0x1c000) == 0) {
    uVar1 = param_2;
  }
  return uVar1 | param_1;
}

