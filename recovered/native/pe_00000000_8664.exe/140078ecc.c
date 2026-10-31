/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140078ecc */

void FUN_140078ecc(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_58 [40];
  char *local_30;
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x104) < 0) {
    uVar2 = FUN_140077ab4(0);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1401c5180(uVar2,*(longlong *)(param_1 + 0x108),(longlong)*(int *)(param_1 + 0x100) << 4);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x108));
    }
    *(undefined8 *)(param_1 + 0x108) = uVar2;
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
  }
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  sVar3 = strlen(param_1);
  local_28 = param_1 + sVar3;
  local_30 = param_1;
  FUN_140079088(&local_30,0x2c,param_1 + 0x100);
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x108);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x100) * 2;
    do {
      pcVar6 = (char *)*puVar5;
      pcVar1 = (char *)puVar5[1];
      while ((pcVar6 < pcVar1 && ((*pcVar6 == ' ' || (*pcVar6 == '\t'))))) {
        pcVar6 = pcVar6 + 1;
        *puVar5 = pcVar6;
      }
      while (pcVar6 < pcVar1) {
        pcVar7 = pcVar1 + -1;
        if ((*pcVar7 != ' ') && (*pcVar7 != '\t')) break;
        puVar5[1] = pcVar7;
        pcVar1 = pcVar7;
      }
      if ((pcVar6 != pcVar1) && (*pcVar6 != '-')) {
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return;
}

