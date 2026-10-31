/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400136b0 */

longlong *
FUN_1400136b0(longlong *param_1,undefined8 *param_2,uint param_3,int *param_4,longlong param_5)

{
  byte bVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  longlong ******pppppplVar9;
  longlong ******pppppplVar10;
  longlong ******pppppplVar11;
  bool bVar12;
  char local_178 [65];
  undefined1 local_137 [15];
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  int local_11c;
  int local_118;
  char *local_108 [2];
  longlong local_f8;
  char *local_f0;
  undefined *local_e8;
  ulonglong uStack_e0;
  longlong *****local_d0;
  int *piStack_c8;
  undefined **local_c0;
  char *pcStack_b8;
  int *local_b0;
  int *local_a8;
  char **local_a0;
  longlong *****local_98;
  longlong *local_90;
  char local_88 [8];
  longlong *local_80;
  longlong *****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  int local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_f8 = param_5;
  bVar1 = *(byte *)(param_4 + 2);
  if (bVar1 == 99) {
    *(undefined1 *)((longlong)param_4 + 0xb) = 0;
    local_118 = param_4[4];
    local_128 = *(undefined8 *)param_4;
    local_120 = (undefined2)param_4[2];
    local_11e = *(undefined1 *)((longlong)param_4 + 10);
    local_11d = *(undefined1 *)((longlong)param_4 + 0xb);
    local_11c = param_4[3];
    FUN_140010945(param_1,param_2,param_3 & 0xff,(int *)&local_128,param_5);
    return param_1;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(undefined1 *)((longlong)param_4 + 10) = 2;
  }
  iVar8 = 10;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
LAB_14001377d:
      iVar8 = 2;
    }
    else if (bVar1 == 0x58) goto LAB_140013776;
  }
  else if (bVar1 == 0x78) {
LAB_140013776:
    iVar8 = 0x10;
  }
  else if (bVar1 == 0x6f) {
    iVar8 = 8;
  }
  else if (bVar1 == 0x62) goto LAB_14001377d;
  pcVar7 = local_178;
  FUN_140013bdd((longlong *)local_108,(undefined8 *)pcVar7,(longlong)local_137,(ulonglong)param_3,
                iVar8);
  pcVar2 = local_108[0];
  local_f0 = pcVar7;
  iVar8 = (int)local_108[0] - (int)pcVar7;
  local_4c[0] = iVar8;
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    iVar8 = iVar8 + 1;
    local_4c[0] = iVar8;
  }
  bVar1 = *(byte *)(param_4 + 2);
  local_4c[0] = iVar8;
  if (pcVar7 != local_108[0] && bVar1 == 0x58) {
    do {
      if ((byte)(*pcVar7 + 0x9fU) < 0x1a) {
        *pcVar7 = *pcVar7 + -0x20;
      }
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != pcVar2);
  }
  local_e8 = (undefined *)0x0;
  uStack_e0 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\x01') goto code_r0x000140013883;
  uStack_e0 = 2;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
      local_e8 = &DAT_14011bc16;
    }
    else if (bVar1 == 0x58) {
      local_e8 = &DAT_14011b813;
    }
    else {
LAB_14001386b:
      uStack_e0 = 0;
      local_e8 = (undefined *)0x0;
    }
  }
  else if (bVar1 == 0x62) {
    local_e8 = &DAT_14011b715;
  }
  else if (bVar1 == 0x6f) {
    local_e8 = (undefined *)0x0;
    bVar12 = (char)param_3 != '\0';
    uStack_e0 = (ulonglong)bVar12;
    if (bVar12) {
      local_e8 = &DAT_14011bdb3;
    }
  }
  else {
    if (bVar1 != 0x78) goto LAB_14001386b;
    local_e8 = &DAT_140119f08;
  }
  iVar8 = iVar8 + (int)uStack_e0;
  local_4c[0] = iVar8;
code_r0x000140013883:
  local_50 = 0;
  local_78 = (longlong *****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0xf;
  if ((char)param_4[3] == '\x01') {
    if (param_5 == 0) {
      local_80 = FUN_140086860('\x01');
    }
    else {
      local_80 = *(longlong **)(param_5 + 8);
      (**(code **)(*local_80 + 8))(local_80);
    }
    plVar3 = FUN_140009dcb((longlong)local_88);
    (**(code **)(*plVar3 + 0x28))(plVar3);
    FUN_1400049c6((longlong *)&local_78);
    local_68 = (longlong)local_c0;
    uStack_60 = (ulonglong)pcStack_b8;
    local_78 = local_d0;
    uStack_70 = piStack_c8;
    local_c0 = (undefined **)0x0;
    pcStack_b8 = (char *)0xf;
    local_d0 = (longlong *****)((ulonglong)local_d0 & 0xffffffffffffff00);
    FUN_1400021ea((longlong *)&local_d0);
    if ((local_80 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*local_80 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4);
    }
    pppppplVar9 = &local_78;
    if (0xf < uStack_60) {
      pppppplVar9 = (longlong ******)local_78;
    }
    local_50 = 0;
    if (local_68 != 0) {
      uVar5 = (longlong)local_108[0] - (longlong)local_178;
      uVar6 = (ulonglong)*(char *)pppppplVar9;
      local_50 = 0;
      if (uVar6 < uVar5) {
        local_50 = 0;
        pppppplVar10 = pppppplVar9;
        do {
          uVar5 = uVar5 - uVar6;
          local_50 = local_50 + 1;
          pppppplVar11 = (longlong ******)((longlong)pppppplVar10 + 1);
          if ((longlong ******)((longlong)pppppplVar10 + 1) ==
              (longlong ******)(local_68 + (longlong)pppppplVar9)) {
            pppppplVar11 = pppppplVar10;
          }
          uVar6 = (ulonglong)*(char *)pppppplVar11;
          pppppplVar10 = pppppplVar11;
        } while (uVar6 < uVar5);
      }
    }
    iVar8 = iVar8 + local_50;
    local_4c[0] = iVar8;
  }
  if (*(char *)((longlong)param_4 + 0xd) == '\x01') {
    local_88[0] = *(char *)((longlong)param_4 + 9) == '\0';
  }
  else {
    local_88[0] = false;
  }
  pcStack_b8 = local_88;
  local_c0 = &local_e8;
  local_b0 = local_4c;
  local_a8 = &local_50;
  local_a0 = &local_f0;
  local_98 = (longlong *****)&local_78;
  local_90 = &local_f8;
  piStack_c8 = param_4;
  if ((bool)local_88[0] == false) {
    FUN_140011432(param_1,param_2,iVar8,param_4,'\x02',&local_d0);
  }
  else {
    FUN_140011278(&local_d0,param_1,param_2);
  }
  FUN_1400021ea((longlong *)&local_78);
  return param_1;
}

