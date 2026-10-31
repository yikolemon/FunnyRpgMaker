/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bce1e */

void FUN_1800bce1e(longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 5) < param_3) {
    FUN_1800af9bc(param_1,param_3);
    lVar3 = *param_1;
    uVar5 = param_3;
  }
  else {
    lVar3 = param_1[1];
    uVar1 = lVar3 - lVar2 >> 5;
    uVar5 = param_3 - uVar1;
    if (param_3 < uVar1 || uVar5 == 0) {
      FUN_1800bcfb0(param_2,param_3,lVar2);
      lVar3 = param_1[1];
      lVar2 = param_3 * 0x20 + lVar2;
      for (lVar4 = lVar2; lVar4 != lVar3; lVar4 = lVar4 + 0x20) {
        FUN_180001ef2(lVar4);
      }
      goto LAB_1800bceec;
    }
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
      if (*(ulonglong *)(param_2 + 0x20) < 0x10) {
        lVar3 = param_2 + 8;
      }
      else {
        lVar3 = *(longlong *)(param_2 + 8);
      }
      FUN_180017ca0(lVar2,lVar3,*(undefined8 *)(param_2 + 0x18));
      param_2 = param_2 + 0x28;
      lVar3 = param_1[1];
    }
  }
  lVar2 = FUN_1800bcefc(param_2,uVar5,lVar3,param_1);
LAB_1800bceec:
  param_1[1] = lVar2;
  return;
}

