/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025d210 */

longlong FUN_18025d210(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  if ((char)param_1[1] == '\0') {
    FUN_18024d310();
  }
  if ((char)param_2[1] == '\0') {
    FUN_18024d310(param_2);
  }
  lVar1 = *param_2;
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (*param_1 == 0) {
    if (lVar1 == 0) {
LAB_18025d259:
      return CONCAT71(uVar2,1);
    }
  }
  else if (lVar1 != 0) goto LAB_18025d259;
  return (ulonglong)uVar2 << 8;
}

