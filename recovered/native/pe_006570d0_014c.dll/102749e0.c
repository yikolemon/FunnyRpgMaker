/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102749e0 */

undefined4 FUN_102749e0(short *param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 == 0) {
      *param_1 = 0;
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0x16;
      FUN_10273ea8();
      return 0x16;
    }
    psVar3 = param_1;
    do {
      sVar1 = *(short *)((param_3 - (int)param_1) + (int)psVar3);
      *psVar3 = sVar1;
      if (sVar1 == 0) {
        return 0;
      }
      param_2 = param_2 + -1;
      psVar3 = psVar3 + 1;
    } while (param_2 != 0);
    *param_1 = 0;
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x22;
    FUN_10273ea8();
    return 0x22;
  }
  puVar2 = (undefined4 *)FUN_10268ffd();
  *puVar2 = 0x16;
  FUN_10273ea8();
  return 0x16;
}

