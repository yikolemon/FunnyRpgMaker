/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10178c66 */

char __fastcall FUN_10178c66(int param_1,int *param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  undefined1 auStack_14 [3];
  undefined1 local_11;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_14;
  FUN_10170e7b();
  pcVar2 = *(char **)(param_1 + 0xac);
  pcVar5 = *(char **)(param_1 + 0xb0);
  if (pcVar2 < pcVar5) {
    *(char **)(param_1 + 0xac) = pcVar2 + 1;
    cVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    cVar6 = '\0';
  }
  else {
    FUN_10170e8c();
    pcVar1 = *(char **)(param_1 + 0xac);
    pcVar5 = *(char **)(param_1 + 0xb0);
    pcVar2 = pcVar1 + 1;
    *(char **)(param_1 + 0xac) = pcVar2;
    cVar6 = *pcVar1;
  }
  if (pcVar2 < pcVar5) {
LAB_10178ce2:
    *(char **)(param_1 + 0xac) = pcVar2 + 1;
    if ((cVar6 != 'P') || ((byte)(*pcVar2 - 0x37U) < 0xfe)) goto LAB_10178daa;
    *param_4 = (uint)(*pcVar2 == '6') * 2 + 1;
    puVar3 = *(undefined1 **)(param_1 + 0xac);
    if (puVar3 < *(undefined1 **)(param_1 + 0xb0)) {
LAB_10178d3d:
      *(undefined1 **)(param_1 + 0xac) = puVar3 + 1;
      local_11 = *puVar3;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        puVar3 = *(undefined1 **)(param_1 + 0xac);
        goto LAB_10178d3d;
      }
      local_11 = 0;
    }
    FUN_10178e84();
    iVar4 = FUN_10178fa7();
    *param_2 = iVar4;
    if (iVar4 != 0) {
      FUN_10178e84();
      iVar4 = FUN_10178fa7();
      *param_3 = iVar4;
      if (iVar4 != 0) {
        FUN_10178e84();
        iVar4 = FUN_10178fa7();
        if (iVar4 < 0x10000) {
          cVar6 = (0xff < iVar4) * '\b' + '\b';
          goto LAB_10178dbf;
        }
      }
    }
    FUN_10170e07();
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pcVar2 = *(char **)(param_1 + 0xac);
      goto LAB_10178ce2;
    }
LAB_10178daa:
    FUN_10170e7b();
  }
  cVar6 = '\0';
LAB_10178dbf:
  if (DAT_10388d00 != (local_10 ^ (uint)auStack_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return cVar6;
}

