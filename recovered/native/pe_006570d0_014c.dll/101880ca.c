/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101880ca */

void __fastcall FUN_101880ca(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  param_1[10] = 0;
  if (*(int *)(param_1[2] + -0x18 + *param_1 * 0x40) == 0) {
    *(int *)(param_1[2] + *param_1 * 0x40 + -0x20) = param_1[0x1a];
    return;
  }
  uVar13 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar5 = param_1[0x12];
  iVar6 = param_1[0x13];
  iVar7 = param_1[0x14];
  iVar8 = param_1[0x15];
  iVar9 = param_1[0x16];
  iVar10 = param_1[0x17];
  iVar11 = param_1[0x18];
  iVar12 = param_1[0x19];
  iVar3 = param_1[0x1a];
  iVar14 = *param_1;
  iVar4 = param_1[3];
  if (iVar14 == param_1[1]) {
    if (iVar14 == 0) {
      iVar15 = 8;
    }
    else {
      iVar15 = iVar14 / 2 + iVar14;
    }
    iVar16 = iVar14 + 1;
    if (iVar14 + 1 < iVar15) {
      iVar16 = iVar15;
    }
    iVar15 = FUN_100fa1fa(iVar16 << 6);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar15,param_1[2],*param_1 << 6);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar15;
    param_1[1] = iVar16;
    iVar14 = *param_1;
  }
  else {
    iVar15 = param_1[2];
  }
  iVar14 = iVar14 * 0x40;
  piVar1 = (int *)(iVar15 + 0x10 + iVar14);
  *piVar1 = iVar9;
  piVar1[1] = iVar10;
  piVar1[2] = iVar11;
  piVar1[3] = iVar12;
  piVar1 = (int *)(iVar15 + iVar14);
  *piVar1 = iVar5;
  piVar1[1] = iVar6;
  piVar1[2] = iVar7;
  piVar1[3] = iVar8;
  *(int *)(iVar15 + 0x20 + iVar14) = iVar3;
  *(int *)(iVar15 + 0x24 + iVar14) = iVar4;
  puVar2 = (undefined4 *)(iVar15 + 0x28 + iVar14);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)(iVar15 + 0x38 + iVar14) = 0;
  *param_1 = *param_1 + 1;
  if (DAT_10388d00 == (uVar13 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

