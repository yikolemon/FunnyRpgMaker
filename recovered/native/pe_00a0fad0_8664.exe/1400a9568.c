/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a9568 */

undefined4 *
FUN_1400a9568(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined2 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  undefined1 *local_c0;
  ulonglong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_8e [6];
  undefined1 local_88 [72];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_e8;
  FUN_140025614(param_1,local_8e,&DAT_14016e819,*(undefined4 *)(param_4 + 0x18));
  uVar4 = FUN_140023fef(local_88,0x40,local_8e,param_6);
  if ((int)uVar4 < 0) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  else {
    local_b8 = (ulonglong)uVar4;
    local_a8 = *param_3;
    uStack_a4 = param_3[1];
    uStack_a0 = param_3[2];
    uStack_9c = param_3[3];
    local_c8 = param_5;
    local_c0 = local_88;
    FUN_1400a9ac6(param_1,param_2,&local_a8,param_4);
  }
  if (DAT_1401c9640 == (local_40 ^ (ulonglong)auStack_e8)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_e8);
}

