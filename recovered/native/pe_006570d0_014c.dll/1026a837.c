/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a837 */

bool FUN_1026a837(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  int extraout_ECX;
  
  if (param_1 != (wchar_t *)0x0) {
    wVar1 = *param_1;
    if (((((ushort)wVar1 < 0x41) || (0x5a < (ushort)wVar1)) &&
        (((ushort)wVar1 < 0x61 || (0x7a < (ushort)wVar1)))) || (bVar2 = true, param_1[1] != L':')) {
      bVar2 = false;
    }
    if (bVar2) {
      param_1 = param_1 + 2;
    }
    if (*param_1 == L'\0') {
      return true;
    }
    bVar2 = is_slash(*param_1);
    if (bVar2) {
      return *(short *)(extraout_ECX + 2) == 0;
    }
  }
  return false;
}

