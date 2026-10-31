/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107c4e */

char * FUN_180107c4e(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined1 *puVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  char *_Str;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  
  lVar1 = DAT_180419160;
  uVar6 = param_1 & 0xffff0fff;
  if (uVar6 - 0x20f < 8) {
    uVar2 = FUN_1801183d3(uVar6);
    param_1 = param_1 & ~uVar2;
  }
  else if (param_1 != 0 && uVar6 == 0) {
    puVar3 = &DAT_1803861e4;
    goto LAB_180107c9c;
  }
  puVar3 = (undefined1 *)FUN_180118405(uVar6);
LAB_180107c9c:
  pcVar5 = "Super+";
  if (-1 < (short)param_1) {
    pcVar5 = "";
  }
  puVar7 = &DAT_1803772a2;
  if ((param_1 >> 0xe & 1) == 0) {
    puVar7 = &DAT_1803861e4;
  }
  pcVar9 = "Shift+";
  if ((param_1 >> 0xd & 1) == 0) {
    pcVar9 = "";
  }
  pcVar8 = "Ctrl+";
  if ((param_1 >> 0xc & 1) == 0) {
    pcVar8 = "";
  }
  _Str = (char *)(lVar1 + 0x2ce8);
  FUN_1800fead5(_Str,0x40,"%s%s%s%s%s",pcVar8,pcVar9,puVar7,pcVar5,puVar3);
  if ((uVar6 == 0) && (param_1 != 0)) {
    sVar4 = strlen(_Str);
    if (sVar4 != 0) {
      *(undefined1 *)(lVar1 + 0x2ce7 + sVar4) = 0;
    }
  }
  return _Str;
}

