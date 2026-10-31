/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401812c6 */

void FUN_1401812c6(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14018187b(param_2);
  if (iVar1 == 0) {
    local_30 = *(undefined4 *)(param_1 + 1);
    local_38 = *param_1;
    FUN_140181a97(&local_38,param_2,param_3,param_4);
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
}

