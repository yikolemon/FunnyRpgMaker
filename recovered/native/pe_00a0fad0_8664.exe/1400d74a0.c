/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d74a0 */

longlong FUN_1400d74a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  if ((char)param_1[1] == '\0') {
    FUN_1400d64e0();
  }
  if ((char)param_2[1] == '\0') {
    FUN_1400d64e0(param_2);
  }
  lVar1 = *param_2;
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (*param_1 == 0) {
    if (lVar1 == 0) {
LAB_1400d74e9:
      return CONCAT71(uVar2,1);
    }
  }
  else if (lVar1 != 0) goto LAB_1400d74e9;
  return (ulonglong)uVar2 << 8;
}

