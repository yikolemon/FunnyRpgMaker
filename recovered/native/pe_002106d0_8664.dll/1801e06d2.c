/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e06d2 */

double FUN_1801e06d2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_c70 [424];
  undefined1 local_ac8 [152];
  longlong *local_a30;
  undefined1 local_990 [32];
  char local_970;
  undefined1 local_920 [152];
  longlong *local_888;
  undefined1 local_7e8 [32];
  char local_7c8;
  double local_778 [53];
  double local_5d0 [53];
  double *local_428;
  double *pdStack_420;
  double *local_418;
  undefined1 local_280 [424];
  double local_d8;
  int local_d0;
  char local_cc;
  undefined8 local_c0;
  
  local_c0 = 0xfffffffffffffffe;
  dVar7 = *(double *)(param_2 + 0x28);
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    plVar1 = *(longlong **)(param_1 + 0x198);
    if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802398e0();
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_428,param_2);
    FUN_1801dd8a4(local_778,&local_428);
    pdVar5 = local_5d0;
    FUN_1801dd8a4(pdVar5,local_280);
    if (*(char *)(param_1 + 0xe8) == '\0') {
      FUN_1801e17f9();
LAB_1801e0ee5:
                    /* WARNING: Subroutine does not return */
      FUN_1802398e0();
    }
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if (plVar1 == (longlong *)0x0) goto LAB_1801e0ee5;
    (**(code **)(*plVar1 + 0x10))(plVar1,local_c70,param_2);
    uVar6 = FUN_1801e06d2(local_c70,param_2);
    pdVar4 = local_778;
    if (local_d0 == 0) {
      pdVar5 = local_5d0;
      if (*(char *)(param_2 + 0x24) != '\0') {
        pdVar4 = local_5d0;
        pdVar5 = local_778;
      }
    }
    else if ((local_d0 == 2) || ((local_d0 == 1 && (*(char *)(param_2 + 0x24) != '\x01')))) {
      pdVar4 = local_5d0;
      pdVar5 = local_778;
    }
    FUN_1801dd8a4(local_920,pdVar5);
    FUN_1801dd8a4(local_ac8,pdVar4);
    cVar2 = FUN_18001ba14(param_1,local_920);
    cVar3 = *(char *)(param_2 + 0x24);
    if (cVar3 == '\0') {
      uVar14 = SUB84(DAT_18032a160,0);
      uVar15 = (undefined4)((ulonglong)DAT_18032a160 >> 0x20);
    }
    else {
      uVar14 = (undefined4)DAT_1802ac578;
      uVar15 = (undefined4)((ulonglong)DAT_1802ac578 >> 0x20);
    }
    if (local_7c8 == '\0') {
      FUN_1801e17f9();
    }
    else {
      dVar8 = (double)FUN_1801deb68(local_7e8,*(undefined8 *)(param_2 + 0x28));
      if (local_970 != '\0') {
        dVar9 = (double)FUN_1801deb68(local_990,*(undefined8 *)(param_2 + 0x28));
        if (local_888 != (longlong *)0x0) {
          dVar10 = (double)(**(code **)(*local_888 + 0x10))(local_888,param_2);
          dVar11 = (double)FUN_180234b0a(uVar6,dVar10);
          if (dVar11 < dVar8) {
            dVar10 = (double)FUN_1801dff70(uVar6,dVar8);
          }
          if (local_a30 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1802398e0();
          }
          dVar11 = (double)(**(code **)(*local_a30 + 0x10))(local_a30,param_2);
          dVar12 = (double)FUN_180234b0a(uVar6,dVar11);
          if (dVar12 < dVar9) {
            dVar11 = (double)FUN_1801dff70(uVar6,dVar9);
          }
          if (dVar7 < 0.0) {
            dVar10 = (double)FUN_1801dff70(uVar6,dVar8);
            dVar11 = (double)FUN_1801dff70(uVar6,dVar9);
          }
          if ((dVar11 - dVar10) * (double)CONCAT44(uVar15,uVar14) < local_d8) {
            dVar8 = local_d8 * (double)CONCAT44(uVar15,uVar14);
            dVar9 = dVar8 + dVar10;
            dVar7 = 0.0;
            if (0.0 <= dVar9) {
              dVar7 = dVar9;
            }
            dVar11 = (double)(-(ulonglong)(DAT_18032a0f8 < dVar9) & (ulonglong)DAT_18032a0f8 |
                             ~-(ulonglong)(DAT_18032a0f8 < dVar9) & (ulonglong)dVar7);
            if ((dVar11 - dVar10) * (double)CONCAT44(uVar15,uVar14) < local_d8) {
              dVar8 = dVar11 - dVar8;
              dVar7 = 0.0;
              if (0.0 <= dVar8) {
                dVar7 = dVar8;
              }
              dVar10 = (double)(-(ulonglong)(DAT_18032a0f8 < dVar8) & (ulonglong)DAT_18032a0f8 |
                               ~-(ulonglong)(DAT_18032a0f8 < dVar8) & (ulonglong)dVar7);
            }
          }
          dVar7 = dVar11;
          if ((dVar10 < DAT_180330cd0) || (DAT_180328068 <= dVar10)) {
            if ((dVar11 < DAT_180330cd0) || (DAT_180328068 <= dVar11)) goto LAB_1801e0d85;
            if (local_cc == '\0') {
              dVar7 = DAT_180330ce0;
              if (cVar3 != '\0') {
                dVar7 = DAT_180328068;
              }
              goto LAB_1801e0d85;
            }
          }
          if (cVar3 == '\0') {
            dVar10 = DAT_180330ce0;
            dVar7 = DAT_180330ce0 - local_d8;
            if (dVar11 <= DAT_180330ce0 - local_d8) {
              dVar7 = dVar11;
            }
          }
          else {
            dVar10 = DAT_180328068;
            dVar7 = local_d8 + DAT_180328068;
            if (local_d8 + DAT_180328068 <= dVar11) {
              dVar7 = dVar11;
            }
          }
LAB_1801e0d85:
          if (cVar2 == '\0') {
            dVar10 = dVar7;
          }
          FUN_18019f2e0(local_ac8);
          FUN_18019f2e0(local_920);
          FUN_18019f2e0(local_c70);
          FUN_18019f2e0(local_5d0);
          FUN_18019f2e0(local_778);
          FUN_18019f2e0(local_280);
          FUN_18019f2e0(&local_428);
          return dVar10;
        }
        goto LAB_1801e0ef7;
      }
    }
    FUN_1801e17f9();
