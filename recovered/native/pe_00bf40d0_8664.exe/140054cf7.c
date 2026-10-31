/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140054cf7 */

ulonglong FUN_140054cf7(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
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
    switch(*(undefined4 *)(param_3 + 0x10)) {
    case 1:
      local_18 = param_1 + 0xe8;
      break;
    default:
      uVar1 = 0xa0;
      if (*(uint *)(param_1 + 0x1b0) <= *(uint *)(param_2 + 0xb8)) goto LAB_140054dda;
      local_18 = (ulonglong)*(uint *)(param_2 + 0xb8) * 0xfc + *(longlong *)(param_1 + 0x1b8);
      break;
    case 3:
      local_18 = param_1 + 0x1c8;
      break;
    case 4:
      local_18 = param_1 + 0x110;
      break;
    case 6:
      local_18 = param_1 + 0x148;
    }
    if (*(int *)(param_3 + 0x14) - 9U < 2) {
      local_28 = 0;
      uVar1 = (**(code **)(param_2 + 0x88))(param_2,param_3,&local_18,0);
    }
    else {
      local_28 = 0;
      uVar1 = (**(code **)(param_2 + 0x80))(param_2,param_3,&local_18,0);
    }
  }
LAB_140054dda:
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_48);
}

