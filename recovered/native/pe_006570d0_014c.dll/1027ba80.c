/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ba80 */

undefined4 FUN_1027ba80(short *param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  
  if ((param_1 != (short *)0x0) && (psVar2 = param_1, iVar3 = param_3, param_2 != 0)) {
    while( true ) {
      if (iVar3 == 0) {
        *param_1 = 0;
        puVar4 = (undefined4 *)FUN_10268ffd();
        *puVar4 = 0x16;
        FUN_10273ea8();
        return 0x16;
      }
      if (*psVar2 == 0) break;
      param_2 = param_2 + -1;
      psVar2 = psVar2 + 1;
      iVar3 = param_2;
    }
    psVar5 = psVar2;
    do {
      sVar1 = *(short *)((param_3 - (int)psVar2) + (int)psVar5);
      *psVar5 = sVar1;
      if (sVar1 == 0) {
        return 0;
      }
      param_2 = param_2 + -1;
      psVar5 = psVar5 + 1;
    } while (param_2 != 0);
    *param_1 = 0;
    puVar4 = (undefined4 *)FUN_10268ffd();
    *puVar4 = 0x22;
    FUN_10273ea8();
    return 0x22;
  }
  puVar4 = (undefined4 *)FUN_10268ffd();
  *puVar4 = 0x16;
  FUN_10273ea8();
  return 0x16;
}