LAB_1801e0ef7:
                    /* WARNING: Subroutine does not return */
    FUN_1802398e0();
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802398e0();
  }
  dVar8 = (double)(**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  if (*(char *)(param_1 + 0xe8) != '\x01') {
    return dVar8;
  }
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802398e0();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_428,param_2);
  uVar6 = FUN_1801e06d2(&local_428,param_2);
  FUN_18019f2e0(&local_428);
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1801e17f9();
  }
  else {
    dVar9 = (double)FUN_1801deb68(param_1 + 0x138,*(undefined8 *)(param_2 + 0x28));
    dVar10 = (double)FUN_180234b0a(uVar6,dVar8);
    if (dVar10 < dVar9) {
      dVar8 = (double)FUN_1801dff70(uVar6,dVar9);
    }
    if (dVar7 < 0.0) {
      dVar8 = (double)FUN_1801dff70(uVar6,dVar9);
    }
    if (((dVar8 < DAT_180328068) && (DAT_180330cd0 <= dVar8)) && (*(char *)(param_1 + 0xa0) != '\0')
       ) {
      dVar7 = (double)FUN_180234b0a(DAT_180330ce0,uVar6);
      dVar8 = *(double *)(&DAT_180330d50 + (ulonglong)(dVar7 < dVar9) * 8);
    }
    if (*(char *)(param_1 + 0x130) != '\x01') {
      return dVar8;
    }
    if (*(char *)(param_1 + 0xe8) != '\0') {
      plVar1 = *(longlong **)(param_1 + 0xe0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_428,param_2);
        dVar7 = (double)FUN_1801e06d2(&local_428,param_2);
        FUN_18019f2e0(&local_428);
        if (*(char *)(param_1 + 0x130) == '\0') {
          FUN_1801e17f9();
        }
        else {
          plVar1 = *(longlong **)(param_1 + 0x128);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))(plVar1,&local_428,param_2);
            dVar10 = (double)FUN_1801e06d2(&local_428,param_2);
            FUN_18019f2e0(&local_428);
            uVar14 = (undefined4)((ulonglong)dVar10 >> 0x20);
            uVar16 = (undefined4)((ulonglong)dVar7 >> 0x20);
            uVar15 = SUB84(dVar10,0);
            uVar17 = uVar14;
            if (dVar10 <= dVar7) {
              uVar15 = SUB84(dVar7,0);
              uVar17 = uVar16;
            }
            uVar13 = SUB84(dVar10,0);
            if (dVar7 <= dVar10) {
              uVar13 = SUB84(dVar7,0);
              uVar14 = uVar16;
            }
            dVar11 = (double)FUN_180234b0a(CONCAT44(uVar17,uVar15),dVar8);
            if ((dVar9 <= dVar11) &&
               (dVar11 = (double)FUN_180234b0a(CONCAT44(uVar14,uVar13),dVar8), dVar9 <= dVar11)) {
              return dVar8;
            }
            dVar8 = (double)FUN_180234b8b(CONCAT44(uVar17,uVar15),dVar9);
            local_778[0] = dVar8;
            dVar9 = (double)FUN_180234c80(CONCAT44(uVar14,uVar13),dVar9);
            local_428 = (double *)0x0;
            pdStack_420 = (double *)0x0;
            local_418 = (double *)0x0;
            local_5d0[0] = dVar9;
            if ((dVar8 != DAT_18032a160) || (NAN(dVar8) || NAN(DAT_18032a160))) {
              FUN_1801e1930(&local_428,0,local_778);
            }
            if ((dVar9 != DAT_18032a160) || (NAN(dVar9) || NAN(DAT_18032a160))) {
              if (pdStack_420 == local_418) {
                FUN_1801e1930(&local_428,pdStack_420,local_5d0);
              }
              else {
                *pdStack_420 = dVar9;
                pdStack_420 = pdStack_420 + 1;
              }
            }
            cVar3 = FUN_1801e008d(dVar7);
            if ((cVar3 == '\0') && (cVar3 = FUN_1801e008d(dVar10), cVar3 == '\0')) {
              if ((longlong)pdStack_420 - (longlong)local_428 == 8) {
                dVar7 = *local_428;
              }
              else {
                dVar7 = 0.0;
                if (0.0 <= local_5d0[0]) {
                  dVar7 = local_5d0[0];
                }
              }
            }
            else {
              dVar7 = (double)(~-(ulonglong)(local_778[0] < 0.0) & (ulonglong)local_778[0] |
                              (ulonglong)DAT_18032a0f8 & -(ulonglong)(local_778[0] < 0.0));
            }
            FUN_180004cea(&local_428);
            return dVar7;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_1802398e0();
      }
      goto LAB_1801e0f15;
    }
  }
  FUN_1801e17f9();
LAB_1801e0f15:
                    /* WARNING: Subroutine does not return */
  FUN_1802398e0();
}

