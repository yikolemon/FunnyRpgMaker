/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017f78 */

void FUN_180017f78(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (uVar3 <= lVar2 + 1U) {
    FUN_180018006(param_1,1);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x18) & uVar3 - 1;
  *(ulonglong *)(param_1 + 0x18) = uVar4;
  uVar4 = uVar4 + lVar2;
  uVar3 = uVar3 - 1 & uVar4;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + uVar3 * 8) == 0) {
    uVar1 = FUN_180239630(0x40);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar3 * 8) = uVar1;
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = *(longlong *)(param_1 + 0x10) - 1U & uVar4;
  }
  FUN_1800181b0(*(undefined8 *)(lVar2 + uVar3 * 8),param_2);
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

