/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801896c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801896c6(longlong **param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  float fVar13;
  float local_1d8 [2];
  longlong local_1d0 [2];
  longlong local_1c0 [3];
  ulonglong local_1a8;
  longlong local_198;
  undefined1 local_190 [16];
  undefined1 local_180 [40];
  float local_158 [2];
  longlong local_150 [2];
  longlong local_140 [3];
  ulonglong local_128;
  ulonglong local_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8 [2];
  longlong local_e8 [3];
  ulonglong local_d0;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong **local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (8 < (ulonglong)((longlong)param_1[1] - (longlong)*param_1)) {
    local_c0 = param_2;
    local_50 = param_1;
    FUN_18005bbb8(local_1d8);
    fVar13 = (float)FUN_180283cd0((float)(ulonglong)
                                         ((longlong)local_50[1] - (longlong)*local_50 >> 3) /
                                  local_1d8[0]);
    FUN_18018a3cc(local_1d8,
                  (longlong)(fVar13 - _DAT_1802b0d70) & (longlong)fVar13 >> 0x3f | (longlong)fVar13)
    ;
    plVar12 = local_50[1];
    for (plVar9 = *local_50; plVar9 != plVar12; plVar9 = plVar9 + 1) {
      local_198 = *plVar9;
      FUN_18018aa20(local_1d8,local_158,&local_198);
    }
    FUN_18018b324(local_158);
    fVar13 = (float)FUN_180283cd0((float)(ulonglong)
                                         ((longlong)local_50[1] - (longlong)*local_50 >> 3) /
                                  local_158[0]);
    FUN_18018b774(local_158,
                  (longlong)(fVar13 - _DAT_1802b0d70) & (longlong)fVar13 >> 0x3f | (longlong)fVar13)
    ;
    FUN_180060822(&local_198);
    fVar13 = (float)FUN_180283cd0((float)(ulonglong)
                                         ((longlong)local_50[1] - (longlong)*local_50 >> 3) /
                                  (float)local_198);
    FUN_18018a5fc(&local_198,
                  (longlong)(fVar13 - _DAT_1802b0d70) & (longlong)fVar13 >> 0x3f | (longlong)fVar13)
    ;
    plVar12 = local_50[1];
    for (plVar9 = *local_50; plVar9 != plVar12; plVar9 = plVar9 + 1) {
      local_b8 = (longlong *)*plVar9;
      local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
      FUN_18018b378(&local_198,&local_100,&local_b8,&local_68);
    }
    plVar12 = local_50[1];
    for (plVar9 = *local_50; plVar9 != plVar12; plVar9 = plVar9 + 1) {
      local_b8 = (longlong *)*plVar9;
      local_68 = (longlong *)local_b8[0x81];
      if (local_68 != (longlong *)0x0) {
        uVar5 = FUN_1800dbb7b(&local_68);
        lVar6 = (uVar5 & local_1a8) * 0x10;
        lVar8 = *(longlong *)(local_1c0[0] + 8 + lVar6);
        if (lVar8 != local_1d0[0]) {
          if (local_68 != *(longlong **)(lVar8 + 0x10)) {
            do {
              if (lVar8 == *(longlong *)(local_1c0[0] + lVar6)) goto LAB_1801899dd;
              lVar8 = *(longlong *)(lVar8 + 8);
            } while (local_68 != *(longlong **)(lVar8 + 0x10));
          }
          FUN_18018bbc0(local_158,&local_100,&local_68);
          plVar2 = *(longlong **)(local_100 + 0x20);
          if (plVar2 == *(longlong **)(local_100 + 0x28)) {
            FUN_180052bde(local_100 + 0x18,plVar2,&local_b8);
          }
          else {
            *plVar2 = (longlong)local_b8;
            *(longlong *)(local_100 + 0x20) = *(longlong *)(local_100 + 0x20) + 8;
          }
          FUN_18018bf72(&local_198,&local_100,&local_b8);
          *(int *)(local_100 + 0x18) = *(int *)(local_100 + 0x18) + 1;
        }
      }
LAB_1801899dd:
    }
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_a8 = 0;
    local_a0 = local_c0;
    plVar12 = local_50[1];
    for (plVar9 = *local_50; plVar9 != plVar12; plVar9 = plVar9 + 1) {
      local_100 = *plVar9;
      piVar7 = (int *)FUN_18018a34e(&local_198,&local_100);
      if (*piVar7 == 0) {
        FUN_18018b4fa(&local_b8,&local_100);
      }
    }
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    FUN_18006451c(&local_68,(longlong)local_50[1] - (longlong)*local_50 >> 3);
code_r0x000180189a93:
    uVar3 = local_a0;
    plVar9 = local_b8;
    if (local_b8 != plStack_b0) {
      local_90 = *local_b8;
      if (8 < (longlong)plStack_b0 - (longlong)local_b8) {
        local_70 = plStack_b0[-1];
        plStack_b0[-1] = local_90;
        local_118 = (longlong)plStack_b0 + (-8 - (longlong)local_b8);
        local_108 = (longlong)local_118 >> 3;
        local_110 = local_108 - 1;
        uVar5 = (longlong)local_110 >> 1;
        if ((longlong)uVar5 < 1) {
          uVar10 = 0;
        }
        else {
          uVar11 = 0;
          do {
            local_100 = plVar9[uVar11 * 2 + 1];
            local_88 = plVar9[uVar11 * 2 + 2];
            piVar7 = (int *)FUN_18018a34e(uVar3,&local_88);
            iVar1 = *piVar7;
            piVar7 = (int *)FUN_18018a34e(uVar3,&local_100);
            uVar10 = uVar11 * 2 | 1;
            if (iVar1 <= *piVar7) {
              uVar10 = uVar11 * 2 + 2;
            }
            plVar9[uVar11] = plVar9[uVar10];
            uVar11 = uVar10;
          } while ((longlong)uVar10 < (longlong)uVar5);
        }
        if (((local_118 & 8) == 0) && (uVar10 == uVar5)) {
          plVar9[uVar5] = plVar9[local_108 + -1];
          uVar10 = local_110;
        }
        FUN_18018c17f(plVar9,uVar10,&local_70,uVar3);
      }
      plStack_b0 = plStack_b0 + -1;
      if (plStack_60 == local_58) {
        FUN_180052bde(&local_68,plStack_60,&local_90);
      }
      else {
        *plStack_60 = local_90;
        plStack_60 = plStack_60 + 1;
      }
      uVar5 = FUN_1800dbb7b(&local_90);
      lVar6 = (uVar5 & local_128) * 0x10;
      lVar8 = *(longlong *)(local_140[0] + 8 + lVar6);
      if (lVar8 != local_150[0]) {
        if (local_90 != *(longlong *)(lVar8 + 0x10)) {
          do {
            if (lVar8 == *(longlong *)(local_140[0] + lVar6)) goto code_r0x000180189a93;
            lVar8 = *(longlong *)(lVar8 + 8);
          } while (local_90 != *(longlong *)(lVar8 + 0x10));
        }
        if (lVar8 != local_150[0]) {
          plVar12 = *(longlong **)(lVar8 + 0x20);
          for (plVar9 = *(longlong **)(lVar8 + 0x18); plVar9 != plVar12; plVar9 = plVar9 + 1) {
            local_100 = *plVar9;
            piVar7 = (int *)FUN_18018a34e(&local_198,&local_100);
            *piVar7 = *piVar7 + -1;
            if (*piVar7 == 0) {
              FUN_18018b4fa(&local_b8,&local_100);
            }
          }
        }
      }
      goto code_r0x000180189a93;
    }
    if ((longlong)plStack_60 - (longlong)local_68 != (longlong)local_50[1] - (longlong)*local_50) {
      FUN_18005bbb8(&local_100);
      fVar13 = (float)FUN_180283cd0((float)(ulonglong)
                                           ((longlong)plStack_60 - (longlong)local_68 >> 3) /
                                    (float)local_100);
      FUN_18018a3cc(&local_100,
                    (longlong)(fVar13 - _DAT_1802b0d70) & (longlong)fVar13 >> 0x3f |
                    (longlong)fVar13);
      plVar9 = plStack_60;
      for (plVar12 = local_68; plVar12 != plVar9; plVar12 = plVar12 + 1) {
        local_70 = *plVar12;
        FUN_18018aa20(&local_100,&local_88,&local_70);
      }
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      local_78 = (longlong *)0x0;
      FUN_18006451c(&local_88,
                    ((longlong)local_50[1] - (longlong)*local_50 >> 3) -
                    ((longlong)plStack_60 - (longlong)local_68 >> 3));
      plVar12 = local_50[1];
      for (plVar9 = *local_50; plVar9 != plVar12; plVar9 = plVar9 + 1) {
        local_70 = *plVar9;
        uVar5 = FUN_1800dbb7b(&local_70);
        lVar6 = (uVar5 & local_d0) * 0x10;
        lVar8 = *(longlong *)(local_e8[0] + 8 + lVar6);
        if (lVar8 == local_f8[0]) {
code_r0x000180189e21:
          if (plStack_80 == local_78) {
            FUN_180052bde(&local_88,plStack_80,&local_70);
          }
          else {
            *plStack_80 = local_70;
            plStack_80 = plStack_80 + 1;
          }
        }
        else if (local_70 != *(longlong *)(lVar8 + 0x10)) {
          do {
            if (lVar8 == *(longlong *)(local_e8[0] + lVar6)) goto code_r0x000180189e21;
            lVar8 = *(longlong *)(lVar8 + 8);
          } while (local_70 != *(longlong *)(lVar8 + 0x10));
        }
      }
      FUN_18018c23a(local_88,plStack_80,(longlong)plStack_80 - local_88 >> 3,local_c0);
      FUN_1800bbf82(&local_68,plStack_60,local_88,(longlong)plStack_80 - local_88 >> 3);
      FUN_180004cea(&local_88);
      FUN_180004cea(local_e8);
      FUN_18006a5ac(local_f8);
    }
    pplVar4 = local_50;
    if (local_50 != &local_68) {
      FUN_180004cea(local_50);
      *pplVar4 = local_68;
      pplVar4[1] = plStack_60;
      pplVar4[2] = local_58;
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
    }
    FUN_180004cea(&local_68);
    FUN_180004cea(&local_b8);
    FUN_180004cea(local_180);
    FUN_1800609dc(local_190);
    FUN_180004cea(local_140);
    FUN_18018b732(local_150,local_150[0]);
    thunk_FUN_1802464a0(local_150[0],0x30);
    FUN_180004cea(local_1c0);
    FUN_18006a5ac(local_1d0);
  }
  return;
}

