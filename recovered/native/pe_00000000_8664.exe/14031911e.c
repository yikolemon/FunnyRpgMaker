/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031911e */

char * FUN_14031911e(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  uint uVar6;
  char *_Str;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  
  lVar1 = DAT_14062a630;
  uVar6 = param_1 & 0xffff0fff;
  if (uVar6 - 0x20f < 8) {
    uVar2 = FUN_1403298a3(uVar6);
    param_1 = param_1 & ~uVar2;
  }
  else if (param_1 != 0 && uVar6 == 0) {
    pwVar3 = L"pNonPic";
    goto LAB_14031916c;
  }
  pwVar3 = (wchar_t *)FUN_1403298d5(uVar6);
LAB_14031916c:
  pwVar5 = L"te/Multi-Select (checkboxes)";
  if (-1 < (short)param_1) {
    pwVar5 = L"pNonPic";
  }
  pwVar7 = L"election State/Multi-Select (checkboxes)";
  if ((param_1 >> 0xe & 1) == 0) {
    pwVar7 = L"pNonPic";
  }
  pwVar9 = L"ion State/Multi-Select (checkboxes)";
  if ((param_1 >> 0xd & 1) == 0) {
    pwVar9 = L"pNonPic";
  }
  pwVar8 = L"i-Select (checkboxes)";
  if ((param_1 >> 0xc & 1) == 0) {
    pwVar8 = L"pNonPic";
  }
  _Str = (char *)(lVar1 + 0x2ce8);
  FUN_14030ffa5(_Str,0x40,"et order###ResetOrder",pwVar8,pwVar9,pwVar7,pwVar5,pwVar3);
  if ((uVar6 == 0) && (param_1 != 0)) {
    sVar4 = strlen(_Str);
    if (sVar4 != 0) {
      *(undefined1 *)(lVar1 + 0x2ce7 + sVar4) = 0;
    }
  }
  return _Str;
}

