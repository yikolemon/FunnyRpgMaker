/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f7cf */

int FUN_14007f7cf(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_a8;
  iVar7 = 6;
  if ((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    if (param_1[1] == 0) {
      lVar14 = 0;
    }
    else {
      lVar10 = param_1[1];
      lVar15 = 0;
      do {
        puVar13 = *(undefined8 **)(lVar10 + 8);
        local_70 = (undefined8 *)0x0;
        for (; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)puVar13[5]) {
          iVar7 = *(int *)(puVar13 + 4);
          if (iVar7 == 3) {
            local_68 = *puVar13;
            local_60 = puVar13[2];
            uStack_58 = puVar13[3];
            local_50 = puVar13[1];
            iVar7 = FUN_14007ff81(lVar1,&local_68,0x20,(longlong *)&local_70);
LAB_14007f948:
            if (iVar7 != 0) goto LAB_14007f9b6;
          }
          else {
            if (iVar7 == 2) {
              local_68 = *puVar13;
              local_60 = puVar13[2];
              uStack_58 = puVar13[1];
              uVar11 = (int)local_68 + (int)uStack_58 + (int)local_60 * -2;
              uVar12 = -uVar11;
              if ((int)uVar12 < 0) {
                uVar12 = uVar11;
              }
              uVar8 = ((int)((ulonglong)local_68 >> 0x20) + (int)((ulonglong)uStack_58 >> 0x20)) -
                      ((uint)(local_60 >> 0x1f) & 0xfffffffe);
              uVar11 = -uVar8;
              if ((int)uVar11 < 0) {
                uVar11 = uVar8;
              }
              if (uVar11 < uVar12) {
                uVar11 = uVar12;
              }
              uVar12 = 1;
              if (8 < uVar11) {
                uVar9 = (ulonglong)uVar11;
                do {
                  uVar9 = uVar9 >> 2;
                  uVar12 = uVar12 * 2;
                  bVar3 = 0x23 < uVar11;
                  uVar11 = (uint)uVar9;
                } while (bVar3);
              }
              iVar7 = FUN_14007fe84(lVar1,&local_68,uVar12,(longlong *)&local_70);
              goto LAB_14007f948;
            }
            if (iVar7 != 1) {
              iVar7 = 6;
              goto LAB_14007f9b6;
            }
            iVar7 = FUN_14007f619(lVar1,&local_80);
            if (iVar7 != 0) goto LAB_14007f9b6;
            local_80[4] = puVar13[4];
            uVar4 = *puVar13;
            uVar5 = puVar13[1];
            uVar6 = puVar13[3];
            local_80[2] = puVar13[2];
            local_80[3] = uVar6;
            *local_80 = uVar4;
            local_80[1] = uVar5;
            local_80[5] = local_70;
            local_70 = local_80;
          }
        }
        iVar7 = FUN_14007f596(lVar1,&local_78);
        lVar14 = local_78;
        if (iVar7 != 0) goto LAB_14007f9b6;
        *(longlong *)(local_78 + 0x10) = lVar15;
        *(undefined8 **)(local_78 + 8) = local_70;
        local_70 = (undefined8 *)0x0;
        lVar2 = *(longlong *)(lVar10 + 0x10);
        local_78 = lVar10;
        FUN_140080116(lVar1,&local_78);
        lVar10 = lVar2;
        lVar15 = lVar14;
      } while (lVar2 != 0);
    }
    param_1[1] = lVar14;
    iVar7 = 0;
  }
LAB_14007f9b6:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_a8);
  }
  return iVar7;
}

