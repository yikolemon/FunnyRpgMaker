/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180123473 */

void FUN_180123473(char *param_1)

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
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_98;
  FUN_1801330a5(&DAT_18037a83f,param_1);
  local_68 = 0;
  local_78 = 0;
  cVar2 = FUN_180164c18("##DebugTextEncoding",4,0x27c1);
  if (cVar2 != '\0') {
    FUN_18016a158("Offset",0,0,0);
    FUN_18016a158("UTF-8",0,0,0);
    FUN_18016a158("Glyph",0,0,0);
    FUN_18016a158("Codepoint",0,0,0);
    FUN_18016b3e4();
    sVar4 = strlen(param_1);
    uVar1 = DAT_1802bb8e0;
    if (*param_1 != '\0') {
      pcVar7 = param_1;
      do {
        uVar3 = FUN_1800fd699(&local_68,pcVar7,param_1 + sVar4);
        FUN_18016ab34();
        FUN_1801330a5(&DAT_18036b4b0,(int)pcVar7 - (int)param_1);
        FUN_18016ab34();
        if (0 < (int)uVar3) {
          uVar8 = 0;
          do {
            if (uVar8 != 0) {
              FUN_180119893(0,uVar1);
            }
            FUN_1801330a5("0x%02X",pcVar7[uVar8]);
            uVar8 = uVar8 + 1;
          } while (uVar3 != uVar8);
        }
        FUN_18016ab34();
        pcVar6 = pcVar7 + (int)uVar3;
        FUN_18013309a(pcVar7,pcVar6);
        uVar5 = FUN_180116bf9();
        uVar8 = local_68;
        cVar2 = FUN_18019849e(uVar5,local_68 & 0xffffffff);
        if (cVar2 == '\0') {
          FUN_180119893(0,uVar1);
          FUN_18013309a("[missing]",0);
        }
        FUN_18016ab34();
        FUN_1801330a5("U+%04X",uVar8 & 0xffffffff);
        pcVar7 = pcVar6;
      } while (*pcVar6 != '\0');
    }
    FUN_180168430();
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_98);
}

