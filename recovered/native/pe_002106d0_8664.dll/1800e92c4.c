/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e92c4 */

void FUN_1800e92c4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if (uVar4 <= *(longlong *)(param_1 + 0x20) + 1U) {
    FUN_1800e9356(param_1,1);
    uVar4 = *(ulonglong *)(param_1 + 0x10);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x18) & uVar4 - 1;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  if (uVar3 == 0) {
    uVar3 = uVar4;
  }
  uVar3 = uVar3 - 1;
  uVar4 = uVar4 - 1 & uVar3;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + uVar4 * 8) == 0) {
    uVar1 = FUN_1800013fa(0x3058);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = uVar1;
    lVar2 = *(longlong *)(param_1 + 8);
    uVar4 = *(longlong *)(param_1 + 0x10) - 1U & uVar3;
  }
  FUN_1800e94bd(*(undefined8 *)(lVar2 + uVar4 * 8),param_2);
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

