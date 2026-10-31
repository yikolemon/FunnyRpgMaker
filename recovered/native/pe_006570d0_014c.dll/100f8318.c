/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8318 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __fastcall FUN_100f8318(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  
  pcVar11 = (char *)0x80000;
  if ((char *)0x7ff80000 < param_1) {
    pcVar11 = param_1 + -0x7ff80000;
  }
  pcVar12 = (char *)0xfff80000;
  if (-1 < (int)param_1) {
    pcVar12 = param_1 + 0x7ff80000;
  }
  if (*param_1 == -0x17) {
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 < -5) {
      pcVar12 = (char *)0xfff80000;
      if (-1 < (int)(param_1 + iVar1 + 5)) {
        pcVar12 = param_1 + iVar1 + 0x7ff80005;
      }
    }
    else {
      pcVar11 = (char *)0x80000;
      if ((char *)0x7ff80000 < param_1 + iVar1 + 5) {
        pcVar11 = param_1 + iVar1 + -0x7ff7fffb;
      }
    }
  }
  puVar6 = DAT_1039d6d4;
  if (DAT_1039d6d4 == (undefined4 *)0x0 || DAT_1039d6d8 != (undefined4 *)0x0) {
    if (DAT_1039d6d8 != (undefined4 *)0x0) goto LAB_100f83a1;
  }
  else {
    DAT_1039d6d8 = DAT_1039d6d4;
LAB_100f83a1:
    pcVar9 = (char *)DAT_1039d6d8[2];
    if (((pcVar9 != (char *)0x0) && (pcVar11 <= pcVar9)) &&
       (puVar7 = DAT_1039d6d8, pcVar9 <= pcVar12)) goto LAB_100f842b;
  }
  while (puVar7 = puVar6, puVar7 != (undefined4 *)0x0) {
    pcVar9 = (char *)puVar7[2];
    if (((pcVar9 != (char *)0x0) && (pcVar11 <= pcVar9)) &&
       (DAT_1039d6d8 = puVar7, pcVar9 <= pcVar12)) goto LAB_100f842b;
    puVar6 = (undefined4 *)puVar7[1];
  }
  DAT_1039d6d8 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)FUN_100f75bc(pcVar12);
  if (puVar7 == (undefined4 *)0x0) {
    return (char *)0x0;
  }
  DAT_1039d6d8 = puVar7;
  *puVar7 = 0x52727464;
  puVar7[1] = DAT_1039d6d4;
  pcVar9 = (char *)(puVar7 + 0x3ffc);
  uVar8 = 0x38d;
  pcVar10 = (char *)0x0;
  DAT_1039d6d4 = puVar7;
  do {
    *(char **)(pcVar9 + -8) = pcVar10;
    pcVar9 = pcVar9 + -0x48;
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar9;
  } while (2 < uVar8);
  puVar7[2] = pcVar9;
LAB_100f842b:
  if ((pcVar11 <= pcVar9) && (pcVar9 <= pcVar12)) {
    puVar7[2] = *(undefined4 *)(pcVar9 + 0x40);
    pcVar9[0x44] = -0x34;
    pcVar9[0x45] = -0x34;
    pcVar9[0x46] = -0x34;
    pcVar9[0x47] = -0x34;
    pcVar9[0x40] = -0x34;
    uVar5 = _UNK_102b7c0c;
    uVar4 = _UNK_102b7c08;
    uVar3 = _UNK_102b7c04;
    uVar2 = _DAT_102b7c00;
    pcVar9[0x41] = -0x34;
    pcVar9[0x42] = -0x34;
    pcVar9[0x43] = -0x34;
    *(undefined4 *)(pcVar9 + 0x30) = _DAT_102b7c00;
    *(undefined4 *)(pcVar9 + 0x34) = uVar3;
    *(undefined4 *)(pcVar9 + 0x38) = uVar4;
    *(undefined4 *)(pcVar9 + 0x3c) = uVar5;
    *(undefined4 *)(pcVar9 + 0x20) = uVar2;
    *(undefined4 *)(pcVar9 + 0x24) = uVar3;
    *(undefined4 *)(pcVar9 + 0x28) = uVar4;
    *(undefined4 *)(pcVar9 + 0x2c) = uVar5;
    *(undefined4 *)(pcVar9 + 0x10) = uVar2;
    *(undefined4 *)(pcVar9 + 0x14) = uVar3;
    *(undefined4 *)(pcVar9 + 0x18) = uVar4;
    *(undefined4 *)(pcVar9 + 0x1c) = uVar5;
    *(undefined4 *)pcVar9 = uVar2;
    *(undefined4 *)(pcVar9 + 4) = uVar3;
    *(undefined4 *)(pcVar9 + 8) = uVar4;
    *(undefined4 *)(pcVar9 + 0xc) = uVar5;
    return pcVar9;
  }
  return (char *)0x0;
}

