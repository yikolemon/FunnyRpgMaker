/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005f0a1 */

undefined8
FUN_14005f0a1(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *param_4,
             longlong param_5)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char **ppcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int iVar10;
  char *******pppppppcVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  char local_178 [65];
  undefined1 local_137 [15];
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined4 local_118;
  char *local_108 [2];
  longlong local_f8;
  char *local_f0;
  char *local_e8;
  ulonglong uStack_e0;
  char ******local_d0;
  undefined8 *puStack_c8;
  char **local_c0;
  char *pcStack_b8;
  int *local_b0;
  int *local_a8;
  char **local_a0;
  char ******local_98;
  longlong *local_90;
  char local_88 [8];
  longlong *local_80;
  char ******local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  int local_50;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  local_f8 = param_5;
  bVar1 = *(byte *)(param_4 + 1);
  if (bVar1 == 99) {
    if (param_3 < 0x10000) {
      *(undefined1 *)((longlong)param_4 + 0xb) = 0;
      local_118 = *(undefined4 *)(param_4 + 2);
      local_128 = *param_4;
      local_120 = *(undefined2 *)(param_4 + 1);
      local_11e = *(undefined1 *)((longlong)param_4 + 10);
      local_11d = *(undefined1 *)((longlong)param_4 + 0xb);
      local_11c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_14005d49b(param_1,param_2,param_3,&local_128,param_5);
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400451d8("integral cannot be stored in wchar_t");
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(undefined1 *)((longlong)param_4 + 10) = 2;
  }
  uVar3 = 10;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
LAB_14005f17a:
      uVar3 = 2;
    }
    else if (bVar1 == 0x58) goto LAB_14005f173;
  }
  else if (bVar1 == 0x78) {
LAB_14005f173:
    uVar3 = 0x10;
  }
  else if (bVar1 == 0x6f) {
    uVar3 = 8;
  }
  else if (bVar1 == 0x62) goto LAB_14005f17a;
  ppcVar6 = local_108;
  pcVar9 = local_178;
  FUN_140045f0f(ppcVar6,pcVar9,local_137,param_3,uVar3);
  pcVar2 = local_108[0];
  local_f0 = pcVar9;
  iVar10 = (int)local_108[0] - (int)pcVar9;
  local_4c[0] = iVar10;
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    iVar10 = iVar10 + 1;
    local_4c[0] = iVar10;
  }
  bVar1 = *(byte *)(param_4 + 1);
  uVar7 = CONCAT71((int7)((ulonglong)ppcVar6 >> 8),bVar1 != 0x58);
  local_4c[0] = iVar10;
  if (pcVar9 != local_108[0] && bVar1 == 0x58) {
    do {
      if ((byte)(*pcVar9 + 0x9fU) < 0x1a) {
        *pcVar9 = *pcVar9 + -0x20;
      }
      uVar7 = uVar7 & 0xffffffffffffff00;
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 != pcVar2);
  }
  local_e8 = (char *)0x0;
  uStack_e0 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\x01') goto code_r0x00014005f280;
  uVar7 = 2;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x42) {
      local_e8 = "0B";
    }
    else if (bVar1 == 0x58) {
      local_e8 = "0X";
    }
    else {
LAB_14005f268:
      uVar7 = 0;
      local_e8 = (char *)0x0;
    }
  }
  else if (bVar1 == 0x62) {
    local_e8 = "0b";
  }
  else if (bVar1 == 0x6f) {
    local_e8 = (char *)0x0;
    uVar7 = (ulonglong)(param_3 != 0);
    if (param_3 != 0) {
      local_e8 = "0";
    }
  }
  else {
    if (bVar1 != 0x78) goto LAB_14005f268;
    local_e8 = "0x";
  }
  iVar10 = iVar10 + (int)uVar7;
  uStack_e0 = uVar7;
  local_4c[0] = iVar10;
code_r0x00014005f280:
  local_50 = 0;
  local_78 = (char ******)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0xf;
  if (*(char *)((longlong)param_4 + 0xc) == '\x01') {
    if (param_5 == 0) {
      local_80 = (longlong *)FUN_1400d4020(CONCAT71((int7)(uVar7 >> 8),1));
    }
    else {
      local_80 = *(longlong **)(param_5 + 8);
      (**(code **)(*local_80 + 8))(local_80);
    }
    plVar4 = (longlong *)FUN_14005d541(local_88);
    (**(code **)(*plVar4 + 0x28))(plVar4);
    FUN_1400065bc(&local_78);
    local_68 = (longlong)local_c0;
    uStack_60 = (ulonglong)pcStack_b8;
    local_78 = local_d0;
    uStack_70 = puStack_c8;
    local_c0 = (char **)0x0;
    pcStack_b8 = (char *)0xf;
    local_d0 = (char ******)((ulonglong)local_d0 & 0xffffffffffffff00);
    FUN_1400017de(&local_d0);
    if ((local_80 != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(*local_80 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5);
    }
    pppppppcVar11 = &local_78;
    if (0xf < uStack_60) {
      pppppppcVar11 = (char *******)local_78;
    }
    local_50 = 0;
    if (local_68 != 0) {
      uVar7 = (longlong)local_108[0] - (longlong)local_178;
      uVar8 = (ulonglong)*(char *)pppppppcVar11;
      local_50 = 0;
      if (uVar8 < uVar7) {
        local_50 = 0;
        pppppppcVar12 = pppppppcVar11;
        do {
          uVar7 = uVar7 - uVar8;
          local_50 = local_50 + 1;
          pppppppcVar13 = (char *******)((longlong)pppppppcVar12 + 1);
          if ((char *******)((longlong)pppppppcVar12 + 1) ==
              (char *******)((longlong)pppppppcVar11 + local_68)) {
            pppppppcVar13 = pppppppcVar12;
          }
          uVar8 = (ulonglong)*(char *)pppppppcVar13;
          pppppppcVar12 = pppppppcVar13;
        } while (uVar8 < uVar7);
      }
    }
    iVar10 = iVar10 + local_50;
    local_4c[0] = iVar10;
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
  local_98 = (char ******)&local_78;
  local_90 = &local_f8;
  puStack_c8 = param_4;
  if ((bool)local_88[0] == false) {
    FUN_14005e098(param_1,param_2,iVar10,param_4,2,&local_d0);
  }
  else {
    FUN_14005dede(&local_d0,param_1,param_2);
  }
  FUN_1400017de(&local_78);
  return param_1;
}

