/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125a9e */

undefined * __fastcall FUN_10125a9e(int param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int local_120;
  int local_11c;
  uint local_118;
  char local_114 [256];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_120;
  iVar1 = param_1 + 0x20;
  FUN_1012c6a0(0);
  if (0 < *(int *)(param_1 + 8)) {
    iVar4 = 0;
    local_120 = param_1;
    do {
      FUN_10125bcd(0,local_114,0x100);
      puVar2 = &DAT_1033ecca;
      if (iVar4 == 0) {
        puVar2 = &DAT_1033ecc9;
      }
      local_11c = iVar4;
      FUN_100fb8e0(puVar2,0);
      if (local_114[0] != '\0') {
        pcVar3 = local_114;
        do {
          iVar4 = FUN_100f90d5(&local_118,pcVar3,0);
          pcVar5 = pcVar3 + iVar4;
          if (local_118 == 0x2f) {
            FUN_100fb8e0(&DAT_1033b92b,0);
LAB_10125b74:
            FUN_100fb8e0(pcVar3,pcVar5);
          }
          else {
            if (local_118 < 0x100 || param_2 != '\x01') goto LAB_10125b74;
            if (0 < iVar4) {
              do {
                FUN_100fb9a2(iVar1,"\\x%02x",*pcVar3);
                pcVar3 = pcVar3 + 1;
              } while (pcVar3 < pcVar5);
            }
          }
          pcVar3 = pcVar5;
        } while (*pcVar5 != '\0');
      }
      iVar4 = local_11c + 1;
      param_1 = local_120;
    } while (iVar4 < *(int *)(local_120 + 8));
  }
  puVar2 = &DAT_1039d750;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x28);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_120)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return puVar2;
}

