/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017ada1 */

int FUN_14017ada1(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_140173d9c(param_1,iVar3,&local_38);
      if (iVar2 == 0) {
        iVar2 = strcmp(param_2,local_38);
        if (iVar2 == 0) goto LAB_14017adf8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  iVar3 = 0;
LAB_14017adf8:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

