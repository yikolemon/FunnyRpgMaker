/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027aa8f */

undefined4 FUN_1027aa8f(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_10269012();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_103a5430)) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_103a5230)[param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        return *(undefined4 *)((&DAT_103a5230)[param_1 >> 6] + 0x18 + iVar2);
      }
    }
    puVar1 = (undefined4 *)FUN_10269012();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 9;
    FUN_10273ea8();
  }
  return 0xffffffff;
}

