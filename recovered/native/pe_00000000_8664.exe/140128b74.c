/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140128b74 */

int FUN_140128b74(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar1 = 0;
  if ((*(int *)(param_1 + 1) != 0) && (param_1[8] == 0)) {
    local_30 = &local_1c;
    local_38 = 0;
    lVar2 = FUN_140128c13(*param_1,8,0,*(int *)(param_1 + 1) * 2);
    param_1[8] = lVar2;
    iVar1 = local_1c;
    if (local_1c == 0) {
      *(undefined1 *)((longlong)param_1 + 0x14) = 1;
      param_1[9] = lVar2 + (ulonglong)*(uint *)(param_1 + 1) * 8;
      FUN_140128cbb(param_1);
      iVar1 = 0;
    }
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

