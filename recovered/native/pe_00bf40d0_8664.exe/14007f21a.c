/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f21a */

void FUN_14007f21a(undefined8 *param_1,longlong *param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14007f7cf(param_2);
  if (iVar1 == 0) {
    local_30 = *(undefined4 *)(param_1 + 1);
    local_38 = *param_1;
    FUN_14007f9eb((int *)&local_38,param_2,param_3,param_4);
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

