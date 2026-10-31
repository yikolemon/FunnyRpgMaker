/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007c68e */

undefined4 *
FUN_18007c68e(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_a0;
  ulonglong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_c8;
  uVar4 = FUN_18007d317(local_78,0x40,"%p",param_6);
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
    local_98 = (ulonglong)uVar4;
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_a8 = param_5;
    local_a0 = local_78;
    FUN_18007d3a4(param_1,param_2,&local_88,param_4);
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_c8)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_c8);
}

