/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d03ee */

int FUN_1801d03ee(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_1 == (undefined8 *)0x0) {
    local_3c = 0x21;
  }
  else if (param_2 == 0) {
    local_3c = 6;
  }
  else {
    *param_4 = 0;
    uVar1 = *param_1;
    lVar2 = FUN_1801c9a4b(uVar1,0x48,&local_3c);
    if (local_3c == 0) {
      FUN_1801ca654(lVar2,param_2,param_3);
      *(undefined8 *)(lVar2 + 0x10) = uVar1;
      *(code **)(lVar2 + 0x28) = FUN_1801d04a7;
      *param_4 = lVar2;
      local_3c = 0;
    }
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

