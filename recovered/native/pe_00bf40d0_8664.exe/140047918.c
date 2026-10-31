/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047918 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140047918(undefined8 param_1,int *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  short sVar11;
  char *pcVar12;
  undefined8 *puVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_68 [40];
  int *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  *param_2 = 1;
  lVar7 = FUN_14001f8d7(*(longlong **)(param_2 + 0x24),"postscript-cmaps",'\x01');
  *(longlong *)(param_2 + 0xa6) = lVar7;
  lVar8 = FUN_14001f8b9(*(longlong *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
  *(longlong *)(param_2 + 0xa8) = lVar8;
  if (lVar8 == 0) {
    uVar4 = 0xb;
    goto LAB_140047a8f;
  }
  uVar9 = FUN_14001f8b9(*(longlong *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
  *(undefined8 *)(param_2 + 0xc0) = uVar9;
  uVar4 = FUN_14004a2b0(param_2);
  if ((param_3 < 0 || uVar4 != 0) || (uVar4 = 6, (short)param_3 != 0)) goto LAB_140047a8f;
  param_2[4] = param_2[0x90];
  param_2[1] = 0;
  uVar4 = param_2[2];
  uVar5 = uVar4 | 0xa11;
  param_2[2] = uVar5;
  if ((char)param_2[0x41] != '\0') {
    uVar5 = uVar4 | 0xa15;
    param_2[2] = uVar5;
  }
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    param_2[2] = uVar5 | 0x100;
  }
  pcVar12 = *(char **)(param_2 + 0x3c);
  *(char **)(param_2 + 6) = pcVar12;
  param_2[8] = 0;
  param_2[9] = 0;
  if (pcVar12 == (char *)0x0) {
    if (*(longlong *)(param_2 + 0x76) != 0) {
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x76);
    }
LAB_140047ac2:
    pcVar10 = "Regular";
    if (*(char **)(param_2 + 0x3e) != (char *)0x0) {
      pcVar10 = *(char **)(param_2 + 0x3e);
    }
  }
  else {
    pcVar10 = *(char **)(param_2 + 0x3a);
    if (pcVar10 == (char *)0x0) goto LAB_140047ac2;
    cVar14 = *pcVar10;
    while (cVar14 != '\0') {
      cVar1 = *pcVar12;
      if (cVar14 == cVar1) {
        pcVar12 = pcVar12 + 1;
LAB_140047a6d:
        pcVar10 = pcVar10 + 1;
      }
      else {
        if ((cVar14 == '-') || (cVar14 == ' ')) goto LAB_140047a6d;
        if ((cVar1 != ' ') && (cVar1 != '-')) {
          if (cVar1 == '\0') goto LAB_140047adc;
          goto LAB_140047ac2;
        }
        pcVar12 = pcVar12 + 1;
      }
      cVar14 = *pcVar10;
    }
    pcVar10 = "Regular";
  }
LAB_140047adc:
  *(char **)(param_2 + 8) = pcVar10;
  iVar18 = param_2[0x40];
  param_2[3] = (uint)(iVar18 != 0);
  pcVar12 = *(char **)(param_2 + 0x3e);
  if ((pcVar12 != (char *)0x0) &&
     ((iVar6 = strcmp(pcVar12,"Bold"), iVar6 == 0 || (iVar6 = strcmp(pcVar12,"Black"), iVar6 == 0)))
     ) {
    param_2[3] = iVar18 != 0 | 2;
  }
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  iVar6 = param_2[0xa0] + _UNK_1400f5c74;
  iVar16 = param_2[0xa1] + _UNK_1400f5c78;
  iVar17 = param_2[0xa2] + _UNK_1400f5c7c;
  iVar15 = iVar6 >> 0x10;
  iVar18 = iVar17 >> 0x10;
  param_2[0x16] = param_2[0x9f] + _DAT_1400f5c70 >> 0x10;
  param_2[0x17] = iVar15;
  param_2[0x18] = iVar16 >> 0x10;
  param_2[0x19] = iVar18;
  uVar2 = *(ushort *)(param_2 + 0x1a);
  if (uVar2 == 0) {
    *(undefined2 *)(param_2 + 0x1a) = 1000;
    uVar2 = 1000;
  }
  *(short *)((longlong)param_2 + 0x6a) = (short)((uint)iVar17 >> 0x10);
  *(short *)(param_2 + 0x1b) = (short)((uint)iVar6 >> 0x10);
  sVar3 = (short)((ulonglong)((uint)uVar2 * 0xc) * 0x1999999a >> 0x20);
  iVar18 = iVar18 - iVar15;
  sVar11 = (short)iVar18;
  if (iVar18 <= sVar3) {
    sVar11 = sVar3;
  }
  *(short *)((longlong)param_2 + 0x6e) = sVar11;
  *(short *)(param_2 + 0x1c) = (short)((uint)iVar16 >> 0x10);
  uVar9 = FUN_14004a796((longlong)param_2,(int *)&local_40);
  if ((int)uVar9 == 0) {
    uVar4 = FUN_140021867((int)local_40);
    *(short *)(param_2 + 0x1c) = (short)(uVar4 >> 0x10);
  }
  *(undefined2 *)((longlong)param_2 + 0x72) = *(undefined2 *)((longlong)param_2 + 0x6e);
  param_2[0x1d] = *(int *)((longlong)param_2 + 0x106);
  if (lVar7 == 0) {
switchD_140047c40_default:
    uVar4 = 0;
  }
  else {
    puVar13 = *(undefined8 **)(lVar8 + 0x40);
    local_38 = 0x10003756e6963;
    local_40 = param_2;
    uVar4 = FUN_14001f301((uint *)puVar13[3],0,(longlong *)&local_40,(undefined8 *)0x0);
    if (((uVar4 != 0) && ((char)uVar4 != -0x5d)) && ((uVar4 & 0xff) != 7)) goto LAB_140047a8f;
    local_38._0_6_ = CONCAT24(7,(undefined4)local_38);
    switch(param_2[0x78]) {
    case 1:
      local_38 = CONCAT44(local_38._4_4_,0x41444243);
      local_38 = CONCAT26(2,(undefined6)local_38);
      puVar13 = puVar13 + 2;
      break;
    case 2:
      local_38 = CONCAT44(local_38._4_4_,0x41444f42);
      local_38 = local_38 & 0xffffffffffff;
      break;
    case 3:
      puVar13 = puVar13 + 3;
      local_38 = CONCAT44(local_38._4_4_,0x6c617431);
      local_38 = CONCAT26(3,(undefined6)local_38);
      break;
    case 4:
      local_38 = CONCAT44(local_38._4_4_,0x41444245);
      local_38 = CONCAT26(1,(undefined6)local_38);
      puVar13 = puVar13 + 1;
      break;
    default:
      goto switchD_140047c40_default;
    }
    uVar4 = 0;
    if ((uint *)*puVar13 != (uint *)0x0) {
      uVar4 = FUN_14001f301((uint *)*puVar13,0,(longlong *)&local_40,(undefined8 *)0x0);
    }
  }
LAB_140047a8f:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_68);
  }
  return uVar4;
}

