/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801326aa */

void FUN_1801326aa(longlong param_1,undefined4 *param_2,int param_3)

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
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  
  uVar10 = DAT_1802deba0;
  do {
    uVar14 = 0;
    uVar15 = 0;
    if (*(undefined4 **)(param_2 + 6) != (undefined4 *)0x0) {
      uVar15 = **(undefined4 **)(param_2 + 6);
    }
    if ((((*(byte *)((longlong)param_2 + 0x11) & 4) != 0) && (*(longlong *)(param_2 + 0x24) != 0))
       && (lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x24) + 0x408), lVar12 != 0)) {
      uVar14 = *(undefined4 *)(lVar12 + 0x10);
    }
    if (*(longlong *)(param_2 + 8) == 0) {
      uVar16 = 0xff;
    }
    else {
      uVar16 = *(undefined1 *)(param_2 + 0x18);
    }
    uVar3 = *param_2;
    uVar4 = param_2[0x31];
    uVar5 = param_2[2];
    fVar1 = (float)param_2[0x16];
    fVar2 = (float)param_2[0x17];
    fVar6 = (float)param_2[0x12];
    fVar7 = (float)param_2[0x13];
    fVar8 = (float)param_2[0x14];
    fVar9 = (float)param_2[0x15];
    iVar18 = *(int *)(param_1 + 0x20);
    if (iVar18 == *(int *)(param_1 + 0x24)) {
      if (iVar18 == 0) {
        iVar11 = 8;
      }
      else {
        iVar11 = iVar18 / 2 + iVar18;
      }
      iVar17 = iVar18 + 1;
      if (iVar18 + 1 < iVar11) {
        iVar17 = iVar11;
      }
      lVar12 = FUN_1800fe7f8((longlong)iVar17 * 0x24);
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_1802a82f0(lVar12,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_1 + 0x20) * 0x24
                     );
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x28));
      }
      *(longlong *)(param_1 + 0x28) = lVar12;
      *(int *)(param_1 + 0x24) = iVar17;
      iVar18 = *(int *)(param_1 + 0x20);
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x28);
    }
    lVar13 = (longlong)iVar18;
    *(undefined4 *)(lVar12 + lVar13 * 0x24) = uVar3;
    *(undefined4 *)(lVar12 + 4 + lVar13 * 0x24) = uVar15;
    *(undefined4 *)(lVar12 + 8 + lVar13 * 0x24) = uVar14;
    *(undefined4 *)(lVar12 + 0xc + lVar13 * 0x24) = uVar4;
    *(undefined1 *)(lVar12 + 0x10 + lVar13 * 0x24) = uVar16;
    *(char *)(lVar12 + 0x11 + lVar13 * 0x24) = (char)param_3;
    *(undefined2 *)(lVar12 + 0x12 + lVar13 * 0x24) = 0;
    *(uint *)(lVar12 + 0x14 + lVar13 * 0x24) = uVar5 & 0x3fc20;
    *(ulonglong *)(lVar12 + 0x18 + lVar13 * 0x24) =
         CONCAT44((int)fVar9 << 0x10,(int)fVar7 << 0x10) | CONCAT44((int)fVar8,(int)fVar6) & uVar10;
    *(uint *)(lVar12 + 0x20 + lVar13 * 0x24) = (int)fVar1 & 0xffffU | (int)fVar2 << 0x10;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    param_3 = param_3 + 1;
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1801326aa(param_1,*(longlong *)(param_2 + 8),param_3);
    }
    param_2 = *(undefined4 **)(param_2 + 10);
  } while (param_2 != (undefined4 *)0x0);
  return;
}

