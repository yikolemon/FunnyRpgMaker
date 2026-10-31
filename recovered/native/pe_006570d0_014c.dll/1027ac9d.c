/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ac9d */

undefined4 FUN_1027ac9d(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_103a5430)) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (*(int *)(iVar3 + 0x18 + (&DAT_103a5230)[param_1 >> 6]) == -1) {
      iVar1 = FUN_1028692d();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1027ad02;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1027ad02:
      *(HANDLE *)((&DAT_103a5230)[param_1 >> 6] + 0x18 + iVar3) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_10268ffd();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_10269012();
  *puVar2 = 0;
  return 0xffffffff;
}

