/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bf959 */

void FUN_101bf959(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar8 = FUN_101bd5e3();
  iVar10 = *(int *)(iVar8 + 0x48);
  if (iVar10 < param_2) {
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    if (iVar10 <= param_2) {
      iVar10 = param_2;
    }
    puVar9 = (undefined4 *)FUN_100fa1fa(iVar10 * 0x3c);
    if (*(int *)(iVar8 + 0x4c) != 0) {
      FUN_1025b2d0(puVar9,*(int *)(iVar8 + 0x4c),*(int *)(iVar8 + 0x44) * 0x3c);
      FUN_100fa2cb(*(undefined4 *)(iVar8 + 0x4c));
    }
    *(undefined4 **)(iVar8 + 0x4c) = puVar9;
    *(int *)(iVar8 + 0x48) = iVar10;
  }
  else {
    puVar9 = *(undefined4 **)(iVar8 + 0x4c);
  }
  *(int *)(iVar8 + 0x44) = param_2;
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar3 = param_1[0xe];
  puVar9[0xb] = param_1[0xb];
  puVar9[0xc] = uVar1;
  puVar9[0xd] = uVar2;
  puVar9[0xe] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  puVar9[8] = param_1[8];
  puVar9[9] = uVar1;
  puVar9[10] = uVar2;
  puVar9[0xb] = uVar3;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  puVar9[4] = param_1[4];
  puVar9[5] = uVar5;
  puVar9[6] = uVar6;
  puVar9[7] = uVar7;
  *puVar9 = uVar1;
  puVar9[1] = uVar2;
  puVar9[2] = uVar3;
  puVar9[3] = uVar4;
  return;
}

