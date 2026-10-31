/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003dd65 */

int FUN_14003dd65(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [32];
  undefined1 *puVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  char *pcVar27;
  longlong *plVar28;
  bool bVar29;
  undefined1 auStackY_118 [32];
  longlong *local_c8;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  ushort local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_118;
  lVar17 = *(longlong *)(param_1 + 0x98);
  plVar15 = *(longlong **)(param_1 + 0xa0);
  local_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar4 = *(ushort *)(param_1 + 0xe);
  puVar1 = *(uint **)(param_1 + 0x408);
  if (puVar1 == (uint *)0x0) {
    local_50 = (**(code **)(param_1 + 0x2a0))(param_1,0x66766172,plVar15,local_4c);
    iVar13 = local_50;
    if (local_50 != 0) goto LAB_14003e14c;
    iVar6 = FUN_140020f72((longlong)plVar15);
    local_50 = FUN_1400214cf(plVar15,0x1400f4770,(longlong)&local_68);
    iVar13 = local_50;
    if (local_50 != 0) goto LAB_14003e14c;
    iVar13 = 8;
    if (uVar4 < uStack_60._2_2_) goto LAB_14003e14c;
    uVar24 = (uint)uStack_60._4_2_;
    uVar2 = local_68._6_2_;
    pauVar10 = FUN_14001c423(lVar17,0x98,&local_50);
    *(undefined1 (**) [32])(param_1 + 0x408) = pauVar10;
    iVar13 = local_50;
    if (local_50 != 0) goto LAB_14003e14c;
    bVar29 = (uint)uVar2 * 4 + 6 != uVar24;
    uVar24 = (uint)local_68._6_2_;
    *(uint *)*pauVar10 = uVar24;
  }
  else {
    uVar24 = *puVar1;
    iVar6 = 0;
    bVar29 = true;
  }
  uVar5 = (uint)uVar4;
  uVar20 = (ulonglong)uVar24;
  uVar25 = uVar20 * 2 + 7 & 0xfffffffffffffff8;
  lVar14 = uVar20 * 0x20;
  lVar23 = (ulonglong)uVar4 * 0x10;
  uVar26 = (ulonglong)(uVar24 * uVar5) * 4 + 7 & 0xfffffffffffffff8;
  if (puVar1 == (uint *)0x0) {
    *(ulonglong *)(*(longlong *)(param_1 + 0x408) + 0x20) =
         (ulonglong)(uVar24 * 5) + lVar14 + lVar23 + uVar25 + uVar26 + 0x20;
    pauVar10 = FUN_14001c423(lVar17,*(uint *)(*(longlong *)(param_1 + 0x408) + 0x20),&local_50);
    iVar13 = local_50;
    if (local_50 != 0) goto LAB_14003e14c;
    *(undefined1 (**) [32])(*(longlong *)(param_1 + 0x408) + 0x18) = pauVar10;
    *(uint *)*pauVar10 = uVar24;
    *(undefined4 *)(*pauVar10 + 4) = 0xffffffff;
    *(uint *)(*pauVar10 + 8) = uVar5;
    *(undefined1 **)(*pauVar10 + 0x10) = pauVar10[1] + uVar25;
    puVar11 = pauVar10[1] + uVar25 + lVar14;
    *(undefined1 **)(*pauVar10 + 0x18) = puVar11;
    if (uVar5 != 0) {
      lVar18 = 0;
      do {
        *(undefined1 **)(*(longlong *)(*pauVar10 + 0x18) + lVar18) = puVar11 + lVar23;
        lVar18 = lVar18 + 0x10;
        puVar11 = puVar11 + uVar20 * 4;
      } while (lVar23 != lVar18);
      puVar11 = *(undefined1 **)(*pauVar10 + 0x18);
    }
    if (uVar24 != 0) {
      puVar11 = puVar11 + uVar26 + lVar23;
      lVar18 = 0;
      do {
        *(undefined1 **)(*(longlong *)(*pauVar10 + 0x10) + lVar18) = puVar11;
        puVar11 = puVar11 + 5;
        lVar18 = lVar18 + 0x20;
      } while (lVar14 != lVar18);
    }
    uVar12 = FUN_140020a41((longlong)plVar15,iVar6 + (uint)local_68._4_2_);
    local_50 = (int)uVar12;
    iVar13 = local_50;
    if (local_50 != 0) goto LAB_14003e14c;
    if (uVar24 != 0) {
      plVar28 = *(longlong **)(*pauVar10 + 0x10);
      lVar18 = 0;
      do {
        local_50 = 0;
        local_50 = FUN_1400214cf(plVar15,0x1400f47a0,(longlong)&local_7c);
        iVar13 = local_50;
        if (local_50 != 0) goto LAB_14003e14c;
        *(undefined4 *)((longlong)plVar28 + 0x14) = local_7c;
        *(undefined4 *)(plVar28 + 1) = local_78;
        *(undefined4 *)((longlong)plVar28 + 0xc) = local_74;
        *(undefined4 *)(plVar28 + 2) = local_70;
        *(uint *)(plVar28 + 3) = (uint)local_6a;
        *(char *)*plVar28 = (char)((uint)local_7c >> 0x18);
        *(undefined1 *)(*plVar28 + 1) = *(undefined1 *)((longlong)plVar28 + 0x16);
        *(undefined1 *)(*plVar28 + 2) = *(undefined1 *)((longlong)plVar28 + 0x15);
        *(undefined1 *)(*plVar28 + 3) = *(undefined1 *)((longlong)plVar28 + 0x14);
        *(undefined1 *)(*plVar28 + 4) = 0;
        *(undefined2 *)(pauVar10[1] + lVar18 * 2) = local_6c;
        iVar13 = *(int *)((longlong)plVar28 + 0xc);
        if ((iVar13 < (int)plVar28[1]) || ((int)plVar28[2] < iVar13)) {
          *(int *)(plVar28 + 1) = iVar13;
          *(int *)(plVar28 + 2) = iVar13;
        }
        plVar28 = plVar28 + 4;
        lVar18 = lVar18 + 1;
      } while (uVar24 != (uint)lVar18);
    }
    lVar18 = FUN_14001c617(lVar17,4,0,uVar24 * uVar5,0,&local_50);
    *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x28) = lVar18;
    iVar13 = local_50;
    if (local_50 != 0) goto LAB_14003e14c;
    if (uStack_60._2_2_ == 0) {
      uVar8 = 0;
    }
    else {
      if (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0') {
        uVar8 = FUN_140020f72((longlong)plVar15);
        FUN_140040b36(param_1);
        uVar12 = FUN_140020a41((longlong)plVar15,uVar8);
        local_50 = (int)uVar12;
        iVar13 = local_50;
        if (local_50 != 0) goto LAB_14003e14c;
        uVar8 = 0;
        iVar13 = 0;
        if (uStack_60._2_2_ == 0) goto LAB_14003e3d8;
      }
      local_50 = iVar13;
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x28);
      local_c8 = *(longlong **)(*pauVar10 + 0x18);
      uVar7 = 0;
      do {
        local_50 = FUN_140021063(plVar15,(uint)(bVar29 ^ 1) * 2 + uVar24 * 4 + 4);
        iVar13 = local_50;
        if (local_50 != 0) goto LAB_14003e14c;
        uVar4 = FUN_1400211ce((longlong)plVar15);
        *(uint *)(local_c8 + 1) = (uint)uVar4;
        FUN_1400211ce((longlong)plVar15);
        if (uVar24 != 0) {
          lVar19 = *local_c8;
          lVar22 = 0;
          do {
            uVar8 = FUN_14002120e((longlong)plVar15);
            *(uint *)(lVar19 + lVar22 * 4) = uVar8;
            lVar22 = lVar22 + 1;
          } while (uVar24 != (uint)lVar22);
        }
        uVar8 = 0xffff;
        if (bVar29 == false) {
          uVar4 = FUN_1400211ce((longlong)plVar15);
          uVar8 = (uint)uVar4;
        }
        *(uint *)((longlong)local_c8 + 0xc) = uVar8;
        FUN_140040e11(param_1,uVar24,*local_c8,lVar18);
        lVar18 = lVar18 + uVar20 * 4;
        FUN_140021187(plVar15);
        uVar7 = uVar7 + 1;
        local_c8 = local_c8 + 2;
        uVar8 = (uint)uStack_60._2_2_;
      } while (uVar7 < uStack_60._2_2_);
    }
