/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb51c */

void __fastcall FUN_100fb51c(char *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_18;
  char *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  if (*(int *)(param_1 + 0x104) < 0) {
    uVar3 = FUN_100fa1fa(0);
    if (*(int *)(param_1 + 0x108) != 0) {
      FUN_1025b2d0(uVar3,*(int *)(param_1 + 0x108),*(int *)(param_1 + 0x100) << 3);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x108));
    }
    *(undefined4 *)(param_1 + 0x108) = uVar3;
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
  }
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  sVar4 = _strlen(param_1);
  local_14 = param_1 + sVar4;
  local_18 = param_1;
  FUN_100fb6aa(0x2c,param_1 + 0x100);
  param_1[0x10c] = '\0';
  param_1[0x10d] = '\0';
  param_1[0x10e] = '\0';
  param_1[0x10f] = '\0';
  if (*(int *)(param_1 + 0x100) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x108);
    puVar1 = puVar5 + *(int *)(param_1 + 0x100) * 2;
    do {
      pcVar6 = (char *)*puVar5;
      pcVar2 = (char *)puVar5[1];
      while ((pcVar6 < pcVar2 && ((*pcVar6 == ' ' || (*pcVar6 == '\t'))))) {
        pcVar6 = pcVar6 + 1;
        *puVar5 = pcVar6;
      }
      while (pcVar6 < pcVar2) {
        pcVar7 = pcVar2 + -1;
        if ((*pcVar7 != ' ') && (*pcVar7 != '\t')) break;
        puVar5[1] = pcVar7;
        pcVar2 = pcVar7;
      }
      if ((pcVar6 != pcVar2) && (*pcVar6 != '-')) {
        *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar1);
  }
  if (DAT_10388d00 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

