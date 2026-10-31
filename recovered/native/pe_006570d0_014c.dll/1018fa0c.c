/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018fa0c */

undefined4 FUN_1018fa0c(char *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_98;
  char local_94 [128];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_98;
  local_98 = 0;
  iVar1 = FUN_100fa997(param_1,&DAT_1033b508,&local_98,0);
  if (iVar1 == 0) {
    if ((param_3 == (undefined4 *)0x0) || (uVar4 = 0, (*(byte *)(param_3 + 0x1b) & 2) == 0)) {
      FUN_100f99e6("While loading \'%s\'\n",param_1);
      FUN_100fcef5("Could not load font file!");
      uVar4 = 0;
    }
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      FUN_1018e2b2();
    }
    else {
      pcVar6 = local_94;
      for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar6 = *param_3;
        param_3 = param_3 + 1;
        pcVar6 = pcVar6 + 4;
      }
    }
    if (local_94[0] == '\0') {
      sVar2 = _strlen(param_1);
      pcVar6 = param_1 + sVar2;
      do {
        pcVar3 = pcVar6;
        if ((pcVar3 <= param_1) || (pcVar3[-1] == '\\')) break;
        pcVar6 = pcVar3 + -1;
      } while (pcVar3[-1] != '/');
      FUN_100fa4b1(local_94,0x28,"%s",pcVar3);
    }
    uVar4 = FUN_1018fb4c(iVar1,local_98,param_2,local_94,param_4);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

