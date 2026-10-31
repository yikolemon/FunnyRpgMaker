/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015bb25 */

ulonglong FUN_14015bb25(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
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
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

