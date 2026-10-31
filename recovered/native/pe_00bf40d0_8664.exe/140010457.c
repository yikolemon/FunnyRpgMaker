/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140010457 */

longlong *
FUN_140010457(longlong *param_1,undefined8 *param_2,uint param_3,int *param_4,longlong param_5)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong ******pppppplVar10;
  longlong ******pppppplVar11;
  longlong ******pppppplVar12;
  int iVar13;
  char local_178;
  char local_177 [64];
  undefined8 local_137;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  int local_11c;
  int local_118;
  char *local_110 [2];
  longlong local_100;
  longlong *****local_f8;
  int *piStack_f0;
  uint *local_e8;
  undefined **ppuStack_e0;
  char *local_d8;
  int *local_d0;
  int *local_c8;
  char **local_c0;
  longlong *****local_b8;
  longlong *local_b0;
  undefined *local_a8;
  ulonglong uStack_a0;
  char local_98 [8];
  longlong *local_90;
  longlong *****local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  char *local_60;
  uint local_54;
  int local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_100 = param_5;
  bVar1 = *(byte *)(param_4 + 2);
  local_54 = param_3;
  if (bVar1 == 99) {
    if (param_3 < 0x10000) {
      *(undefined1 *)((longlong)param_4 + 0xb) = 0;
      local_118 = param_4[4];
      local_128 = *(undefined8 *)param_4;
      local_120 = (undefined2)param_4[2];
      local_11e = *(undefined1 *)((longlong)param_4 + 10);
      local_11d = *(undefined1 *)((longlong)param_4 + 0xb);
      local_11c = param_4[3];
      FUN_140010945(param_1,param_2,param_3,(int *)&local_128,param_5);
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011a3e2);
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(undefined1 *)((longlong)param_4 + 10) = 2;
  }
  uVar4 = 10;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
LAB_140010537:
      uVar4 = 2;
    }
    else if (bVar1 == 0x58) goto LAB_140010530;
  }
  else if (bVar1 == 0x78) {
LAB_140010530:
    uVar4 = 0x10;
  }
  else if (bVar1 == 0x6f) {
    uVar4 = 8;
  }
  else if (bVar1 == 0x62) goto LAB_140010537;
  FUN_14000bf14(local_110,(undefined8 *)&local_178,&local_137,(ulonglong)param_3,uVar4);
  pcVar2 = local_110[0];
  local_60 = &local_178;
  local_4c[0] = (int)local_110[0] - (int)&local_178;
  if ((int)param_3 < 0) {
    local_60 = local_177;
  }
  else if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_4c[0] = local_4c[0] + 1;
  }
  iVar13 = local_4c[0];
  pcVar3 = local_60;
  bVar1 = *(byte *)(param_4 + 2);
  pcVar7 = local_60;
  if (local_60 != local_110[0] && bVar1 == 0x58) {
    do {
      if ((byte)(*pcVar7 + 0x9fU) < 0x1a) {
        *pcVar7 = *pcVar7 + -0x20;
      }
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != pcVar2);
  }
  local_a8 = (undefined *)0x0;
  uStack_a0 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\x01') goto code_r0x00014001065e;
  uStack_a0 = 2;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
      local_a8 = &DAT_14011bc16;
    }
    else if (bVar1 == 0x58) {
      local_a8 = &DAT_14011b813;
    }
    else {
LAB_140010640:
      uStack_a0 = 0;
      local_a8 = (undefined *)0x0;
    }
  }
  else if (bVar1 == 0x62) {
    local_a8 = &DAT_14011b715;
  }
  else if (bVar1 == 0x6f) {
    local_a8 = (undefined *)0x0;
    uStack_a0 = (ulonglong)(param_3 != 0);
    if (param_3 != 0) {
      local_a8 = &DAT_14011bdb3;
    }
  }
  else {
    if (bVar1 != 0x78) goto LAB_140010640;
    local_a8 = &DAT_140119f08;
  }
  iVar13 = iVar13 + (int)uStack_a0;
  local_4c[0] = iVar13;
code_r0x00014001065e:
  local_50 = 0;
  local_88 = (longlong *****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0xf;
  if ((char)param_4[3] == '\x01') {
    if (param_5 == 0) {
      local_90 = FUN_140086860('\x01');
    }
    else {
      local_90 = *(longlong **)(param_5 + 8);
      (**(code **)(*local_90 + 8))(local_90);
    }
    plVar5 = FUN_140009dcb((longlong)local_98);
    (**(code **)(*plVar5 + 0x28))(plVar5);
    FUN_1400049c6((longlong *)&local_88);
    local_78 = (longlong)local_e8;
    uStack_70 = (ulonglong)ppuStack_e0;
    local_88 = local_f8;
    uStack_80 = piStack_f0;
    local_e8 = (uint *)0x0;
    ppuStack_e0 = (undefined **)0xf;
    local_f8 = (longlong *****)((ulonglong)local_f8 & 0xffffffffffffff00);
    FUN_1400021ea((longlong *)&local_f8);
    if ((local_90 != (longlong *)0x0) &&
       (puVar6 = (undefined8 *)(**(code **)(*local_90 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6);
    }
    pppppplVar10 = &local_88;
    if (0xf < uStack_70) {
      pppppplVar10 = (longlong ******)local_88;
    }
    local_50 = 0;
    if (local_78 != 0) {
      uVar8 = (longlong)local_110[0] - (longlong)pcVar3;
      uVar9 = (ulonglong)*(char *)pppppplVar10;
      local_50 = 0;
      if (uVar9 < uVar8) {
        local_50 = 0;
        pppppplVar11 = pppppplVar10;
        do {
          uVar8 = uVar8 - uVar9;
          local_50 = local_50 + 1;
          pppppplVar12 = (longlong ******)((longlong)pppppplVar11 + 1);
          if ((longlong ******)((longlong)pppppplVar11 + 1) ==
              (longlong ******)(local_78 + (longlong)pppppplVar10)) {
            pppppplVar12 = pppppplVar11;
          }
          uVar9 = (ulonglong)*(char *)pppppplVar12;
          pppppplVar11 = pppppplVar12;
        } while (uVar9 < uVar8);
      }
    }
    iVar13 = iVar13 + local_50;
    local_4c[0] = iVar13;
  }
  if (*(char *)((longlong)param_4 + 0xd) == '\x01') {
    local_98[0] = *(char *)((longlong)param_4 + 9) == '\0';
  }
  else {
    local_98[0] = false;
  }
  local_d8 = local_98;
  local_e8 = &local_54;
  ppuStack_e0 = &local_a8;
  local_d0 = local_4c;
  local_c8 = &local_50;
  local_c0 = &local_60;
  local_b8 = (longlong *****)&local_88;
  local_b0 = &local_100;
  piStack_f0 = param_4;
  if ((bool)local_98[0] == false) {
    FUN_140010bae(param_1,param_2,iVar13,param_4,'\x02',&local_f8);
  }
  else {
    FUN_1400109ec(&local_f8,param_1,param_2);
  }
  FUN_1400021ea((longlong *)&local_88);
  return param_1;
}

