/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f0731 */

int FUN_1801f0731(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  char *pcVar23;
  bool bVar24;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int *local_f0;
  byte local_d9;
  undefined8 local_d8;
  uint local_cc;
  uint *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  int local_ac;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_118;
  uVar17 = *(undefined8 *)(param_1 + 0x98);
  uVar9 = *(undefined8 *)(param_1 + 0xa0);
  local_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar3 = *(ushort *)(param_1 + 0xe);
  puVar8 = *(uint **)(param_1 + 0x408);
  if (puVar8 == (uint *)0x0) {
    local_50 = (**(code **)(param_1 + 0x2a0))(param_1,0x66766172,uVar9,local_4c);
    iVar10 = local_50;
    if (local_50 != 0) goto LAB_1801f0b18;
    uVar5 = FUN_1801ceb6f(uVar9);
    local_50 = FUN_1801cf0cc(uVar9,&DAT_180337650,&local_68);
    iVar10 = local_50;
    if (local_50 != 0) goto LAB_1801f0b18;
    local_d8 = CONCAT44(local_d8._4_4_,uVar5);
    iVar10 = 8;
    if (uVar3 < uStack_60._2_2_) goto LAB_1801f0b18;
    local_c0 = CONCAT44(local_c0._4_4_,(uint)uStack_60._4_2_);
    uVar1 = local_68._6_2_;
    puVar7 = (uint *)FUN_1801c9a4b(uVar17,0x98,&local_50);
    *(uint **)(param_1 + 0x408) = puVar7;
    iVar10 = local_50;
    if (local_50 != 0) goto LAB_1801f0b18;
    bVar24 = (uint)uVar1 * 4 + 6 != (int)local_c0;
    uVar19 = (uint)local_68._6_2_;
    *puVar7 = uVar19;
    uVar5 = (int)local_d8;
  }
  else {
    uVar19 = *puVar8;
    bVar24 = true;
    uVar5 = 0;
  }
  uVar16 = (ulonglong)uVar19;
  uVar20 = uVar16 * 2 + 7 & 0xfffffffffffffff8;
  lVar12 = uVar16 * 0x20;
  lVar18 = (ulonglong)uVar3 * 0x10;
  uVar22 = (ulonglong)(uVar19 * uVar3);
  uVar21 = uVar22 * 4 + 7 & 0xfffffffffffffff8;
  if (puVar8 == (uint *)0x0) {
    local_d8 = CONCAT44(local_d8._4_4_,uVar5);
    *(ulonglong *)(*(longlong *)(param_1 + 0x408) + 0x20) =
         (ulonglong)(uVar19 * 5) + lVar12 + lVar18 + uVar20 + uVar21 + 0x20;
    local_d9 = bVar24;
    local_cc = (uint)uVar3;
    local_c0 = uVar21;
    local_b8 = param_2;
    local_a8 = uVar17;
    local_a0 = lVar12;
    local_98 = uVar20;
    puVar8 = (uint *)FUN_1801c9a4b(uVar17,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20),
                                   &local_50);
    iVar10 = local_50;
    if (local_50 != 0) goto LAB_1801f0b18;
    *(uint **)(*(longlong *)(param_1 + 0x408) + 0x18) = puVar8;
    *puVar8 = uVar19;
    puVar8[1] = 0xffffffff;
    puVar8[2] = local_cc;
    lVar12 = (longlong)puVar8 + local_98 + 0x20;
    *(longlong *)(puVar8 + 4) = lVar12;
    lVar12 = lVar12 + local_a0;
    *(longlong *)(puVar8 + 6) = lVar12;
    if (local_cc != 0) {
      lVar6 = 0;
      do {
        *(longlong *)(*(longlong *)(puVar8 + 6) + lVar6) = lVar12 + lVar18;
        lVar6 = lVar6 + 0x10;
        lVar12 = lVar12 + uVar16 * 4;
      } while (lVar18 != lVar6);
      lVar12 = *(longlong *)(puVar8 + 6);
    }
    if (uVar19 != 0) {
      lVar12 = lVar12 + lVar18 + local_c0;
      lVar6 = 0;
      do {
        *(longlong *)(*(longlong *)(puVar8 + 4) + lVar6) = lVar12;
        lVar12 = lVar12 + 5;
        lVar6 = lVar6 + 0x20;
      } while (local_a0 != lVar6);
    }
    local_50 = FUN_1801ce63e(uVar9,(int)local_d8 + (uint)local_68._4_2_);
    iVar10 = local_50;
    if (local_50 != 0) goto LAB_1801f0b18;
    local_d8 = uVar9;
    if (uVar19 != 0) {
      local_c8 = puVar8 + 8;
      plVar13 = *(longlong **)(puVar8 + 4);
      lVar12 = 0;
      do {
        local_50 = 0;
        local_50 = FUN_1801cf0cc(local_d8,&DAT_180337680,&local_7c);
        iVar10 = local_50;
        if (local_50 != 0) goto LAB_1801f0b18;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_7c;
        *(undefined4 *)(plVar13 + 1) = local_78;
        *(undefined4 *)((longlong)plVar13 + 0xc) = local_74;
        *(undefined4 *)(plVar13 + 2) = local_70;
        *(uint *)(plVar13 + 3) = (uint)local_6a;
        *(char *)*plVar13 = (char)((uint)local_7c >> 0x18);
        *(undefined1 *)(*plVar13 + 1) = *(undefined1 *)((longlong)plVar13 + 0x16);
        *(undefined1 *)(*plVar13 + 2) = *(undefined1 *)((longlong)plVar13 + 0x15);
        *(undefined1 *)(*plVar13 + 3) = *(undefined1 *)((longlong)plVar13 + 0x14);
        *(undefined1 *)(*plVar13 + 4) = 0;
        *(undefined2 *)((longlong)local_c8 + lVar12 * 2) = local_6c;
        iVar10 = *(int *)((longlong)plVar13 + 0xc);
        if ((iVar10 < (int)plVar13[1]) || ((int)plVar13[2] < iVar10)) {
          *(int *)(plVar13 + 1) = iVar10;
          *(int *)(plVar13 + 2) = iVar10;
        }
        plVar13 = plVar13 + 4;
        lVar12 = lVar12 + 1;
      } while (uVar19 != (uint)lVar12);
    }
    local_f0 = &local_50;
    local_f8 = 0;
    uVar9 = FUN_1801c9c3f(local_a8,4,0,uVar22);
    param_2 = local_b8;
    uVar17 = local_d8;
    *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x28) = uVar9;
    iVar10 = local_50;
    if (local_50 != 0) goto LAB_1801f0b18;
    if (uStack_60._2_2_ == 0) {
      uVar11 = 0;
    }
    else {
      if (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0') {
        uVar5 = FUN_1801ceb6f(local_d8);
        FUN_1801f3502(param_1);
        local_50 = FUN_1801ce63e(uVar17,uVar5);
        iVar10 = local_50;
        if (local_50 != 0) goto LAB_1801f0b18;
        uVar11 = 0;
        iVar10 = 0;
        if (uStack_60._2_2_ == 0) goto LAB_1801f0da4;
      }
      local_50 = iVar10;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x28);
      local_c8 = *(uint **)(puVar8 + 6);
      local_ac = (uint)(local_d9 ^ 1) * 2 + uVar19 * 4 + 4;
      uVar4 = 0;
      do {
        local_90 = (ulonglong)uVar4;
        local_88 = lVar12;
        local_50 = FUN_1801cec60(uVar17,local_ac);
        iVar10 = local_50;
        if (local_50 != 0) goto LAB_1801f0b18;
        uVar3 = FUN_1801cedcb(uVar17);
        local_c8[2] = (uint)uVar3;
        FUN_1801cedcb(uVar17);
        if (uVar19 != 0) {
          lVar12 = *(longlong *)local_c8;
          lVar6 = 0;
          do {
            uVar5 = FUN_1801cee0b(uVar17);
            *(undefined4 *)(lVar12 + lVar6 * 4) = uVar5;
            lVar6 = lVar6 + 1;
          } while (uVar19 != (uint)lVar6);
        }
        lVar12 = local_88;
        uVar11 = 0xffff;
        if (local_d9 == 0) {
          uVar3 = FUN_1801cedcb(local_d8);
          uVar11 = (uint)uVar3;
        }
        puVar7 = local_c8;
        local_c8[3] = uVar11;
        FUN_1801f37dd(param_1,uVar19,*(longlong *)local_c8,lVar12);
        uVar17 = local_d8;
        lVar12 = lVar12 + uVar16 * 4;
        FUN_1801ced84(local_d8);
        uVar4 = (int)local_90 + 1;
        local_c8 = puVar7 + 4;
        uVar11 = (uint)uStack_60._2_2_;
        param_2 = local_b8;
      } while (uVar4 < uStack_60._2_2_);
    }
