/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e13ce */

void thunk_FUN_1400e13d3(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  int iStack_38;
  int iStack_34;
  ulonglong uStack_30;
  
  uStack_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  FUN_1400e42c4(param_1,1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x1c);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x20);
  FUN_1400e528c(&iStack_38,param_1);
  if (((*(int *)(lVar3 + 0x9c) == 0) && (iStack_38 == iVar1)) && (iStack_34 == iVar2)) {
    if (DAT_140f17b40 == (uStack_30 ^ (ulonglong)auStack_58)) {
      return;
    }
  }
  else if (DAT_140f17b40 == (uStack_30 ^ (ulonglong)auStack_58)) {
    FUN_1400e46ef(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uStack_30 ^ (ulonglong)auStack_58);
}

