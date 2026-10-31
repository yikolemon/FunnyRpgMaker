/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400733dd */

undefined8 FUN_1400733dd(longlong param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_98 [32];
  int local_68 [10];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)local_98;
  lVar6 = *(longlong *)(param_1 + 0x4e0);
  if ((lVar6 != 0) && (pcVar3 = *(char **)(lVar6 + 0x38), pcVar3 != (char *)0x0)) {
    uVar2 = *(uint *)(lVar6 + 0x88);
    if ((pcVar3 <= (char *)(*(longlong *)(lVar6 + 0x80) + (ulonglong)uVar2 + -5)) &&
       (*pcVar3 == '\x01')) {
      uVar13 = *(uint *)(pcVar3 + 1);
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      if (uVar13 <= uVar2 / 7) {
        lVar12 = *(longlong *)(lVar6 + 0x80) + (ulonglong)uVar2;
        uVar7 = 0;
        if (((char *)(lVar12 - (ulonglong)(uVar13 * 7)) < pcVar3 + 5) || (uVar13 == 0))
        goto LAB_1400734f5;
        pbVar5 = (byte *)(pcVar3 + 0xb);
        do {
          if (((ushort)(*(ushort *)(pbVar5 + -6) << 8 | *(ushort *)(pbVar5 + -6) >> 8) <= param_2)
             && (param_2 <= (ushort)(*(ushort *)(pbVar5 + -4) << 8 | *(ushort *)(pbVar5 + -4) >> 8))
             ) {
            pbVar5 = (byte *)(pcVar3 + (ulonglong)*pbVar5 + (ulonglong)pbVar5[-1] * 0x100 +
                                       (ulonglong)pbVar5[-2] * 0x10000);
            if ((byte *)(lVar12 - 1U) < pbVar5) break;
            uVar7 = 0;
            if ((2 < *pbVar5) || (uVar7 = 0, (byte *)(lVar12 - 8U) < pbVar5 + 1))
            goto LAB_1400734f5;
            lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
            lVar10 = ((longlong)(short)((ushort)pbVar5[1] << 8) | (ulonglong)pbVar5[2]) * lVar15;
            iVar4 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
            lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
            lVar16 = ((longlong)(short)((ushort)pbVar5[3] << 8) | (ulonglong)pbVar5[4]) * lVar10;
            iVar8 = (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10);
            lVar15 = ((longlong)(short)((ushort)pbVar5[5] << 8) | (ulonglong)pbVar5[6]) * lVar15;
            iVar14 = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
            lVar10 = ((longlong)(short)((ushort)pbVar5[7] << 8) | (ulonglong)pbVar5[8]) * lVar10;
            iVar11 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
            if (*pbVar5 == 2) {
              local_68[0] = 0;
              local_68[1] = 0;
              local_68[2] = 0;
              local_68[3] = 0;
              if ((byte *)(lVar12 + -4) < pbVar5 + 9) break;
              uVar2 = *(uint *)(pbVar5 + 9);
              FUN_140076aaf(param_1,lVar6,
                            uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18,4,(undefined1 (*) [32])local_68);
              lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c);
              lVar6 = local_68[0] * lVar12;
              iVar4 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar4;
              lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20);
              lVar6 = local_68[1] * lVar10;
              iVar8 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar8;
              lVar12 = local_68[2] * lVar12;
              iVar14 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + iVar14;
              lVar10 = local_68[3] * lVar10;
              iVar11 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10) + iVar11;
            }
            local_68[4] = iVar14;
            local_68[6] = iVar14;
            local_68[1] = iVar8;
            local_68[0] = iVar4;
            local_68[3] = iVar11;
            local_68[2] = iVar4;
            local_68[5] = iVar11;
            local_68[7] = iVar8;
            piVar9 = *(int **)(param_1 + 0xd0);
            lVar6 = 0;
            do {
              uVar2 = piVar9[6];
              if ((uVar2 & 1) != 0) {
                FUN_14001df9f((int *)((longlong)local_68 + lVar6),piVar9);
                piVar9 = *(int **)(param_1 + 0xd0);
                uVar2 = piVar9[6];
              }
              if ((uVar2 & 2) != 0) {
                *(int *)((longlong)local_68 + lVar6) =
                     *(int *)((longlong)local_68 + lVar6) + piVar9[4];
                uVar2 = piVar9[5];
                piVar1 = (int *)((longlong)local_68 + lVar6 + 4);
                *piVar1 = *piVar1 + uVar2;
              }
              lVar6 = lVar6 + 8;
            } while (lVar6 != 0x20);
            *param_3 = local_68._0_8_;
            param_3[1] = local_68._8_8_;
            param_3[2] = CONCAT44(local_68[5],local_68[4]);
            param_3[3] = CONCAT44(local_68[7],local_68[6]);
            uVar7 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
            goto LAB_1400734f5;
          }
          pbVar5 = pbVar5 + 7;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
  }
  uVar7 = 0;
LAB_1400734f5:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)local_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)local_98);
  }
  return uVar7;
}

