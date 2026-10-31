/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180273510 */

void FUN_180273510(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined2 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  ulonglong uVar11;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  cVar5 = *(char *)(param_1 + 0x39);
  uVar9 = 0x78;
  if (cVar5 < 'e') {
    if (cVar5 == 'd') {
LAB_1802735f3:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_1802735f7:
      cVar5 = FUN_180276768(param_1,0);
    }
    else if (cVar5 < 'T') {
      if (cVar5 == 'S') {
LAB_180273639:
        cVar5 = FUN_180273b98(param_1);
      }
      else {
        if (cVar5 != 'A') {
          if (cVar5 == 'C') {
LAB_1802735ad:
            cVar5 = FUN_180273a48(param_1,0);
            goto LAB_18027365b;
          }
          if (((cVar5 != 'E') && (cVar5 != 'F')) && (cVar5 != 'G')) goto LAB_180273a1e;
        }
LAB_180273584:
        cVar5 = FUN_180273c34(param_1);
      }
    }
    else {
      if (cVar5 == 'X') goto LAB_180273651;
      if (cVar5 != 'Z') {
        if (cVar5 != 'a') {
          if (cVar5 != 'c') goto LAB_180273a1e;
          goto LAB_1802735ad;
        }
        goto LAB_180273584;
      }
      cVar5 = FUN_180273b1c(param_1);
    }
  }
  else if (cVar5 < 'p') {
    if (cVar5 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar5 = FUN_180276564(param_1,0);
    }
    else {
      if (((cVar5 == 'e') || (cVar5 == 'f')) || (cVar5 == 'g')) goto LAB_180273584;
      if (cVar5 == 'i') goto LAB_1802735f3;
      if (cVar5 != 'n') goto LAB_180273a1e;
      cVar5 = FUN_180273e90(param_1);
    }
  }
  else {
    if (cVar5 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_180273651:
      uVar8 = 1;
    }
    else {
      if (cVar5 == 's') goto LAB_180273639;
      if (cVar5 == 'u') goto LAB_1802735f7;
      if (cVar5 != 'x') goto LAB_180273a1e;
      uVar8 = 0;
    }
    cVar5 = FUN_180276360(param_1,uVar8);
  }
LAB_18027365b:
  uVar13 = 0;
  if ((cVar5 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_180273a1e;
  uVar11 = local_50 & 0xffffffffff000000;
  uVar10 = *(uint *)(param_1 + 0x28);
  uVar12 = uVar13;
  if ((uVar10 >> 4 & 1) != 0) {
    local_50._1_7_ = (undefined7)(uVar11 >> 8);
    if ((uVar10 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar10 >> 1 & 1) == 0) goto LAB_1802736b7;
        local_50 = CONCAT71(local_50._1_7_,0x20);
      }
      else {
        local_50 = CONCAT71(local_50._1_7_,0x2b);
      }
    }
    else {
      local_50 = CONCAT71(local_50._1_7_,0x2d);
    }
    uVar12 = 1;
    uVar11 = local_50;
  }
LAB_1802736b7:
  local_50 = uVar11;
  cVar5 = *(char *)(param_1 + 0x39);
  if (((cVar5 + 0xa8U & 0xdf) != 0) || (bVar4 = true, (uVar10 >> 5 & 1) == 0)) {
    bVar4 = false;
  }
  if ((bVar4) || ((cVar5 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_50 + uVar12) = 0x30;
    if ((cVar5 == 'X') || (cVar5 == 'A')) {
      uVar9 = 0x58;
    }
    *(undefined1 *)((longlong)&local_50 + uVar12 + 1) = uVar9;
    uVar12 = uVar12 + 2;
  }
  iVar15 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x48)) - (int)uVar12;
  if (((uVar10 & 0xc) == 0) && (uVar8 = *(undefined8 *)(param_1 + 8), uVar11 = uVar13, 0 < iVar15))
  {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (iVar6 = FUN_180285930(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar6 != -1))) {
      iVar6 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar6 + 1;
      if ((iVar6 == -2) ||
         (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_18027376c;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_18027376c:
  plVar2 = (longlong *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
    local_68 = *(undefined8 *)(param_1 + 8);
    FUN_180272ea4(plVar2,&local_50,uVar12,piVar1);
  }
  else {
    *piVar1 = *piVar1 + (int)uVar12;
  }
  if ((((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0))
     && (uVar8 = *(undefined8 *)(param_1 + 8), uVar11 = uVar13, 0 < iVar15)) {
    while ((((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) != 0 && (*(longlong *)(*plVar2 + 8) == 0)) ||
           (iVar6 = FUN_180285930(0x30,*plVar2,uVar8), iVar6 != -1))) {
      iVar6 = *piVar1;
      *piVar1 = iVar6 + 1;
      if ((iVar6 == -2) ||
         (uVar10 = (int)uVar11 + 1, uVar11 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_180273813;
    }
    *piVar1 = -1;
  }
LAB_180273813:
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    plVar2 = (longlong *)(param_1 + 0x460);
    if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
      local_68 = *(undefined8 *)(param_1 + 8);
      FUN_180272ea4(plVar2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x48);
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_180272dc0(lVar7);
    }
    puVar14 = *(undefined2 **)(param_1 + 0x40);
    if (*(int *)(*(longlong *)(lVar7 + 0x18) + 0xc) == 0xfde9) {
      local_50 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        piVar1 = (int *)(param_1 + 0x20);
        plVar2 = (longlong *)(param_1 + 0x460);
        uVar11 = uVar13;
        do {
          uVar3 = *puVar14;
          puVar14 = puVar14 + 1;
          lVar7 = FUN_1802964a0(local_40,uVar3,&local_50,*(undefined8 *)(param_1 + 8));
          if (lVar7 == -1) {
            *piVar1 = -1;
            break;
          }
          if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
            local_68 = *(undefined8 *)(param_1 + 8);
            FUN_180272ea4(plVar2,local_40,lVar7,piVar1);
          }
          else {
            *piVar1 = *piVar1 + (int)lVar7;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 != *(uint *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      plVar2 = (longlong *)(param_1 + 0x460);
      uVar11 = uVar13;
      do {
        local_50 = local_50 & 0xffffffff00000000;
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        local_68 = *(undefined8 *)(param_1 + 8);
        iVar6 = FUN_180295e44(&local_50,local_40,6,uVar3);
        if (iVar6 != 0) {
LAB_180273961:
          *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
          break;
        }
        if ((int)local_50 == 0) goto LAB_180273961;
        if (((*(uint *)(*plVar2 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*plVar2 + 8) != 0)) {
          local_68 = *(undefined8 *)(param_1 + 8);
          FUN_180272ea4(plVar2,local_40,local_50 & 0xffffffff,param_1 + 0x20);
        }
        else {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (int)local_50;
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 != *(uint *)(param_1 + 0x48));
    }
  }
  if (((-1 < *(int *)(param_1 + 0x20)) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) &&
     (uVar8 = *(undefined8 *)(param_1 + 8), 0 < iVar15)) {
    while ((((*(uint *)(*(longlong *)(param_1 + 0x460) + 0x14) >> 0xc & 1) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0x460) + 8) == 0)) ||
           (iVar6 = FUN_180285930(0x20,*(undefined8 *)(param_1 + 0x460),uVar8), iVar6 != -1))) {
      iVar6 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar6 + 1;
      if ((iVar6 == -2) ||
         (uVar10 = (int)uVar13 + 1, uVar13 = (ulonglong)uVar10, iVar15 <= (int)uVar10))
      goto LAB_180273a1e;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
LAB_180273a1e:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
}

