/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180046eb3 */

undefined8
FUN_180046eb3(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *param_4,
             longlong param_5)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  char *******pppppppcVar14;
  int iVar15;
  char local_178;
  char local_177 [64];
  undefined1 local_137 [15];
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined4 local_118;
  char *local_110 [2];
  longlong local_100;
  char ******local_f8;
  undefined8 *puStack_f0;
  uint *local_e8;
  char **ppcStack_e0;
  char *local_d8;
  int *local_d0;
  int *local_c8;
  char **local_c0;
  char ******local_b8;
  longlong *local_b0;
  char *local_a8;
  char *pcStack_a0;
  char local_98 [8];
  longlong *local_90;
  char ******local_88;
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
  bVar1 = *(byte *)(param_4 + 1);
  local_54 = param_3;
  if (bVar1 == 99) {
    if (param_3 < 0x10000) {
      *(undefined1 *)((longlong)param_4 + 0xb) = 0;
      local_118 = *(undefined4 *)(param_4 + 2);
      local_128 = *param_4;
      local_120 = *(undefined2 *)(param_4 + 1);
      local_11e = *(undefined1 *)((longlong)param_4 + 10);
      local_11d = *(undefined1 *)((longlong)param_4 + 0xb);
      local_11c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_1800473a1(param_1,param_2,param_3,&local_128,param_5);
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_180005ebc("integral cannot be stored in wchar_t");
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(undefined1 *)((longlong)param_4 + 10) = 2;
  }
  uVar4 = 10;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
LAB_180046f93:
      uVar4 = 2;
    }
    else if (bVar1 == 0x58) goto LAB_180046f8c;
  }
  else if (bVar1 == 0x78) {
LAB_180046f8c:
    uVar4 = 0x10;
  }
  else if (bVar1 == 0x6f) {
    uVar4 = 8;
  }
  else if (bVar1 == 0x62) goto LAB_180046f93;
  ppcVar7 = local_110;
  FUN_18000698c(ppcVar7,&local_178,local_137,param_3,uVar4);
  pcVar2 = local_110[0];
  local_60 = &local_178;
  local_4c[0] = (int)local_110[0] - (int)&local_178;
  if ((int)param_3 < 0) {
    local_60 = local_177;
  }
  else if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_4c[0] = local_4c[0] + 1;
  }
  iVar15 = local_4c[0];
  pcVar3 = local_60;
  bVar1 = *(byte *)(param_4 + 1);
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)ppcVar7 >> 8),bVar1 != 0x58);
  pcVar8 = local_60;
  if (local_60 != local_110[0] && bVar1 == 0x58) {
    do {
      if ((byte)(*pcVar8 + 0x9fU) < 0x1a) {
        *pcVar8 = *pcVar8 + -0x20;
      }
      pcVar9 = pcVar8 + 1;
      pcVar8 = pcVar9;
    } while (pcVar9 != pcVar2);
  }
  local_a8 = (char *)0x0;
  pcStack_a0 = (char *)0x0;
  if (*(char *)((longlong)param_4 + 0xb) != '\x01') goto code_r0x0001800470ba;
  pcVar9 = (char *)0x2;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
      local_a8 = "0B";
    }
    else if (bVar1 == 0x58) {
      local_a8 = "0X";
    }
    else {
LAB_18004709c:
      pcVar9 = (char *)0x0;
      local_a8 = (char *)0x0;
    }
  }
  else if (bVar1 == 0x62) {
    local_a8 = "0b";
  }
  else if (bVar1 == 0x6f) {
    local_a8 = (char *)0x0;
    pcVar9 = (char *)(ulonglong)(param_3 != 0);
    if (param_3 != 0) {
      local_a8 = "0";
    }
  }
  else {
    if (bVar1 != 0x78) goto LAB_18004709c;
    local_a8 = "0x";
  }
  iVar15 = iVar15 + (int)pcVar9;
  pcStack_a0 = pcVar9;
  local_4c[0] = iVar15;
code_r0x0001800470ba:
  local_50 = 0;
  local_88 = (char ******)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0xf;
  if (*(char *)((longlong)param_4 + 0xc) == '\x01') {
    if (param_5 == 0) {
      local_90 = (longlong *)FUN_18023d070(CONCAT71((int7)((ulonglong)pcVar9 >> 8),1));
    }
    else {
      local_90 = *(longlong **)(param_5 + 8);
      (**(code **)(*local_90 + 8))(local_90);
    }
    plVar5 = (longlong *)FUN_180047447(local_98);
    (**(code **)(*plVar5 + 0x28))(plVar5);
    FUN_180004c8c(&local_88);
    local_78 = (longlong)local_e8;
    uStack_70 = (ulonglong)ppcStack_e0;
    local_88 = local_f8;
    uStack_80 = puStack_f0;
    local_e8 = (uint *)0x0;
    ppcStack_e0 = (char **)0xf;
    local_f8 = (char ******)((ulonglong)local_f8 & 0xffffffffffffff00);
    FUN_180001ef2(&local_f8);
    if ((local_90 != (longlong *)0x0) &&
       (puVar6 = (undefined8 *)(**(code **)(*local_90 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6);
    }
    pppppppcVar12 = &local_88;
    if (0xf < uStack_70) {
      pppppppcVar12 = (char *******)local_88;
    }
    local_50 = 0;
    if (local_78 != 0) {
      uVar10 = (longlong)local_110[0] - (longlong)pcVar3;
      uVar11 = (ulonglong)*(char *)pppppppcVar12;
      local_50 = 0;
      if (uVar11 < uVar10) {
        local_50 = 0;
        pppppppcVar13 = pppppppcVar12;
        do {
          uVar10 = uVar10 - uVar11;
          local_50 = local_50 + 1;
          pppppppcVar14 = (char *******)((longlong)pppppppcVar13 + 1);
          if ((char *******)((longlong)pppppppcVar13 + 1) ==
              (char *******)((longlong)pppppppcVar12 + local_78)) {
            pppppppcVar14 = pppppppcVar13;
          }
          uVar11 = (ulonglong)*(char *)pppppppcVar14;
          pppppppcVar13 = pppppppcVar14;
        } while (uVar11 < uVar10);
      }
    }
    iVar15 = iVar15 + local_50;
    local_4c[0] = iVar15;
  }
  if (*(char *)((longlong)param_4 + 0xd) == '\x01') {
    local_98[0] = *(char *)((longlong)param_4 + 9) == '\0';
  }
  else {
    local_98[0] = false;
  }
  local_d8 = local_98;
  local_e8 = &local_54;
  ppcStack_e0 = &local_a8;
  local_d0 = local_4c;
  local_c8 = &local_50;
  local_c0 = &local_60;
  local_b8 = (char ******)&local_88;
  local_b0 = &local_100;
  puStack_f0 = param_4;
  if ((bool)local_98[0] == false) {
    FUN_18004771a(param_1,param_2,iVar15,param_4,2,&local_f8);
  }
  else {
    FUN_180047558(&local_f8,param_1,param_2);
  }
  FUN_180001ef2(&local_88);
  return param_1;
}

