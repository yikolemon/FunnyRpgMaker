/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bbd5c */

void FUN_1800bbd5c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = *(ulonglong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((int)lVar1 + (int)uVar4 & 1U) == 0) && (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 2U >> 1))
  {
    FUN_1800bbe18(param_1,1);
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 2 - 1U & uVar4;
  *(ulonglong *)(param_1 + 0x18) = uVar4;
  uVar4 = uVar4 + lVar1;
  uVar6 = uVar4 >> 1;
  uVar5 = *(longlong *)(param_1 + 0x10) - 1U & uVar6;
  if (*(longlong *)(lVar3 + uVar5 * 8) == 0) {
    uVar2 = FUN_180239630(0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar5 * 8) = uVar2;
    lVar3 = *(longlong *)(param_1 + 8);
    uVar5 = *(longlong *)(param_1 + 0x10) + 0x7fffffffffffffffU & uVar6;
  }
  *(undefined8 *)(*(longlong *)(lVar3 + uVar5 * 8) + (ulonglong)((uint)uVar4 & 1) * 8) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

