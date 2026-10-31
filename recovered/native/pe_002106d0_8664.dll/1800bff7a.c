/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bff7a */

void FUN_1800bff7a(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((ulonglong)((*(longlong *)(param_1 + 0x18) - lVar1 >> 3) * -0x3333333333333333) < param_3) {
    FUN_1800bf6ee(param_1,param_3);
    lVar3 = *(longlong *)(param_1 + 8);
    uVar4 = param_3;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar2 = lVar3 - lVar1 >> 3;
    uVar4 = param_3 + lVar2 * 0x3333333333333333;
    if (param_3 < (ulonglong)(lVar2 * -0x3333333333333333) || uVar4 == 0) {
      FUN_1800c0114(param_2,param_3,lVar1);
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar1 = lVar1 + param_3 * 0x28;
      for (lVar2 = lVar1; lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
        FUN_1800bf3e8(lVar2);
      }
      goto LAB_1800c005f;
    }
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0x28) {
      if (lVar1 != param_2) {
        if (*(ulonglong *)(param_2 + 0x20) < 0x10) {
          lVar3 = param_2 + 8;
        }
        else {
          lVar3 = *(longlong *)(param_2 + 8);
        }
        FUN_1800bf9b2(lVar1,lVar3,*(undefined8 *)(param_2 + 0x18));
        lVar3 = *(longlong *)(param_1 + 0x10);
      }
      param_2 = param_2 + 0x28;
    }
  }
  lVar1 = FUN_1800c006f(param_2,uVar4,lVar3,param_1);
LAB_1800c005f:
  *(longlong *)(param_1 + 0x10) = lVar1;
  return;
}

