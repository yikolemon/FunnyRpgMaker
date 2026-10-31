/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022b6b5 */

int FUN_18022b6b5(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_1802246b0(param_1,iVar3,&local_38);
      if (iVar2 == 0) {
        iVar2 = strcmp(param_2,local_38);
        if (iVar2 == 0) goto LAB_18022b70c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  iVar3 = 0;
LAB_18022b70c:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

