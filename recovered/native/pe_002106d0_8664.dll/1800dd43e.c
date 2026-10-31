/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd43e */

void FUN_1800dd43e(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 4) < param_3) {
    FUN_1800dd566(param_1,param_3);
    lVar1 = FUN_1800dd63d(param_2,param_3,*param_1,param_1);
  }
  else {
    lVar3 = param_1[1];
    uVar2 = lVar3 - lVar1 >> 4;
    lVar4 = param_3 - uVar2;
    if (param_3 < uVar2 || lVar4 == 0) {
      FUN_1800dd6e2(param_2,param_3,lVar1);
      lVar3 = param_1[1];
      lVar1 = param_3 * 0x10 + lVar1;
      for (lVar4 = lVar1; lVar4 != lVar3; lVar4 = lVar4 + 0x10) {
        FUN_1800137c6(lVar4);
      }
    }
    else {
      if (lVar1 != lVar3) {
        do {
          FUN_1800136fa(local_48,param_2);
          FUN_1800500c4(lVar1,local_48);
          lVar1 = lVar1 + 0x10;
          param_2 = param_2 + 0x10;
          lVar3 = param_1[1];
        } while (lVar1 != lVar3);
      }
      lVar1 = FUN_1800dd63d(param_2,lVar4,lVar3,param_1);
    }
  }
  param_1[1] = lVar1;
  return;
}

