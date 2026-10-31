/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195e5a */

void thunk_FUN_180195e5f(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  int iStack_38;
  int iStack_34;
  ulonglong uStack_30;
  
  uStack_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  FUN_180198d50(param_1,1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x1c);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x20);
  FUN_180199d18(&iStack_38,param_1);
  if (((*(int *)(lVar3 + 0x9c) == 0) && (iStack_38 == iVar1)) && (iStack_34 == iVar2)) {
    if (DAT_180402640 == (uStack_30 ^ (ulonglong)auStack_58)) {
      return;
    }
  }
  else if (DAT_180402640 == (uStack_30 ^ (ulonglong)auStack_58)) {
    FUN_18019917b(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(uStack_30 ^ (ulonglong)auStack_58);
}