LAB_14003e3d8:
    if (uVar5 != uVar8) {
      lVar18 = *(longlong *)(param_1 + 0x2d0);
      cVar3 = (**(code **)(lVar18 + 0x160))(param_1,0x11,&local_7c,local_80);
      uVar21 = 0x11;
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(lVar18 + 0x160))(param_1,2,&local_7c,local_80);
        uVar21 = 2;
        if (cVar3 == '\0') goto LAB_14003e4ac;
      }
      cVar3 = (**(code **)(lVar18 + 0x160))(param_1,6,&local_7c,local_80);
      if (cVar3 != '\0') {
        *(uint *)(param_1 + 0x424) = uVar5;
        lVar18 = *(longlong *)(*pauVar10 + 0x18);
        lVar19 = (uStack_60 >> 0x10 & 0xffff) * 0x10;
        *(undefined4 *)(lVar18 + 8 + lVar19) = uVar21;
        *(undefined4 *)(lVar18 + 0xc + lVar19) = 6;
        if (uVar24 != 0) {
          lVar18 = *(longlong *)(lVar18 + lVar19);
          puVar16 = (undefined4 *)(*(longlong *)(*pauVar10 + 0x10) + 0xc);
          lVar19 = 0;
          do {
            *(undefined4 *)(lVar18 + lVar19 * 4) = *puVar16;
            lVar19 = lVar19 + 1;
            puVar16 = puVar16 + 8;
          } while (uVar24 != (uint)lVar19);
        }
      }
    }
