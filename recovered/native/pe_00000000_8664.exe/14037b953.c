/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037b953 */

wchar_t * FUN_14037b953(longlong param_1,int param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  
  pwVar2 = L"pNonPic";
  if (((*(char *)(param_1 + 0x239) != '\0') || (param_2 < *(short *)(param_1 + 0x206))) &&
     (lVar1 = (longlong)*(short *)(*(longlong *)(param_1 + 0x18) + 0x54 + (longlong)param_2 * 0x74),
     lVar1 != -1)) {
    pwVar2 = (wchar_t *)(lVar1 + *(longlong *)(param_1 + 0x198));
  }
  return pwVar2;
}

