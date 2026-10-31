/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402733a8 */

wchar_t * FUN_1402733a8(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  longlong local_50 [2];
  undefined1 local_40 [32];
  longlong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  local_20[0] = param_1;
  FUN_140255e50(&DAT_140628db0);
  if (param_1 == 0) {
    pwVar2 = L"pNonPic";
  }
  else {
    lVar1 = FUN_1402738aa(&DAT_140628e20,local_20);
    if (lVar1 == DAT_140628e20) {
      FUN_14026c4cb(local_40,local_20[0]);
      FUN_1402734a7(local_40);
      FUN_14027832e(&DAT_140628e20,local_50,local_20,local_40);
      FUN_1402133c2(local_40);
      lVar1 = local_50[0];
    }
    if (*(ulonglong *)(lVar1 + 0x58) < 0x10) {
      pwVar2 = (wchar_t *)(lVar1 + 0x40);
    }
    else {
      pwVar2 = *(wchar_t **)(lVar1 + 0x40);
    }
  }
  FUN_14044ebb0(&DAT_140628db0);
  return pwVar2;
}