LAB_1801f0da4:
    if (local_cc != uVar11) {
      lVar12 = *(longlong *)(param_1 + 0x2d0);
      cVar2 = (**(code **)(lVar12 + 0x160))(param_1,0x11,&local_7c,local_80);
      uVar5 = 0x11;
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(lVar12 + 0x160))(param_1,2,&local_7c,local_80);
        uVar5 = 2;
        param_2 = local_b8;
        if (cVar2 == '\0') goto LAB_1801f0e78;
      }
      cVar2 = (**(code **)(lVar12 + 0x160))(param_1,6,&local_7c,local_80);
      param_2 = local_b8;
      if (cVar2 != '\0') {
        *(uint *)(param_1 + 0x424) = local_cc;
        lVar12 = *(longlong *)(puVar8 + 6);
        lVar6 = (uStack_60 >> 0x10 & 0xffff) * 0x10;
        *(undefined4 *)(lVar12 + 8 + lVar6) = uVar5;
        *(undefined4 *)(lVar12 + 0xc + lVar6) = 6;
        if (uVar19 != 0) {
          lVar12 = *(longlong *)(lVar12 + lVar6);
          puVar14 = (undefined4 *)(*(longlong *)(puVar8 + 4) + 0xc);
          lVar6 = 0;
          do {
            *(undefined4 *)(lVar12 + lVar6 * 4) = *puVar14;
            lVar6 = lVar6 + 1;
            puVar14 = puVar14 + 8;
          } while (uVar19 != (uint)lVar6);
        }
      }
    }
