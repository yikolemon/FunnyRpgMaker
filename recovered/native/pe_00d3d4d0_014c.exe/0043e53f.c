/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043e53f */

void __fastcall FUN_0043e53f(int param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  puVar1 = *(uint **)(param_1 + 0x2e0);
  uVar8 = *puVar1;
  uVar9 = uVar8;
  if (param_2 < uVar8) {
    uVar9 = param_2;
  }
  if (uVar9 != 0) {
    uVar12 = 0;
    do {
      *(undefined4 *)(param_4 + uVar12 * 4) = *(undefined4 *)(param_3 + uVar12 * 4);
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
  }
  if (uVar8 < param_2) {
    _memset((void *)(param_4 + uVar9 * 4),0,(param_2 - uVar9) * 4);
  }
  if (((undefined4 *)puVar1[7] == (undefined4 *)0x0) ||
     (puVar10 = *(ushort **)puVar1[7], uVar9 == 0 || puVar10 == (ushort *)0x0)) {
    if (uVar9 == 0) {
      return;
    }
  }
  else {
    uVar8 = 0;
    do {
      if (1 < *puVar10) {
        iVar11 = *(int *)(param_4 + uVar8 * 4);
        iVar14 = *(int *)(puVar10 + 2);
        iVar13 = 0;
        do {
          iVar2 = *(int *)(iVar14 + 0xc + iVar13 * 8);
          if (iVar11 < iVar2) {
            iVar3 = *(int *)(iVar14 + 4 + iVar13 * 8);
            iVar11 = FUN_0041dcda(iVar11 - iVar3,
                                  *(int *)(iVar14 + 8 + iVar13 * 8) - *(int *)(iVar14 + iVar13 * 8),
                                  iVar2 - iVar3);
            *(int *)(param_4 + uVar8 * 4) = iVar11 + *(int *)(*(int *)(puVar10 + 2) + iVar13 * 8);
            break;
          }
          iVar13 = iVar13 + 1;
        } while (*puVar10 - 1 != iVar13);
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 4;
    } while (uVar8 != uVar9);
  }
  piVar6 = (int *)(*(int *)(puVar1[3] + 0xc) + 0xc);
  uVar8 = 0;
  do {
    uVar12 = *(uint *)(param_4 + uVar8 * 4);
    if ((int)uVar12 < 0) {
      lVar4 = (longlong)(piVar6[-1] - piVar6[-2]) * (longlong)(int)uVar12;
      iVar11 = (int)(lVar4 >> 0x3f);
      lVar4 = lVar4 + CONCAT44(iVar11,iVar11) + 0x8000;
      iVar11 = ((int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10) + piVar6[-1];
    }
    else {
      iVar11 = piVar6[-1];
      if (uVar12 != 0) {
        lVar4 = (ulonglong)(uint)(*piVar6 - iVar11) * (ulonglong)uVar12;
        uVar5 = (uint)lVar4;
        iVar14 = (*piVar6 - iVar11 >> 0x1f) * uVar12 + (int)((ulonglong)lVar4 >> 0x20);
        uVar7 = iVar14 >> 0x1f;
        uVar12 = uVar5 + uVar7;
        iVar11 = iVar11 + ((uVar7 + iVar14 + (uint)CARRY4(uVar5,uVar7) + (uint)(0xffff7fff < uVar12)
                           ) * 0x10000 | uVar12 + 0x8000 >> 0x10);
      }
    }
    *(int *)(param_4 + uVar8 * 4) = iVar11;
    uVar8 = uVar8 + 1;
    piVar6 = piVar6 + 6;
  } while (uVar9 != uVar8);
  return;
}

