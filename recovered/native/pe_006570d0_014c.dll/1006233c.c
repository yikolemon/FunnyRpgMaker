/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006233c */

undefined4 __fastcall FUN_1006233c(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 3 && DAT_1039ca50 != 0) {
    uVar1 = *(undefined4 *)(DAT_1039ca50 + 8 + param_1 * 4);
  }
  return uVar1;
}

