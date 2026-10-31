/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140008d6e */

void FUN_140008d6e(undefined8 *param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)param_1 = *param_2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  }
  else {
    local_30 = 10;
    if (10 < (param_3 | 7)) {
      local_30 = param_3 | 7;
    }
    if (0x7ffffffffffffffd < local_30) {
      local_30 = 0x7ffffffffffffffe;
    }
    uVar4 = FUN_140008b48(param_1,&local_30);
    *param_1 = uVar4;
    param_1[2] = param_3;
    param_1[3] = local_30;
    FUN_140135ff0(uVar4,param_2,param_3 * 2 + 2);
  }
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

