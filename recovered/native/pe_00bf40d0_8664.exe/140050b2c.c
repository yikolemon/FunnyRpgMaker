/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140050b2c */

void FUN_140050b2c(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (plVar1 == (longlong *)0x0) {
    if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
      FUN_140050c64((longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x4f0),param_2);
      return;
    }
  }
  else {
    local_18 = *param_2;
    local_10 = param_3;
    (**(code **)(*plVar1 + 8))(plVar1[1]);
    if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_38);
}

