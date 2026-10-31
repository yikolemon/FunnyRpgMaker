/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111ec3 */

void FUN_10111ec3(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 0x2000;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *(undefined4 *)(iVar8 + 0x1f3c) = *param_1;
  *(undefined4 *)(iVar8 + 8000) = uVar1;
  *(undefined4 *)(iVar8 + 0x1f44) = uVar2;
  *(undefined4 *)(iVar8 + 0x1f48) = uVar3;
  *(undefined4 *)(iVar8 + 0x1f4c) = uVar4;
  *(undefined4 *)(iVar8 + 0x1f50) = uVar5;
  *(undefined4 *)(iVar8 + 0x1f54) = uVar6;
  *(undefined4 *)(iVar8 + 0x1f58) = uVar7;
  *(undefined4 *)(iVar8 + 0x1f5c) = param_1[8];
  return;
}