LAB_14003e4ac:
    FUN_1400410b5(param_1);
  }
  iVar13 = local_50;
  if ((param_2 != (undefined8 *)0x0) &&
     (puVar9 = FUN_140021dbc(lVar17,*(undefined8 **)(*(longlong *)(param_1 + 0x408) + 0x18),
                             *(uint *)(*(longlong *)(param_1 + 0x408) + 0x20),&local_50),
     iVar13 = local_50, local_50 == 0)) {
    plVar15 = (longlong *)((longlong)puVar9 + uVar25 + 0x20);
    puVar9[2] = plVar15;
    lVar17 = (longlong)puVar9 + lVar14 + uVar25 + 0x20;
    puVar9[3] = lVar17;
    if (*(int *)(puVar9 + 1) != 0) {
      lVar17 = (longlong)puVar9 + lVar14 + lVar23 + uVar25 + 0x20;
      lVar14 = 0;
      uVar25 = 0;
      do {
        *(longlong *)(puVar9[3] + lVar14) = lVar17;
        uVar25 = uVar25 + 1;
        lVar14 = lVar14 + 0x10;
        lVar17 = lVar17 + uVar20 * 4;
      } while (uVar25 < *(uint *)(puVar9 + 1));
      plVar15 = (longlong *)puVar9[2];
      lVar17 = puVar9[3];
    }
    if (uVar24 != 0) {
      lVar17 = lVar17 + lVar23 + uVar26;
      do {
        *plVar15 = lVar17;
        iVar13 = *(int *)((longlong)plVar15 + 0x14);
        if (iVar13 < 0x736c6e74) {
          if (iVar13 == 0x6974616c) {
            pcVar27 = "Italic";
            goto LAB_14003df22;
          }
          if (iVar13 == 0x6f70737a) {
            pcVar27 = "OpticalSize";
            goto LAB_14003df22;
          }
        }
        else {
          if (iVar13 == 0x736c6e74) {
            pcVar27 = "Slant";
          }
          else {
            pcVar27 = "Weight";
            if (iVar13 != 0x77676874) {
              if (iVar13 != 0x77647468) goto LAB_14003df25;
              pcVar27 = "Width";
            }
          }
LAB_14003df22:
          *plVar15 = (longlong)pcVar27;
        }
LAB_14003df25:
        lVar17 = lVar17 + 5;
        plVar15 = plVar15 + 4;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    *param_2 = puVar9;
    iVar13 = 0;
  }
LAB_14003e14c:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_118);
  }
  return iVar13;
}

