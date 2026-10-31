/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103065 */

char * FUN_10103065(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *_Str;
  size_t sVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  
  iVar1 = DAT_1039d74c;
  uVar8 = param_1 & 0xffff0fff;
  if (uVar8 - 0x20f < 8) {
    uVar2 = FUN_101135e3();
    param_1 = param_1 & ~uVar2;
  }
  else {
    puVar3 = &DAT_10356101;
    if (param_1 != 0 && uVar8 == 0) goto LAB_101030b6;
  }
  puVar3 = (undefined1 *)FUN_10113610(uVar8);
LAB_101030b6:
  pcVar5 = "Super+";
  if (-1 < (short)param_1) {
    pcVar5 = "";
  }
  puVar6 = &DAT_10347174;
  if ((param_1 >> 0xe & 1) == 0) {
    puVar6 = &DAT_10356101;
  }
  pcVar7 = "Shift+";
  if ((param_1 >> 0xd & 1) == 0) {
    pcVar7 = "";
  }
  pcVar9 = "Ctrl+";
  if ((param_1 >> 0xc & 1) == 0) {
    pcVar9 = "";
  }
  _Str = (char *)(iVar1 + 0x29ac);
  FUN_100fa4b1(_Str,0x40,"%s%s%s%s%s",pcVar9,pcVar7,puVar6,pcVar5,puVar3);
  if ((uVar8 == 0) && (param_1 != 0)) {
    sVar4 = _strlen(_Str);
    if (sVar4 != 0) {
      *(undefined1 *)(iVar1 + 0x29ab + sVar4) = 0;
    }
  }
  return _Str;
}

