/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e530 */

float10 FUN_1026e530(uint param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined8 uVar6;
  double local_14;
  
  if (param_3 == (int *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return (float10)0;
  }
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    *param_3 = -1;
    if (((param_1 != 0) || ((param_2 != 0x7ff00000 && (param_2 != 0xfff00000)))) &&
       ((param_2 & 0x7ff80000) != 0x7ff80000)) {
      uVar2 = FUN_10281250();
      fVar5 = (float10)FUN_102807c0(8,0x17,CONCAT44(param_2,param_1),
                                    (double)CONCAT44(param_2,param_1) + DAT_1028b438,uVar2);
      return fVar5;
    }
  }
  else {
    if ((double)CONCAT44(param_2,param_1) != 0.0) {
      if (((param_2 & 0x7ff00000) == 0) && (param_1 != 0 || (param_2 & 0xfffff) != 0)) {
        uVar3 = param_2 & 0xfffff;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uVar3 == 0) {
          iVar4 = 0x1f;
          if (param_1 != 0) {
            for (; param_1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
        }
        else {
          iVar4 = iVar4 + 0x20;
        }
        uVar6 = __allshl();
        uVar3 = (uint)((ulonglong)uVar6 >> 0x20) & 0xffefffff;
        if ((double)CONCAT44(param_2,param_1) < 0.0) {
          uVar3 = uVar3 | 0x80000000;
        }
        local_14 = (double)(CONCAT44(uVar3,(int)uVar6) & 0xbfefffffffffffff | 0x3fe0000000000000);
        *param_3 = iVar4 + -0x431;
        return (float10)local_14;
      }
      local_14 = (double)(CONCAT44(param_2,param_1) & 0xbfefffffffffffff | 0x3fe0000000000000);
      *param_3 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
      return (float10)local_14;
    }
    *param_3 = 0;
  }
  return (float10)(double)CONCAT44(param_2,param_1);
}

