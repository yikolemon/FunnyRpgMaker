/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036caa */

void FUN_140036caa(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [21];
  undefined1 local_23 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_2 + 0x40)) {
    local_20 = FUN_14001a250(local_38,*(int *)(param_2 + 0x40),0x15);
    FUN_140019fc2(param_4,local_20,local_23);
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

