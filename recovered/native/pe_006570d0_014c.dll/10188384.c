/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10188384 */

void __fastcall FUN_10188384(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(param_1 + 0x84) + -1;
  *(int *)(param_1 + 0x84) = iVar4;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x8c) + -0x10 + iVar4 * 0x10);
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x2c);
  }
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined4 *)(param_1 + 0x48) = *puVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_10187fc8();
  return;
}

