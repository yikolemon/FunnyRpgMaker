/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140080f66 */

char * FUN_140080f66(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined *puVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  char *_Str;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  
  lVar1 = DAT_140f2a910;
  uVar6 = param_1 & 0xffff0fff;
  if (uVar6 - 0x20f < 8) {
    uVar2 = FUN_1400916eb(uVar6);
    param_1 = param_1 & ~uVar2;
  }
  else if (param_1 != 0 && uVar6 == 0) {
    puVar3 = &DAT_140edcdbf;
    goto LAB_140080fb4;
  }
  puVar3 = (undefined *)FUN_14009171d(uVar6);
LAB_140080fb4:
  pcVar5 = "Super+";
  if (-1 < (short)param_1) {
    pcVar5 = "";
  }
  puVar7 = &DAT_140ed7033;
  if ((param_1 >> 0xe & 1) == 0) {
    puVar7 = &DAT_140edcdbf;
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
  FUN_140077d91(_Str,0x40,"%s%s%s%s%s",pcVar8,pcVar9,puVar7,pcVar5,puVar3);
  if ((uVar6 == 0) && (param_1 != 0)) {
    sVar4 = strlen(_Str);
    if (sVar4 != 0) {
      *(undefined1 *)(lVar1 + 0x2ce7 + sVar4) = 0;
    }
  }
  return _Str;
}

