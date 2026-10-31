/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102733f0 */

undefined4 FUN_102733f0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 == 0) {
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0x16;
      FUN_10273ea8();
      return 0x16;
    }
    pcVar3 = param_1;
    do {
      cVar1 = pcVar3[param_3 - (int)param_1];
      *pcVar3 = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      param_2 = param_2 + -1;
      pcVar3 = pcVar3 + 1;
    } while (param_2 != 0);
    *param_1 = '\0';
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

