/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f85c */

void FUN_14016f85c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    do {
      iVar1 = FUN_14016f96b(lVar3,param_2);
      if (((iVar1 != 0) || (iVar1 = FUN_14016f96b(lVar3,param_3), iVar1 != 0)) ||
         (iVar1 = FUN_14016f96b(lVar3,param_4), iVar1 != 0)) goto LAB_14016f8e9;
      lVar3 = lVar3 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_14016f748(param_1 + 0x20,param_5,&local_48);
  lVar3 = local_48;
  if (iVar2 == 0) {
LAB_14016f8e9:
    iVar2 = FUN_14016f67d(lVar3,param_2,param_5);
    if ((iVar2 == 0) && (iVar2 = FUN_14016f67d(lVar3,param_3,param_5), iVar2 == 0)) {
      if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
        FUN_14016f67d(lVar3,param_4,param_5);
        return;
      }
      goto LAB_14016f95d;
    }
  }
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
LAB_14016f95d:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
}

