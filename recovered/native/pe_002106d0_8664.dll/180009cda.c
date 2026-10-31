/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180009cda */

undefined8 FUN_180009cda(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [71];
  char cStack_29;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_a8;
  lVar4 = 0;
  do {
    lVar3 = lVar4;
    (&cStack_29)[lVar3] = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)param_3 & 0xf];
    param_3 = param_3 >> 4;
    lVar4 = lVar3 + -1;
  } while (param_3 != 0);
  if (lVar4 == -0x18 || -lVar4 < 0x18) {
    thunk_FUN_180006ba5(&cStack_29 + lVar3,-lVar4,local_88);
    puVar2 = local_88 + -lVar4;
  }
  else {
    puVar2 = local_70;
  }
  lVar4 = param_2[2];
  uVar1 = lVar4 + 1;
  if ((ulonglong)param_2[3] < uVar1) {
    (**(code **)*param_2)(param_2);
    lVar4 = param_2[2];
    uVar1 = lVar4 + 1;
  }
  param_2[2] = uVar1;
  *(undefined1 *)(param_2[1] + lVar4) = 0x30;
  lVar4 = param_2[2];
  uVar1 = lVar4 + 1;
  if ((ulonglong)param_2[3] < uVar1) {
    (**(code **)*param_2)(param_2);
    lVar4 = param_2[2];
    uVar1 = lVar4 + 1;
  }
  param_2[2] = uVar1;
  *(undefined1 *)(param_2[1] + lVar4) = 0x78;
  FUN_18000692b(param_1,local_88,puVar2,param_2);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_a8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_a8);
}

