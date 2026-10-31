/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016601f */

void FUN_1016601f(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  char *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  char local_1c [4];
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  pcVar4 = *(char **)(DAT_1039d74c + 0x2308);
  if (pcVar4 == (char *)0x0) {
    local_30 = "Call should only be done while in BeginTable() scope!";
    FUN_100fcef5();
  }
  else {
    if (pcVar4[0x1ed] == '\0') {
      local_30 = pcVar4;
      FUN_10161186();
    }
    fVar7 = (float10)FUN_10165e4a();
    local_2c = (float)fVar7;
    local_30 = (char *)0x1;
    local_24 = local_2c;
    local_20 = local_2c;
    FUN_10165364();
    local_30 = local_1c;
    FUN_10114f9f();
    if (pcVar4[0x200] == '\0') {
      local_28 = local_18;
      pcVar2 = (char *)FUN_10165136();
      if (0 < (int)pcVar2) {
        pcVar5 = (char *)0x0;
        do {
          local_30 = pcVar5;
          cVar1 = FUN_10165606();
          if ((cVar1 != '\0') || (pcVar5 == (char *)(int)*(short *)(pcVar4 + 0x1cc))) {
            local_30 = pcVar5;
            uVar3 = FUN_101651b5();
            pcVar6 = "";
            if ((uVar3 >> 0xc & 1) == 0) {
              local_30 = pcVar5;
              pcVar6 = (char *)FUN_1016514c();
            }
            local_30 = pcVar5;
            FUN_10113358();
            local_30 = pcVar6;
            FUN_10166178();
            FUN_10113568();
          }
          pcVar5 = pcVar5 + 1;
        } while (pcVar2 != pcVar5);
      }
      local_30 = local_1c;
      FUN_10113fe2();
      local_30 = (char *)0x1;
      cVar1 = FUN_10113f33();
      if (cVar1 != '\0') {
        pcVar4 = (char *)FUN_10165279();
        if (((pcVar4 == pcVar2) && (local_28 <= local_18)) && (local_18 < local_24 + local_28)) {
          local_30 = pcVar2;
          FUN_10163fd1();
        }
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

