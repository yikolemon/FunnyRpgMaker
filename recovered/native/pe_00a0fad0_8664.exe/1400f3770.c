/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f3770 */

longlong FUN_1400f3770(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  if ((char)param_1[1] == '\0') {
    FUN_1400e3870();
  }
  if ((char)param_2[1] == '\0') {
    FUN_1400e3870(param_2);
  }
  lVar1 = *param_2;
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (*param_1 == 0) {
    if (lVar1 == 0) {
LAB_1400f37b9:
      return CONCAT71(uVar2,1);
    }
  }
  else if (lVar1 != 0) goto LAB_1400f37b9;
  return (ulonglong)uVar2 << 8;
}

