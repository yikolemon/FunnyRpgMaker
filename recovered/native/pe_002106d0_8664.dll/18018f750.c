/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018f750 */

void FUN_18018f750(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar5 = (longlong)*(int *)(param_1 + 0xa0) + -1;
  iVar4 = (int)lVar5;
  *(int *)(param_1 + 0xa0) = iVar4;
  puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xa8) + -0x10 + lVar5 * 0x10);
  if (iVar4 == 0) {
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x38);
  }
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)(param_1 + 0x60) = *puVar6;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_18018f3aa();
  return;
}

