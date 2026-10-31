/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101262e4 */

void __thiscall FUN_101262e4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *param_1;
  if (iVar9 == 0) {
    if (param_1[1] == 0) {
      iVar9 = FUN_100fa1fa(0x200);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar9,param_1[2],*param_1 << 6);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = iVar9;
      param_1[1] = 8;
      iVar10 = *param_1;
    }
    else {
      iVar9 = param_1[2];
      iVar10 = 0;
    }
    puVar8 = (undefined4 *)(iVar10 * 0x40 + iVar9);
  }
  else {
    if (iVar9 == param_1[1]) {
      iVar10 = 1;
      if (1 < iVar9 / 2) {
        iVar10 = iVar9 / 2;
      }
      puVar8 = (undefined4 *)FUN_100fa1fa((iVar10 + iVar9) * 0x40);
      if (param_1[2] != 0) {
        FUN_1025b2d0(puVar8,param_1[2],*param_1 << 6);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = (int)puVar8;
      param_1[1] = iVar10 + iVar9;
      iVar9 = *param_1;
    }
    else {
      puVar8 = (undefined4 *)param_1[2];
    }
    if (0 < iVar9) {
      FUN_1025b2d0(puVar8 + 0x10,puVar8,iVar9 << 6);
      puVar8 = (undefined4 *)param_1[2];
    }
  }
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  puVar8[0xc] = param_2[0xc];
  puVar8[0xd] = uVar1;
  puVar8[0xe] = uVar2;
  puVar8[0xf] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  puVar8[8] = param_2[8];
  puVar8[9] = uVar1;
  puVar8[10] = uVar2;
  puVar8[0xb] = uVar3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  puVar8[4] = param_2[4];
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[7] = uVar7;
  *puVar8 = uVar1;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  *param_1 = *param_1 + 1;
  return;
}

