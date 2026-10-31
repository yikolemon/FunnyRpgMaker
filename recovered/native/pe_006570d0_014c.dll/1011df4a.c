/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011df4a */

void FUN_1011df4a(char *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  FUN_1012d08c(&DAT_1034a75c,param_1);
  local_1c = 0;
  cVar2 = FUN_1015f834("##DebugTextEncoding",4,0x27c1,&local_1c,0);
  if (cVar2 != '\0') {
    FUN_10164e8b("Offset",0,0,0);
    FUN_10164e8b("UTF-8",0,0,0);
    FUN_10164e8b("Glyph",0,0,0);
    FUN_10164e8b("Codepoint",0,0,0);
    FUN_1016601f();
    local_20 = (char *)_strlen(param_1);
    if (*param_1 != '\0') {
      local_20 = local_20 + (int)param_1;
      pcVar6 = param_1;
      do {
        iVar3 = FUN_100f90d5(&local_1c,pcVar6,local_20);
        FUN_101657a1();
        FUN_1012d08c(&DAT_1033b386,(int)pcVar6 - (int)param_1);
        FUN_101657a1();
        if (0 < iVar3) {
          iVar5 = 0;
          do {
            if (iVar5 != 0) {
              FUN_10114a0e(0,0xbf800000);
            }
            FUN_1012d08c("0x%02X",pcVar6[iVar5]);
            iVar5 = iVar5 + 1;
          } while (iVar3 != iVar5);
        }
        FUN_101657a1();
        pcVar4 = pcVar6 + iVar3;
        FUN_1012d079(pcVar6,pcVar4);
        FUN_10111f14();
        uVar1 = (uint)local_1c;
        cVar2 = FUN_10190ad0((uint)local_1c & 0xffff);
        if (cVar2 == '\0') {
          FUN_10114a0e(0,0xbf800000);
          FUN_1012d079("[missing]",0);
        }
        FUN_101657a1();
        FUN_1012d08c("U+%04X",uVar1);
        pcVar6 = pcVar4;
      } while (*pcVar4 != '\0');
    }
    FUN_1016304e();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

