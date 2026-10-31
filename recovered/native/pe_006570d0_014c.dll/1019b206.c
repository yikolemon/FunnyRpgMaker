/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019b206 */

void __thiscall FUN_1019b206(int *param_1,undefined4 *param_2)

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
  
  iVar10 = *param_1;
  if (iVar10 == 0) {
    if (param_1[1] == 0) {
      iVar10 = FUN_100fa1fa(0x140);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar10,param_1[2],*param_1 * 0x28);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = iVar10;
      param_1[1] = 8;
      iVar9 = *param_1;
    }
    else {
      iVar10 = param_1[2];
      iVar9 = 0;
    }
    puVar8 = (undefined4 *)(iVar10 + iVar9 * 0x28);
  }
  else {
    if (iVar10 == param_1[1]) {
      iVar9 = 1;
      if (1 < iVar10 / 2) {
        iVar9 = iVar10 / 2;
      }
      puVar8 = (undefined4 *)FUN_100fa1fa((iVar9 + iVar10) * 0x28);
      if (param_1[2] != 0) {
        FUN_1025b2d0(puVar8,param_1[2],*param_1 * 0x28);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = (int)puVar8;
      param_1[1] = iVar9 + iVar10;
      iVar10 = *param_1;
    }
    else {
      puVar8 = (undefined4 *)param_1[2];
    }
    if (0 < iVar10) {
      FUN_1025b2d0(puVar8 + 10,puVar8,iVar10 * 0x28);
      puVar8 = (undefined4 *)param_1[2];
    }
  }
  *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(param_2 + 8);
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

