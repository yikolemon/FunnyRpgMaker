/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111da2 */

void FUN_10111da2(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 0x10;
  uVar1 = param_1[1];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(iVar4 + 0x1f18) = *param_1;
  *(undefined4 *)(iVar4 + 0x1f1c) = uVar1;
  *(undefined4 *)(iVar4 + 0x1f20) = uVar2;
  *(undefined4 *)(iVar4 + 0x1f24) = uVar3;
  *(undefined4 *)(iVar4 + 0x1f28) = param_3;
  *(undefined4 *)(iVar4 + 0x1f2c) = param_4;
  return;
}

