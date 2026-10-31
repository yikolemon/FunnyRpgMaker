/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180275aa4 */

void FUN_180275aa4(ulonglong param_1,undefined1 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  longlong local_4e0;
  undefined1 *local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined1 local_4c0;
  undefined4 local_4bf;
  undefined2 local_4bb;
  undefined1 local_4b9;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_508;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_4e0 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_4e8 = 0;
    FUN_180290c30(0,0,0,0);
    goto LAB_180275c17;
  }
  local_4bf = 0;
  local_4bb = 0;
  local_4b9 = 0;
  local_4c8 = 0;
  if (((param_1 & 2) != 0) || (local_4c0 = 0, param_2 == (undefined1 *)0x0)) {
    local_4c0 = 1;
  }
  local_4b0 = param_5;
  local_58 = &local_4d8;
  local_498 = 0;
  local_4a0 = param_6;
  local_494 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_4d8 = param_2;
  local_4d0 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_1802769ac(&local_4b8);
  if (param_2 != (undefined1 *)0x0) {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        if (param_3 != 0) {
          if (local_4c8 != param_3) goto LAB_180275c05;
LAB_180275c4c:
          param_2[param_3 + -1] = 0;
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar1) {
          if (local_4c8 == param_3) goto LAB_180275c4c;
          goto LAB_180275c05;
        }
        *param_2 = 0;
      }
    }
    else if (((param_3 != 0) || (iVar1 == 0)) && (local_4c8 != param_3)) {
LAB_180275c05:
      param_2[local_4c8] = 0;
    }
  }
  FUN_180290e40(uStack_60);
LAB_180275c17:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_508);
}

