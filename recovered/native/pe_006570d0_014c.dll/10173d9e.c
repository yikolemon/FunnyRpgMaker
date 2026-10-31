/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10173d9e */

undefined4 __fastcall FUN_10173d9e(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(param_1 + 0xac);
  if (*(char **)(param_1 + 0xb0) <= pcVar5) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173fc5;
    FUN_10170e8c();
    pcVar5 = *(char **)(param_1 + 0xac);
  }
  pcVar1 = pcVar5 + 1;
  *(char **)(param_1 + 0xac) = pcVar1;
  if (*pcVar5 != 'G') goto LAB_10173fc5;
  if (*(char **)(param_1 + 0xb0) <= pcVar1) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173fc5;
    FUN_10170e8c();
    pcVar1 = *(char **)(param_1 + 0xac);
  }
  pcVar5 = pcVar1 + 1;
  *(char **)(param_1 + 0xac) = pcVar5;
  if (*pcVar1 != 'I') goto LAB_10173fc5;
  if (*(char **)(param_1 + 0xb0) <= pcVar5) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173fc5;
    FUN_10170e8c();
    pcVar5 = *(char **)(param_1 + 0xac);
  }
  pcVar1 = pcVar5 + 1;
  *(char **)(param_1 + 0xac) = pcVar1;
  if (*pcVar5 != 'F') goto LAB_10173fc5;
  if (*(char **)(param_1 + 0xb0) <= pcVar1) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173fc5;
    FUN_10170e8c();
    pcVar1 = *(char **)(param_1 + 0xac);
  }
  pcVar5 = pcVar1 + 1;
  *(char **)(param_1 + 0xac) = pcVar5;
  if (*pcVar1 != '8') goto LAB_10173fc5;
  if (*(char **)(param_1 + 0xb0) <= pcVar5) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173fc5;
    FUN_10170e8c();
    pcVar5 = *(char **)(param_1 + 0xac);
  }
  pcVar1 = pcVar5 + 1;
  *(char **)(param_1 + 0xac) = pcVar1;
  if ((*pcVar5 != '7') && (*pcVar5 != '9')) goto LAB_10173fc5;
  if (*(char **)(param_1 + 0xb0) <= pcVar1) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_10173fc5;
    FUN_10170e8c();
    pcVar1 = *(char **)(param_1 + 0xac);
  }
  *(char **)(param_1 + 0xac) = pcVar1 + 1;
  if (*pcVar1 != 'a') goto LAB_10173fc5;
  *(undefined1 **)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0xb8) = &DAT_10356101
  ;
  iVar2 = FUN_1017336c();
  *param_2 = iVar2;
  iVar2 = FUN_1017336c();
  param_2[1] = iVar2;
  pbVar4 = *(byte **)(param_1 + 0xac);
  if (pbVar4 < *(byte **)(param_1 + 0xb0)) {
LAB_10173f2a:
    *(byte **)(param_1 + 0xac) = pbVar4 + 1;
    uVar3 = (uint)*pbVar4;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar4 = *(byte **)(param_1 + 0xac);
      goto LAB_10173f2a;
    }
    uVar3 = 0;
  }
  param_2[5] = uVar3;
  pbVar4 = *(byte **)(param_1 + 0xac);
  if (pbVar4 < *(byte **)(param_1 + 0xb0)) {
LAB_10173f5e:
    *(byte **)(param_1 + 0xac) = pbVar4 + 1;
    uVar3 = (uint)*pbVar4;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar4 = *(byte **)(param_1 + 0xac);
      goto LAB_10173f5e;
    }
    uVar3 = 0;
  }
  param_2[6] = uVar3;
  pbVar4 = *(byte **)(param_1 + 0xac);
  if (pbVar4 < *(byte **)(param_1 + 0xb0)) {
LAB_10173f92:
    *(byte **)(param_1 + 0xac) = pbVar4 + 1;
    uVar3 = (uint)*pbVar4;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar4 = *(byte **)(param_1 + 0xac);
      goto LAB_10173f92;
    }
    uVar3 = 0;
  }
  param_2[7] = uVar3;
  param_2[8] = -1;
  if ((*param_2 < 0x1000001) && (param_2[1] < 0x1000001)) {
    if (-1 < (char)(byte)param_2[5]) {
      return 1;
    }
    FUN_1017400c(2 << ((byte)param_2[5] & 7),0xffffffff);
    return 1;
  }
LAB_10173fc5:
  FUN_10170e07();
  return 0;
}

