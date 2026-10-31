/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005b1f6 */

int FUN_14005b1f6(uint *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_118 [44];
  uint local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_c8 [4];
  int local_c4;
  undefined1 local_c0 [4];
  uint local_bc;
  int local_b8;
  uint local_b4;
  undefined1 local_b0 [12];
  ushort local_a4;
  ushort local_a2;
  undefined1 local_a0 [12];
  ushort local_94;
  ushort local_92;
  undefined1 local_90 [12];
  ushort local_84;
  ushort local_82;
  int local_80;
  short local_7c;
  ushort local_7a;
  short local_78;
  short local_76;
  int local_74;
  short local_6a;
  ushort local_68;
  ushort local_66;
  short local_64;
  ushort local_62;
  int local_60;
  undefined1 local_5c [8];
  int local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_118;
  lVar1 = *(longlong *)(param_1 + 0x26);
  plVar2 = *(longlong **)(param_1 + 0x28);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar13 = -param_2;
  if ((int)-param_2 < 0) {
    uVar13 = param_2;
  }
  uVar8 = FUN_140020a41((longlong)plVar2,0);
  local_60 = (int)uVar8;
  if ((local_60 != 0) || (iVar6 = FUN_1400214cf(plVar2,0x1400f8a30,(longlong)&local_64), iVar6 != 0)
     ) {
    local_60 = 2;
    iVar6 = local_60;
    goto LAB_14005b27e;
  }
  local_60 = 2;
  if (local_64 == 0x5a4d) {
    uVar8 = FUN_140020a41((longlong)plVar2,(uint)local_62);
    local_60 = (int)uVar8;
    iVar6 = local_60;
    if ((local_60 != 0) ||
       (iVar6 = FUN_1400214cf(plVar2,0x1400f8a50,(longlong)&local_6a), iVar6 != 0))
    goto LAB_14005b27e;
    uVar13 = uVar13 & 0xffff;
    local_60 = 2;
    if (local_6a == 0x4550) {
      uVar8 = FUN_140020a41((longlong)plVar2,(uint)local_62);
      local_60 = (int)uVar8;
      iVar6 = local_60;
      if ((local_60 == 0) &&
         (iVar6 = FUN_1400214cf(plVar2,0x1400f8a70,(longlong)&local_80), iVar6 == 0)) {
        if ((local_80 == 0x4550) &&
           ((((local_7c == 0x14c && (local_78 == 0xe0)) && (local_76 == 0x10b)) &&
            (*param_1 = 0, local_7a != 0)))) {
          uVar3 = 0;
          do {
            local_60 = 0;
            local_60 = FUN_1400214cf(plVar2,0x1400f8ab0,(longlong)local_5c);
            iVar6 = local_60;
            if (local_60 != 0) goto LAB_14005b27e;
            if (local_74 == local_54) {
              uVar8 = FUN_140020a41((longlong)plVar2,local_4c);
              local_60 = (int)uVar8;
              iVar6 = local_60;
              if ((local_60 != 0) ||
                 (local_60 = FUN_1400214cf(plVar2,0x1400f8ad0,(longlong)local_90), iVar6 = local_60,
                 local_60 != 0)) goto LAB_14005b27e;
              if (local_82 == 0 && local_84 == 0) goto LAB_14005b9d0;
              local_e0 = (ulonglong)local_4c;
              local_e8 = (ulonglong)(local_4c + 0x10);
              local_ec = 0;
              uVar12 = 0;
              local_60 = 0;
              goto LAB_14005b6e8;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < local_7a);
        }
LAB_14005b49b:
        local_60 = 3;
        iVar6 = local_60;
      }
      goto LAB_14005b27e;
    }
    if (local_6a == 0x454e) {
      uVar8 = FUN_140020a41((longlong)plVar2,(uint)local_68 + (uint)local_62);
      local_60 = (int)uVar8;
      iVar6 = local_60;
      if ((local_60 != 0) ||
         (local_60 = FUN_140021063(plVar2,(uint)local_66 - (uint)local_68), iVar6 = local_60,
         local_60 != 0)) goto LAB_14005b27e;
      uVar3 = FUN_1400211f0((longlong)plVar2);
      if (0x10 < uVar3) {
        local_60 = 3;
        FUN_140021187(plVar2);
        iVar6 = local_60;
        goto LAB_14005b27e;
      }
      sVar4 = FUN_1400211f0((longlong)plVar2);
      while (sVar4 != 0) {
        uVar5 = FUN_1400211f0((longlong)plVar2);
        if (sVar4 == -0x7ff8) {
          iVar6 = FUN_140020f72((longlong)plVar2);
          iVar11 = iVar6 + ((int)plVar2[7] - (int)plVar2[8]) + 4;
          goto LAB_14005b552;
        }
        plVar2[7] = plVar2[7] + (ulonglong)uVar5 * 0xc + 4;
        sVar4 = FUN_1400211f0((longlong)plVar2);
      }
      iVar11 = 0;
      uVar5 = 0;
LAB_14005b552:
      FUN_140021187(plVar2);
      iVar6 = 3;
      if ((((uVar5 == 0) || (iVar11 == 0)) || (*(uint *)(plVar2 + 1) < (uint)uVar5 * 0x76)) ||
         ((*param_1 = (uint)uVar5, iVar6 = local_60, (int)param_2 < 0 ||
          (iVar6 = 6, uVar5 <= uVar13)))) goto LAB_14005b27e;
      pauVar9 = FUN_14001c423(lVar1,0xb8,&local_60);
      *(undefined1 (**) [32])(param_1 + 0x36) = pauVar9;
      iVar6 = local_60;
      if (local_60 != 0) goto LAB_14005b27e;
      uVar8 = FUN_140020a41((longlong)plVar2,iVar11 + uVar13 * 0xc);
      local_60 = (int)uVar8;
      if ((local_60 != 0) || (local_60 = FUN_140021063(plVar2,0xc), local_60 != 0))
      goto LAB_14005b4c5;
      uVar5 = FUN_1400211f0((longlong)plVar2);
      **(int **)(param_1 + 0x36) = (uint)uVar5 << ((byte)uVar3 & 0x1f);
      uVar5 = FUN_1400211f0((longlong)plVar2);
      *(uint *)(*(longlong *)(param_1 + 0x36) + 0xa8) = (uint)uVar5 << ((byte)uVar3 & 0x1f);
      plVar2[7] = plVar2[7] + 8;
      FUN_140021187(plVar2);
      uVar10 = FUN_14005b9e8(*(uint **)(param_1 + 0x36),plVar2);
      local_60 = (int)uVar10;
      bVar16 = local_60 == 0;
    }
    else {
      bVar16 = false;
    }
    goto LAB_14005b4ad;
  }
  goto LAB_14005b4c5;
  while( true ) {
    if (-1 < (int)local_b4) goto LAB_14005b49b;
    local_b4 = local_b4 & 0x7fffffff;
    uVar12 = local_b4 + local_4c;
    uVar8 = FUN_140020a41((longlong)plVar2,uVar12);
    local_60 = (int)uVar8;
    iVar6 = local_60;
    if ((local_60 != 0) ||
       (local_60 = FUN_1400214cf(plVar2,0x1400f8ad0,(longlong)local_a0), iVar6 = local_60,
       local_60 != 0)) goto LAB_14005b27e;
    if (local_92 != 0 || local_94 != 0) {
      uVar14 = 0;
      uVar15 = 0;
      local_60 = 0;
      do {
        uVar8 = FUN_140020a41((longlong)plVar2,uVar12 + 0x10 + uVar15 * 8);
        local_60 = (int)uVar8;
        iVar6 = local_60;
        if ((local_60 != 0) ||
           (local_60 = FUN_1400214cf(plVar2,0x1400f8af0,(longlong)local_c0), iVar6 = local_60,
           local_60 != 0)) goto LAB_14005b27e;
        if (-1 < (int)local_bc) goto LAB_14005b49b;
        local_bc = local_bc & 0x7fffffff;
        uVar15 = local_bc + local_4c;
        uVar8 = FUN_140020a41((longlong)plVar2,uVar15);
        local_60 = (int)uVar8;
        iVar6 = local_60;
        if ((local_60 != 0) ||
           (local_60 = FUN_1400214cf(plVar2,0x1400f8ad0,(longlong)local_b0), iVar6 = local_60,
           local_60 != 0)) goto LAB_14005b27e;
        if (local_a2 != 0 || local_a4 != 0) {
          uVar7 = 0;
          uVar3 = 1;
          local_60 = 0;
          do {
            uVar8 = FUN_140020a41((longlong)plVar2,uVar15 + 0x10 + uVar7 * 8);
            local_60 = (int)uVar8;
            iVar6 = local_60;
            if ((local_60 != 0) ||
               (local_60 = FUN_1400214cf(plVar2,0x1400f8af0,(longlong)local_c8), iVar6 = local_60,
               local_60 != 0)) goto LAB_14005b27e;
            if ((int)local_bc < 0) goto LAB_14005b49b;
            if (local_b8 == 8) {
              uVar8 = FUN_140020a41((longlong)plVar2,local_c4 + (int)local_e0);
              local_60 = (int)uVar8;
              iVar6 = local_60;
              if ((local_60 != 0) ||
                 (local_60 = FUN_1400214cf(plVar2,0x1400f8b00,(longlong)&local_d8), iVar6 = local_60
                 , local_60 != 0)) goto LAB_14005b27e;
              uVar7 = *param_1;
              if (uVar13 == uVar7) {
                pauVar9 = FUN_14001c423(lVar1,0xb8,&local_60);
                *(undefined1 (**) [32])(param_1 + 0x36) = pauVar9;
                iVar6 = local_60;
                if (local_60 != 0) goto LAB_14005b27e;
                *(uint *)*pauVar9 = (local_d8 + local_4c) - local_54;
                *(undefined4 *)(*(longlong *)(param_1 + 0x36) + 0xa8) = local_d4;
                uVar10 = FUN_14005b9e8(*(uint **)(param_1 + 0x36),plVar2);
                local_60 = (int)uVar10;
                if (local_60 != 0) goto LAB_14005b4c5;
                uVar7 = *param_1;
              }
              *param_1 = uVar7 + 1;
            }
            uVar7 = (uint)uVar3;
            uVar3 = uVar3 + 1;
          } while (uVar7 < (uint)local_a2 + (uint)local_a4);
        }
        uVar14 = uVar14 + 1;
        uVar15 = uVar14 & 0xffff;
      } while (uVar15 < (uint)local_92 + (uint)local_94);
    }
    local_ec = local_ec + 1;
    uVar12 = local_ec & 0xffff;
    if ((uint)local_82 + (uint)local_84 <= uVar12) break;
LAB_14005b6e8:
    uVar8 = FUN_140020a41((longlong)plVar2,(int)local_e8 + uVar12 * 8);
    local_60 = (int)uVar8;
    iVar6 = local_60;
    if ((local_60 != 0) ||
       (local_60 = FUN_1400214cf(plVar2,0x1400f8af0,(longlong)&local_b8), iVar6 = local_60,
       local_60 != 0)) goto LAB_14005b27e;
  }
LAB_14005b9d0:
  bVar16 = true;
LAB_14005b4ad:
  if (*param_1 == 0) {
    iVar6 = 3;
    goto LAB_14005b27e;
  }
  iVar6 = 6;
  if (((int)*param_1 <= (int)uVar13) || (iVar6 = local_60, bVar16)) goto LAB_14005b27e;
LAB_14005b4c5:
  FUN_14005baae((longlong)param_1);
  iVar6 = local_60;
LAB_14005b27e:
  local_60 = iVar6;
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_118)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_118);
}

