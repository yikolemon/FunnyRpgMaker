/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009c3a2 */

void FUN_14009c3a2(char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  FUN_1400abfd5(&DAT_140ed9a8e,param_1);
  local_68 = 0;
  local_78 = 0;
  cVar2 = FUN_14010cbe8("##DebugTextEncoding",4,0x27c1);
  if (cVar2 != '\0') {
    FUN_140112128("Offset",0,0,0);
    FUN_140112128(&DAT_140ecdddb,0,0,0);
    FUN_140112128("Glyph",0,0,0);
    FUN_140112128("Codepoint",0,0,0);
    FUN_1401133b4();
    sVar4 = strlen(param_1);
    uVar1 = DAT_1401c86a4;
    if (*param_1 != '\0') {
      pcVar7 = param_1;
      do {
        uVar3 = FUN_140076955(&local_68,pcVar7,param_1 + sVar4);
        FUN_140112b04();
        FUN_1400abfd5(&DAT_140ecbfd4,(int)pcVar7 - (int)param_1);
        FUN_140112b04();
        if (0 < (int)uVar3) {
          uVar8 = 0;
          do {
            if (uVar8 != 0) {
              FUN_140092bab(0,uVar1);
            }
            FUN_1400abfd5("0x%02X",pcVar7[uVar8]);
            uVar8 = uVar8 + 1;
          } while (uVar3 != uVar8);
        }
        FUN_140112b04();
        pcVar6 = pcVar7 + (int)uVar3;
        FUN_1400abfca(pcVar7,pcVar6);
        uVar5 = FUN_14008ff11();
        uVar8 = local_68;
        cVar2 = FUN_1400e3a12(uVar5,local_68 & 0xffffffff);
        if (cVar2 == '\0') {
          FUN_140092bab(0,uVar1);
          FUN_1400abfca("[missing]",0);
        }
        FUN_140112b04();
        FUN_1400abfd5("U+%04X",uVar8 & 0xffffffff);
        pcVar7 = pcVar6;
      } while (*pcVar6 != '\0');
    }
    FUN_140110400();
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_98);
}

