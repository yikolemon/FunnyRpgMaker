/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fc7b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1800fc7b4(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar8 = (char *)0x80000;
  if ((char *)0x7ff80000 < param_1) {
    pcVar8 = param_1 + -0x7ff80000;
  }
  pcVar7 = (char *)0xffffffff80000000;
  if (param_1 < (char *)0xffffffff80000000) {
    pcVar7 = param_1;
  }
  if (*param_1 == -0x17) {
    pcVar4 = param_1 + (longlong)*(int *)(param_1 + 1) + 5;
    if (-6 < (longlong)*(int *)(param_1 + 1)) goto LAB_1800fc808;
LAB_1800fc832:
    pcVar7 = (char *)0xffffffff80000000;
    if (pcVar4 < (char *)0xffffffff80000000) {
      pcVar7 = pcVar4;
    }
  }
  else if ((*param_1 == -1) && (param_1[1] == '%')) {
    pcVar4 = param_1 + (longlong)*(int *)(param_1 + 2) + 6;
    if ((longlong)*(int *)(param_1 + 2) < -6) goto LAB_1800fc832;
LAB_1800fc808:
    pcVar8 = (char *)0x80000;
    if ((char *)0x7ff80000 < pcVar4) {
      pcVar8 = pcVar4 + -0x7ff80000;
    }
  }
  pcVar7 = pcVar7 + 0x7ff80000;
  puVar3 = DAT_180419018;
  if (DAT_180419018 == (undefined4 *)0x0 || DAT_180419020 != (undefined4 *)0x0) {
    if (DAT_180419020 != (undefined4 *)0x0) goto LAB_1800fc87c;
  }
  else {
    DAT_180419020 = DAT_180419018;
LAB_1800fc87c:
    pcVar4 = *(char **)(DAT_180419020 + 4);
    if (((pcVar4 != (char *)0x0) && (pcVar8 <= pcVar4)) &&
       (puVar5 = DAT_180419020, pcVar4 <= pcVar7)) goto LAB_1800fc92f;
  }
  while (puVar5 = puVar3, puVar5 != (undefined4 *)0x0) {
    pcVar4 = *(char **)(puVar5 + 4);
    if (((pcVar4 != (char *)0x0) && (pcVar8 <= pcVar4)) &&
       (DAT_180419020 = puVar5, pcVar4 <= pcVar7)) goto LAB_1800fc92f;
    puVar3 = *(undefined4 **)(puVar5 + 2);
  }
  DAT_180419020 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)FUN_1800fb8c0((ulonglong)param_1 & 0xffffffffffff0000,pcVar8);
  if (puVar5 == (undefined4 *)0x0) {
    return (char *)0x0;
  }
  DAT_180419020 = puVar5;
  *puVar5 = 0x52727464;
  *(undefined4 **)(puVar5 + 2) = DAT_180419018;
  pcVar4 = (char *)(puVar5 + 0x3ff0);
  uVar6 = 0x2a9;
  pcVar9 = (char *)0x0;
  DAT_180419018 = puVar5;
  do {
    *(char **)(pcVar4 + -0x18) = pcVar9;
    pcVar4 = pcVar4 + -0x60;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4;
  } while (2 < uVar6);
  *(char **)(puVar5 + 4) = pcVar4;
LAB_1800fc92f:
  if ((pcVar8 <= pcVar4) && (pcVar4 <= pcVar7)) {
    *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(pcVar4 + 0x48);
    uVar2 = _UNK_1802dd248;
    uVar1 = _DAT_1802dd240;
    *(undefined8 *)(pcVar4 + 0x50) = _DAT_1802dd240;
    *(undefined8 *)(pcVar4 + 0x58) = uVar2;
    *(undefined8 *)(pcVar4 + 0x40) = uVar1;
    *(undefined8 *)(pcVar4 + 0x48) = uVar2;
    *(undefined8 *)(pcVar4 + 0x30) = uVar1;
    *(undefined8 *)(pcVar4 + 0x38) = uVar2;
    *(undefined8 *)(pcVar4 + 0x20) = uVar1;
    *(undefined8 *)(pcVar4 + 0x28) = uVar2;
    *(undefined8 *)(pcVar4 + 0x10) = uVar1;
    *(undefined8 *)(pcVar4 + 0x18) = uVar2;
    *(undefined8 *)pcVar4 = uVar1;
    *(undefined8 *)(pcVar4 + 8) = uVar2;
    return pcVar4;
  }
  return (char *)0x0;
}

