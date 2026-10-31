/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140053374 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140053374(longlong param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 extraout_var;
  char *pcVar10;
  short sVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  *param_2 = 1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    lVar7 = FUN_14001f8b9(*(longlong *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
    if (lVar7 == 0) {
      return 0xb;
    }
    *(longlong *)(param_2 + 0x38) = lVar7;
  }
  if (*(longlong *)(param_2 + 0x76) == 0) {
    uVar8 = FUN_14001f8b9(*(longlong *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
    *(undefined8 *)(param_2 + 0x76) = uVar8;
  }
  uVar9 = FUN_140020a41(param_1,0);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  iVar5 = FUN_140053eb7((longlong)param_2,param_3);
  if (param_3 < 0 || iVar5 != 0) {
    return CONCAT44(extraout_var,iVar5);
  }
  if ((short)param_3 != 0) {
    return 6;
  }
  param_2[4] = param_2[0x6b];
  param_2[0xe] = 0;
  param_2[1] = 0;
  param_2[2] = (uint)(*(char *)(param_2 + 0x4f) != '\0') << 2 | param_2[2] | 0x1811;
  pcVar10 = *(char **)(param_2 + 0x4a);
  *(char **)(param_2 + 6) = pcVar10;
  *(char **)(param_2 + 8) = "Regular";
  if (pcVar10 == (char *)0x0) {
    if (*(longlong *)(param_2 + 0x3a) != 0) {
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x3a);
    }
  }
  else {
    pcVar12 = *(char **)(param_2 + 0x48);
    if (pcVar12 != (char *)0x0) {
      while (cVar1 = *pcVar12, cVar1 != '\0') {
        cVar2 = *pcVar10;
        if (cVar1 == cVar2) {
          pcVar10 = pcVar10 + 1;
LAB_140053492:
          pcVar12 = pcVar12 + 1;
        }
        else {
          if ((cVar1 == '-') || (cVar1 == ' ')) goto LAB_140053492;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (cVar2 == '\0') {
              *(char **)(param_2 + 8) = pcVar12;
            }
            break;
          }
          pcVar10 = pcVar10 + 1;
        }
      }
    }
  }
  iVar5 = param_2[0x4e];
  param_2[3] = (uint)(iVar5 != 0);
  pcVar10 = *(char **)(param_2 + 0x4c);
  if ((pcVar10 != (char *)0x0) &&
     ((iVar6 = strcmp(pcVar10,"Bold"), iVar6 == 0 || (iVar6 = strcmp(pcVar10,"Black"), iVar6 == 0)))
     ) {
    param_2[3] = iVar5 != 0 | 2;
  }
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  iVar6 = param_2[0x53] + _UNK_1400f5c74;
  iVar14 = param_2[0x54] + _UNK_1400f5c78;
  iVar15 = param_2[0x55] + _UNK_1400f5c7c;
  iVar13 = iVar6 >> 0x10;
  iVar5 = iVar15 >> 0x10;
  param_2[0x16] = param_2[0x52] + _DAT_1400f5c70 >> 0x10;
  param_2[0x17] = iVar13;
  param_2[0x18] = iVar14 >> 0x10;
  param_2[0x19] = iVar5;
  uVar3 = *(ushort *)(param_2 + 0x1a);
  if (uVar3 == 0) {
    *(undefined2 *)(param_2 + 0x1a) = 1000;
    uVar3 = 1000;
  }
  *(short *)((longlong)param_2 + 0x6a) = (short)((uint)iVar15 >> 0x10);
  *(short *)(param_2 + 0x1b) = (short)((uint)iVar6 >> 0x10);
  sVar4 = (short)((ulonglong)((uint)uVar3 * 0xc) * 0x1999999a >> 0x20);
  iVar5 = iVar5 - iVar13;
  sVar11 = (short)iVar5;
  if (iVar5 <= sVar4) {
    sVar11 = sVar4;
  }
  *(short *)((longlong)param_2 + 0x6e) = sVar11;
  param_2[0x1d] = *(undefined4 *)((longlong)param_2 + 0x13e);
  return 0;
}

