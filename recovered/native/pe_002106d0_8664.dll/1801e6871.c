/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e6871 */

int FUN_1801e6871(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar2 = param_3;
  if (param_2 == 0) {
    uVar3 = param_3 + 0x20U & 0x7fffffc0;
  }
  else {
    uVar3 = 0x62;
    lVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + 4 + lVar4);
      uVar5 = iVar1 - param_3;
      if (iVar1 < param_3) {
        uVar5 = param_3 - iVar1;
      }
      if (uVar5 < uVar3) {
        iVar2 = iVar1;
        uVar3 = uVar5;
      }
      lVar4 = lVar4 + 0xc;
    } while ((ulonglong)param_2 * 0xc != lVar4);
    uVar3 = iVar2 + 0x20U & 0xffffffc0;
    if (param_3 < iVar2) {
      if ((int)(uVar3 - 0x30) < param_3) {
        return iVar2;
      }
      return param_3;
    }
  }
  if ((int)(uVar3 | 0x30) <= param_3) {
    iVar2 = param_3;
  }
  return iVar2;
}