LAB_1801f0e78:
    FUN_1801f3a81(param_1);
    lVar12 = local_a0;
    uVar17 = local_a8;
    uVar20 = local_98;
    uVar21 = local_c0;
  }
  iVar10 = local_50;
  if ((param_2 != (longlong *)0x0) &&
     (local_c0 = uVar21,
     lVar6 = FUN_1801cf9b9(uVar17,*(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x18),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20),&local_50),
     iVar10 = local_50, local_50 == 0)) {
    plVar13 = (longlong *)(lVar6 + uVar20 + 0x20);
    *(longlong **)(lVar6 + 0x10) = plVar13;
    lVar15 = lVar6 + uVar20 + lVar12 + 0x20;
    *(longlong *)(lVar6 + 0x18) = lVar15;
    if (*(int *)(lVar6 + 8) != 0) {
      lVar12 = lVar6 + lVar12 + lVar18 + uVar20 + 0x20;
      lVar15 = 0;
      uVar20 = 0;
      do {
        *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar15) = lVar12;
        uVar20 = uVar20 + 1;
        lVar15 = lVar15 + 0x10;
        lVar12 = lVar12 + uVar16 * 4;
      } while (uVar20 < *(uint *)(lVar6 + 8));
      plVar13 = *(longlong **)(lVar6 + 0x10);
      lVar15 = *(longlong *)(lVar6 + 0x18);
    }
    if (uVar19 != 0) {
      lVar12 = lVar15 + lVar18 + local_c0;
      do {
        *plVar13 = lVar12;
        iVar10 = *(int *)((longlong)plVar13 + 0x14);
        if (iVar10 < 0x736c6e74) {
          if (iVar10 == 0x6974616c) {
            pcVar23 = "Italic";
            goto LAB_1801f08ee;
          }
          if (iVar10 == 0x6f70737a) {
            pcVar23 = "OpticalSize";
            goto LAB_1801f08ee;
          }
        }
        else {
          if (iVar10 == 0x736c6e74) {
            pcVar23 = "Slant";
          }
          else {
            pcVar23 = "Weight";
            if (iVar10 != 0x77676874) {
              if (iVar10 != 0x77647468) goto LAB_1801f08f1;
              pcVar23 = "Width";
            }
          }
LAB_1801f08ee:
          *plVar13 = (longlong)pcVar23;
        }
LAB_1801f08f1:
        lVar12 = lVar12 + 5;
        plVar13 = plVar13 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    *param_2 = lVar6;
    iVar10 = 0;
  }
LAB_1801f0b18:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_118);
  }
  return iVar10;
}

