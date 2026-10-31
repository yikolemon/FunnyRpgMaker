/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b5f3c */

undefined8 * FUN_1800b5f3c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong **pplVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_80 = param_1;
  if (*param_2 == param_2[1]) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = (longlong *)0x0;
    lVar11 = param_2[1] - *param_2 >> 4;
    uVar16 = lVar11 * -0x5555555555555555;
    if (uVar16 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    uVar12 = FUN_1800013e0(lVar11 * 0x5555555555555560);
    local_a8 = &local_78;
    uStack_a0 = (longlong **)uVar12;
    local_98 = uVar16;
    FUN_1800b6937(local_78,plStack_70,uVar12);
    uStack_a0 = (longlong **)0x0;
    FUN_1800b6a08(&local_78,uVar12,0,uVar16);
    FUN_18001bbb4(&local_a8);
    lVar1 = param_2[1];
    for (lVar11 = *param_2; lVar11 != lVar1; lVar11 = lVar11 + 0x30) {
      FUN_1800b6563(&local_c8,lVar11 + 0x10);
      plVar9 = plStack_70;
      lVar18 = local_b8;
      if (plStack_70 == local_68) {
        lVar18 = (longlong)plStack_70 - (longlong)local_78;
        uVar13 = lVar18 >> 5;
        uVar16 = uVar13 + 1;
        uVar19 = (uVar13 >> 1) + uVar13;
        if (uVar19 <= uVar16) {
          uVar19 = uVar16;
        }
        if (0x7ffffffffffffff - (uVar13 >> 1) < uVar13) {
          uVar19 = 0x7ffffffffffffff;
        }
        if (uVar19 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180001427();
        }
        plVar14 = (longlong *)FUN_1800013e0(uVar19 << 5);
        lVar7 = local_b8;
        lVar17 = (longlong)plVar14 + lVar18 + 0x20;
        local_a8 = &local_78;
        local_90 = (longlong *)((longlong)plVar14 + lVar18);
        *local_90 = lVar11;
        local_d0 = local_90 + 1;
        local_b8 = 0;
        uVar3 = (undefined4)local_c8;
        uVar4 = local_c8._4_4_;
        uVar5 = (undefined4)uStack_c0;
        uVar6 = uStack_c0._4_4_;
        local_c8 = (longlong **)0x0;
        uStack_c0 = 0;
        *(undefined4 *)(local_90 + 1) = uVar3;
        *(undefined4 *)((longlong)local_90 + 0xc) = uVar4;
        *(undefined4 *)(local_90 + 2) = uVar5;
        *(undefined4 *)((longlong)local_90 + 0x14) = uVar6;
        local_90[3] = lVar7;
        uStack_a0 = (longlong **)plVar14;
        local_98 = uVar19;
        local_88 = lVar17;
        if (plVar9 == plStack_70) {
          FUN_1800b6937(local_78,plStack_70,plVar14);
        }
        else {
          FUN_1800b6937(local_78,plVar9,plVar14);
          local_90 = plVar14;
          FUN_1800b6937(plVar9,plStack_70,lVar17);
        }
        uStack_a0 = (longlong **)0x0;
        FUN_1800b6a08(&local_78,plVar14,uVar16,uVar19);
        FUN_1800b6aec(&local_a8);
      }
      else {
        *plStack_70 = lVar11;
        local_d0 = plStack_70 + 1;
        local_b8 = 0;
        uVar3 = (undefined4)local_c8;
        uVar4 = local_c8._4_4_;
        uVar5 = (undefined4)uStack_c0;
        uVar6 = uStack_c0._4_4_;
        local_c8 = (longlong **)0x0;
        uStack_c0 = 0;
        *(undefined4 *)(plStack_70 + 1) = uVar3;
        *(undefined4 *)((longlong)plStack_70 + 0xc) = uVar4;
        *(undefined4 *)(plStack_70 + 2) = uVar5;
        *(undefined4 *)((longlong)plStack_70 + 0x14) = uVar6;
        plStack_70[3] = lVar18;
        plStack_70 = plStack_70 + 4;
      }
      FUN_180004cea(&local_c8);
    }
    FUN_1800b66ce(&local_a8,*(undefined8 *)*local_78,((undefined8 *)*local_78)[1],local_78 + 1);
    uVar16 = local_98;
    pplVar8 = uStack_a0;
    if ((longlong)plStack_70 - (longlong)local_78 == 0x20) {
      local_98 = 0;
      uVar3 = (undefined4)local_a8;
      uVar4 = local_a8._4_4_;
      uVar5 = (undefined4)uStack_a0;
      uVar6 = uStack_a0._4_4_;
      local_a8 = (longlong **)0x0;
      uStack_a0 = (longlong **)0x0;
      *(undefined4 *)local_80 = uVar3;
      *(undefined4 *)((longlong)local_80 + 4) = uVar4;
      *(undefined4 *)(local_80 + 1) = uVar5;
      *(undefined4 *)((longlong)local_80 + 0xc) = uVar6;
      local_80[2] = uVar16;
    }
    else {
      *local_80 = 0;
      local_80[1] = 0;
      local_80[2] = 0;
      local_c8 = &local_78;
      for (pplVar15 = local_a8; pplVar15 != pplVar8; pplVar15 = pplVar15 + 1) {
        local_d8 = *pplVar15;
        cVar10 = FUN_1800b67c2(&local_c8,&local_c8,local_d8,1);
        if (cVar10 != '\0') {
          puVar2 = (undefined8 *)local_80[1];
          if (puVar2 == (undefined8 *)local_80[2]) {
            FUN_180052bde(local_80,puVar2,&local_d8);
          }
          else {
            *puVar2 = local_d8;
            local_80[1] = local_80[1] + 8;
          }
        }
      }
    }
    FUN_180004cea(&local_a8);
    FUN_1800b68d8(&local_78);
  }
  return local_80;
}

