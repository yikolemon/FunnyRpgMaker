/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180205d38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180205d38(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  short sVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  *param_2 = 1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    lVar6 = FUN_1801cd275(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
    if (lVar6 == 0) {
      return 0xb;
    }
    *(longlong *)(param_2 + 0x38) = lVar6;
  }
  if (*(longlong *)(param_2 + 0x76) == 0) {
    uVar7 = FUN_1801cd275(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
    *(undefined8 *)(param_2 + 0x76) = uVar7;
  }
  uVar7 = FUN_1801ce63e(param_1,0);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_18020687b(param_2,param_3);
  if (param_3 < 0 || (int)uVar7 != 0) {
    return uVar7;
  }
  if ((short)param_3 != 0) {
    return 6;
  }
  param_2[4] = param_2[0x6b];
  param_2[0xe] = 0;
  param_2[1] = 0;
  param_2[2] = (uint)(*(char *)(param_2 + 0x4f) != '\0') << 2 | param_2[2] | 0x1811;
  pcVar8 = *(char **)(param_2 + 0x4a);
  *(char **)(param_2 + 6) = pcVar8;
  *(char **)(param_2 + 8) = "Regular";
  if (pcVar8 == (char *)0x0) {
    if (*(longlong *)(param_2 + 0x3a) != 0) {
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x3a);
    }
  }
  else {
    pcVar10 = *(char **)(param_2 + 0x48);
    if (pcVar10 != (char *)0x0) {
      while (cVar1 = *pcVar10, cVar1 != '\0') {
        cVar2 = *pcVar8;
        if (cVar1 == cVar2) {
          pcVar8 = pcVar8 + 1;
LAB_180205e56:
          pcVar10 = pcVar10 + 1;
        }
        else {
          if ((cVar1 == '-') || (cVar1 == ' ')) goto LAB_180205e56;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (cVar2 == '\0') {
              *(char **)(param_2 + 8) = pcVar10;
            }
            break;
          }
          pcVar8 = pcVar8 + 1;
        }
      }
    }
  }
  iVar14 = param_2[0x4e];
  param_2[3] = (uint)(iVar14 != 0);
  pcVar8 = *(char **)(param_2 + 0x4c);
  if ((pcVar8 != (char *)0x0) &&
     ((iVar5 = strcmp(pcVar8,"Bold"), iVar5 == 0 || (iVar5 = strcmp(pcVar8,"Black"), iVar5 == 0))))
  {
    param_2[3] = iVar14 != 0 | 2;
  }
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  iVar5 = param_2[0x53] + _UNK_180338b54;
  iVar12 = param_2[0x54] + _UNK_180338b58;
  iVar13 = param_2[0x55] + _UNK_180338b5c;
  iVar11 = iVar5 >> 0x10;
  iVar14 = iVar13 >> 0x10;
  param_2[0x16] = param_2[0x52] + _DAT_180338b50 >> 0x10;
  param_2[0x17] = iVar11;
  param_2[0x18] = iVar12 >> 0x10;
  param_2[0x19] = iVar14;
  uVar3 = *(ushort *)(param_2 + 0x1a);
  if (uVar3 == 0) {
    *(undefined2 *)(param_2 + 0x1a) = 1000;
    uVar3 = 1000;
  }
  *(short *)((longlong)param_2 + 0x6a) = (short)((uint)iVar13 >> 0x10);
  *(short *)(param_2 + 0x1b) = (short)((uint)iVar5 >> 0x10);
  sVar4 = (short)((ulonglong)((uint)uVar3 * 0xc) * 0x1999999a >> 0x20);
  iVar14 = iVar14 - iVar11;
  sVar9 = (short)iVar14;
  if (iVar14 <= sVar4) {
    sVar9 = sVar4;
  }
  *(short *)((longlong)param_2 + 0x6e) = sVar9;
  param_2[0x1d] = *(undefined4 *)((longlong)param_2 + 0x13e);
  return 0;
}

