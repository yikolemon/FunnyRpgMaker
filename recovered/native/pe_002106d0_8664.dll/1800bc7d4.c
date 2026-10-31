/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bc7d4 */

void FUN_1800bc7d4(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 5) < param_3) {
    FUN_1800af9bc(param_1,param_3);
    lVar5 = *param_1;
    uVar6 = param_3;
  }
  else {
    lVar5 = param_1[1];
    uVar1 = lVar5 - lVar2 >> 5;
    uVar6 = param_3 - uVar1;
    if (param_3 < uVar1 || uVar6 == 0) {
      FUN_1800bc95f(param_2,param_3,lVar2);
      lVar5 = param_1[1];
      lVar2 = param_3 * 0x20 + lVar2;
      for (lVar4 = lVar2; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
        FUN_180001ef2(lVar4);
      }
      goto LAB_1800bc89b;
    }
    for (; lVar2 != lVar5; lVar2 = lVar2 + 0x20) {
      puVar3 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar3 = (undefined8 *)*param_2;
      }
      FUN_180017ca0(lVar2,puVar3,param_2[2]);
      param_2 = param_2 + 4;
      lVar5 = param_1[1];
    }
  }
  lVar2 = FUN_1800bc8ab(param_2,uVar6,lVar5,param_1);
LAB_1800bc89b:
  param_1[1] = lVar2;
  return;
}

