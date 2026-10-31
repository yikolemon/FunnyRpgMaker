/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140059a75 */

ulonglong FUN_140059a75(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (*(int *)(param_3 + 0x14) == 0xb) {
    (**(code **)(param_3 + 0x18))(param_1,param_2);
    uVar1 = (ulonglong)*(uint *)(param_2 + 0x18);
  }
  else {
    lVar2 = 0xd8;
    if (*(int *)(param_3 + 0x10) == 3) {
      lVar2 = 0x110;
    }
    local_18 = 0x27c;
    if (*(int *)(param_3 + 0x10) != 6) {
      local_18 = lVar2;
    }
    local_18 = param_1 + local_18;
    if (*(int *)(param_3 + 0x14) - 9U < 2) {
      local_28 = 0;
      uVar1 = (**(code **)(param_2 + 0x88))(param_2,param_3,&local_18,0);
    }
    else {
      local_28 = 0;
      uVar1 = (**(code **)(param_2 + 0x80))(param_2,param_3,&local_18,0);
    }
  }
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_48);
}

