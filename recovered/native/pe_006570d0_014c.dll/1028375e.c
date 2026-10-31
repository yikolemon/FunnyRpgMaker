/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028375e */

byte FUN_1028375e(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_103a5430)) {
      return *(byte *)((&DAT_103a5230)[param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 0x40;
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 9;
    FUN_10273ea8();
  }
  return 0;
}

