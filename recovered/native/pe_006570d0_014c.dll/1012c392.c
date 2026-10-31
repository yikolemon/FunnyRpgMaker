/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c392 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1012c392(int param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined1 local_41;
  
  do {
    uVar11 = 0;
    uVar12 = 0;
    if ((undefined4 *)param_2[6] != (undefined4 *)0x0) {
      uVar12 = *(undefined4 *)param_2[6];
    }
    if ((((*(byte *)((int)param_2 + 0x11) & 4) != 0) && (param_2[0x1e] != 0)) &&
       (iVar14 = *(int *)(param_2[0x1e] + 0x3a0), iVar14 != 0)) {
      uVar11 = *(undefined4 *)(iVar14 + 8);
    }
    if (param_2[7] == 0) {
      local_41 = 0xff;
    }
    else {
      local_41 = *(undefined1 *)(param_2 + 0x13);
    }
    uVar3 = *param_2;
    uVar4 = param_2[0x27];
    fVar1 = (float)param_2[0x11];
    uVar5 = param_2[2];
    fVar2 = (float)param_2[0x12];
    fVar6 = (float)param_2[0xd];
    fVar7 = (float)param_2[0xe];
    fVar8 = (float)param_2[0xf];
    fVar9 = (float)param_2[0x10];
    iVar14 = *(int *)(param_1 + 0x18);
    if (iVar14 == *(int *)(param_1 + 0x1c)) {
      if (iVar14 == 0) {
        iVar10 = 8;
      }
      else {
        iVar10 = iVar14 / 2 + iVar14;
      }
      iVar13 = iVar14 + 1;
      if (iVar14 + 1 < iVar10) {
        iVar13 = iVar10;
      }
      iVar10 = FUN_100fa1fa(iVar13 * 0x24);
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_1025b2d0(iVar10,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x18) * 0x24);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x20));
      }
      *(int *)(param_1 + 0x20) = iVar10;
      *(int *)(param_1 + 0x1c) = iVar13;
      iVar14 = *(int *)(param_1 + 0x18);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x20);
    }
    *(undefined4 *)(iVar10 + iVar14 * 0x24) = uVar3;
    *(undefined4 *)(iVar10 + 4 + iVar14 * 0x24) = uVar12;
    *(undefined4 *)(iVar10 + 8 + iVar14 * 0x24) = uVar11;
    *(undefined4 *)(iVar10 + 0xc + iVar14 * 0x24) = uVar4;
    *(undefined1 *)(iVar10 + 0x10 + iVar14 * 0x24) = local_41;
    *(char *)(iVar10 + 0x11 + iVar14 * 0x24) = (char)param_3;
    *(undefined2 *)(iVar10 + 0x12 + iVar14 * 0x24) = 0;
    *(uint *)(iVar10 + 0x14 + iVar14 * 0x24) = uVar5 & 0x3fc20;
    *(ulonglong *)(iVar10 + 0x18 + iVar14 * 0x24) =
         CONCAT44((int)fVar9 << 0x10,(int)fVar7 << 0x10) |
         CONCAT44((int)fVar8,(int)fVar6) & (ulonglong)DAT_102b91a0;
    *(uint *)(iVar10 + 0x20 + iVar14 * 0x24) = (int)fVar1 & 0xffffU | (int)fVar2 << 0x10;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    param_3 = param_3 + 1;
    if (param_2[7] != 0) {
      FUN_1012c392(param_3);
    }
    param_2 = (undefined4 *)param_2[8];
  } while (param_2 != (undefined4 *)0x0);
  return;
}

