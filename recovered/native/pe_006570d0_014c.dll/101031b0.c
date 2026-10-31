/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101031b0 */

void FUN_101031b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_1039d74c;
  *(undefined4 *)(DAT_1039d74c + 0x1e80) = param_1;
  *(undefined4 *)(iVar4 + 0x1e84) = param_2;
  *(undefined4 *)(iVar4 + 0x1e88) = param_3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(iVar4 + 0x1e9c) = *param_4;
  *(undefined4 *)(iVar4 + 0x1ea0) = uVar1;
  *(undefined4 *)(iVar4 + 0x1ea4) = uVar2;
  *(undefined4 *)(iVar4 + 0x1ea8) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(iVar4 + 0x1e8c) = *param_4;
  *(undefined4 *)(iVar4 + 0x1e90) = uVar1;
  *(undefined4 *)(iVar4 + 0x1e94) = uVar2;
  *(undefined4 *)(iVar4 + 0x1e98) = uVar3;
  return;
}

