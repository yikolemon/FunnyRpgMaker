/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e0254 */

void FUN_1407e0254(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  *(ulonglong *)(param_1 + 0x84) = (ulonglong)uVar1;
  uVar2 = *(int *)(param_1 + 0x8c) + -0x10 + uVar1 * 0x10;
  if (uVar1 == 0) {
    uVar2 = *(int *)(param_1 + 0x2c) + 0x2c;
  }
  puVar6 = (undefined4 *)(ulonglong)uVar2;
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  *(undefined4 *)(param_1 + 0x48) = *puVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  FUN_1407dfe98();
  return;
}

