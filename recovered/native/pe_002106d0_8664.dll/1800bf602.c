/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf602 */

void FUN_1800bf602(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((ulonglong)((*(longlong *)(param_1 + 0x18) - lVar1 >> 3) * -0x3333333333333333) < param_3) {
    FUN_1800bf6ee(param_1,param_3);
    lVar4 = *(longlong *)(param_1 + 8);
    uVar5 = param_3;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar2 = lVar4 - lVar1 >> 3;
    uVar5 = param_3 + lVar2 * 0x3333333333333333;
    if (param_3 < (ulonglong)(lVar2 * -0x3333333333333333) || uVar5 == 0) {
      FUN_1800bf88c(param_2,param_3,lVar1);
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar1 = lVar1 + param_3 * 0x28;
      for (lVar2 = lVar1; lVar2 != lVar4; lVar2 = lVar2 + 0x28) {
        FUN_1800bf3e8(lVar2);
      }
      goto LAB_1800bf6de;
    }
    for (; lVar1 != lVar4; lVar1 = lVar1 + 0x28) {
      puVar3 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
      }
      FUN_1800bf9b2(lVar1,puVar3,param_2[2]);
      param_2 = param_2 + 4;
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
  }
  lVar1 = FUN_1800bf7d0(param_2,uVar5,lVar4,param_1);
LAB_1800bf6de:
  *(longlong *)(param_1 + 0x10) = lVar1;
  return;
}

