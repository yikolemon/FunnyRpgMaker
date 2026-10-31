/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010d508 */

void FUN_14010d508(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_30;
  ulonglong uVar11;
  
  local_40 = 0xfffffffffffffffe;
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  uVar5 = *(ushort *)(param_1 + 0x3a);
  uVar9 = 0x78;
  if (uVar5 < 0x65) {
    if (uVar5 == 100) {
LAB_14010d5f3:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_14010d5f7:
      cVar4 = FUN_14010f7f8(param_1,0);
    }
    else if (uVar5 < 0x54) {
      if (uVar5 == 0x53) {
LAB_14010d639:
        cVar4 = FUN_14010dc3c(param_1);
      }
      else {
        if (uVar5 != 0x41) {
          if (uVar5 == 0x43) {
LAB_14010d5ad:
            cVar4 = FUN_14010db04(param_1,0);
            goto LAB_14010d65b;
          }
          if (((uVar5 != 0x45) && (uVar5 != 0x46)) && (uVar5 != 0x47)) goto LAB_14010dada;
        }
LAB_14010d584:
        cVar4 = FUN_14010dd98(param_1);
      }
    }
    else {
      if (uVar5 == 0x58) goto LAB_14010d651;
      if (uVar5 != 0x5a) {
        if (uVar5 != 0x61) {
          if (uVar5 != 99) goto LAB_14010dada;
          goto LAB_14010d5ad;
        }
        goto LAB_14010d584;
      }
      cVar4 = FUN_14010dbc8(param_1);
    }
  }
  else if (uVar5 < 0x70) {
    if (uVar5 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar4 = FUN_14010f5ec(param_1,0);
    }
    else {
      if (((uVar5 == 0x65) || (uVar5 == 0x66)) || (uVar5 == 0x67)) goto LAB_14010d584;
      if (uVar5 == 0x69) goto LAB_14010d5f3;
      if (uVar5 != 0x6e) goto LAB_14010dada;
      cVar4 = FUN_14010cd50(param_1);
    }
  }
  else {
    if (uVar5 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_14010d651:
      uVar8 = 1;
    }
    else {
      if (uVar5 == 0x73) goto LAB_14010d639;
      if (uVar5 == 0x75) goto LAB_14010d5f7;
      if (uVar5 != 0x78) goto LAB_14010dada;
      uVar8 = 0;
    }
    cVar4 = FUN_14010f3e0(param_1,uVar8);
  }
LAB_14010d65b:
  uVar14 = 0;
  if ((cVar4 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_14010dada;
  local_38 = 0;
  local_34 = 0;
  uVar10 = *(uint *)(param_1 + 0x28);
  uVar13 = uVar14;
  if ((uVar10 >> 4 & 1) != 0) {
    if ((uVar10 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
        uVar5 = 0x2b;
        goto LAB_14010d69e;
      }
      if ((uVar10 >> 1 & 1) == 0) goto LAB_14010d6c3;
      local_38 = 0x20;
    }
    else {
      uVar5 = 0x2d;
LAB_14010d69e:
      local_38 = (uint)uVar5;
    }
    uVar13 = 1;
  }
LAB_14010d6c3:
  sVar6 = *(short *)(param_1 + 0x3a);
  if (((sVar6 - 0x58U & 0xffdf) != 0) || (bVar3 = true, (uVar10 >> 5 & 1) == 0)) {
    bVar3 = false;
  }
  if ((bVar3) || ((sVar6 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_38 + uVar13 * 2) = 0x30;
    if ((sVar6 == 0x58) || (sVar6 == 0x41)) {
      uVar9 = 0x58;
    }
    *(undefined2 *)((longlong)&local_38 + uVar13 * 2 + 2) = uVar9;
    uVar13 = uVar13 + 2;
  }
  iVar15 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)uVar13;
  if (((uVar10 & 0xc) == 0) && (uVar8 = *(undefined8 *)(param_1 + 8), uVar11 = uVar14, 0 < iVar15))
  {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (sVar6 = FUN_1401165c0(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), sVar6 != -1))) {
      iVar12 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar12 + 1;
      if ((iVar12 == -2) ||
         (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_14010d7a0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_14010d7a0:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_14010cf24(plVar2,&local_38,uVar13,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)uVar13;
  }
  if ((((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0))
     && (uVar8 = *(undefined8 *)(param_1 + 8), uVar13 = uVar14, 0 < iVar15)) {
    while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
           (sVar6 = FUN_1401165c0(0x30,*plVar2,uVar8), sVar6 != -1))) {
      iVar12 = *piVar1;
      *piVar1 = iVar12 + 1;
      if ((iVar12 == -2) ||
         (uVar10 = (int)uVar13 + 1, uVar13 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_14010d851;
    }
    *piVar1 = -1;
  }
LAB_14010d851:
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_14010bc80(lVar7);
    }
    if (*(int *)(*(longlong *)(lVar7 + 0x18) + 0xc) == 0xfde9) {
      local_48 = *(undefined8 *)(param_1 + 0x40);
      local_50 = 0;
      uVar13 = uVar14;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          iVar12 = (int)uVar13;
          local_38 = 0;
          local_68 = *(undefined8 *)(param_1 + 8);
          lVar7 = FUN_1401262ac(&local_38,&local_48,2,&local_50);
          if (lVar7 == -1) goto LAB_14010d97b;
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar6 = FUN_1401165c0((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar6 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          if (lVar7 == 2) {
            if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
               (sVar6 = FUN_1401165c0(local_38._2_2_,*(undefined8 *)(param_1 + 0x460),
                                      *(undefined8 *)(param_1 + 8)), sVar6 == -1)) {
              *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
            }
            else {
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            }
            iVar12 = iVar12 + 1;
          }
          uVar13 = (ulonglong)(iVar12 + 1U);
        } while (iVar12 + 1U != *(uint *)(param_1 + 0x48));
      }
    }
    else {
      lVar7 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar7 + 0x28) == '\0') {
        FUN_14010bc80(lVar7);
      }
      lVar16 = *(longlong *)(param_1 + 0x40);
      uVar13 = uVar14;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_38 = local_38 & 0xffff0000;
          iVar12 = FUN_140125e50(&local_38,lVar16,
                                 (longlong)*(int *)(*(longlong *)(lVar7 + 0x18) + 8),
                                 *(undefined8 *)(param_1 + 8));
          if (iVar12 < 1) goto LAB_14010d97b;
          if ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) != 0)) &&
             (sVar6 = FUN_1401165c0((undefined2)local_38,*(undefined8 *)(param_1 + 0x460),
                                    *(undefined8 *)(param_1 + 8)), sVar6 == -1)) {
            *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          }
          else {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          }
          lVar16 = lVar16 + iVar12;
          uVar10 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar10;
        } while (uVar10 != *(uint *)(param_1 + 0x48));
      }
    }
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_14010cf24(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  goto LAB_14010da63;
LAB_14010d97b:
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
LAB_14010da63:
  if (((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) &&
     (uVar8 = *(undefined8 *)(param_1 + 8), 0 < iVar15)) {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (sVar6 = FUN_1401165c0(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), sVar6 != -1))) {
      iVar12 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar12 + 1;
      if ((iVar12 == -2) ||
         (uVar10 = (int)uVar14 + 1, uVar14 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_14010dada;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_14010dada:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_88);
}

