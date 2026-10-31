/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400876d0 */

WCHAR FUN_1400876d0(longlong param_1,WCHAR param_2)

{
  WCHAR *pWVar1;
  WCHAR *pWVar2;
  ulonglong uVar3;
  
  uVar3 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar3 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar3)) &&
     ((param_2 == L'\xffff' || (*(WCHAR *)(uVar3 - 2) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -2;
    if (param_2 == L'\xffff') {
      param_2 = L'\0';
    }
    return param_2;
  }
  if ((*(ulonglong **)(param_1 + 0x80) != (ulonglong *)0x0) && (param_2 != L'\xffff')) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (uVar3 = FUN_14009cc04(param_2,*(ulonglong **)(param_1 + 0x80)), (short)uVar3 != -1)) {
      return param_2;
    }
    pWVar1 = (WCHAR *)(param_1 + 0x70);
    if ((WCHAR *)**(longlong **)(param_1 + 0x38) != pWVar1) {
      *pWVar1 = param_2;
      pWVar2 = (WCHAR *)**(longlong **)(param_1 + 0x18);
      if (pWVar2 != pWVar1) {
        *(WCHAR **)(param_1 + 0x88) = pWVar2;
        *(longlong *)(param_1 + 0x90) =
             **(longlong **)(param_1 + 0x38) + (longlong)**(int **)(param_1 + 0x50) * 2;
      }
      **(longlong **)(param_1 + 0x18) = (longlong)pWVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)pWVar1;
      **(undefined4 **)(param_1 + 0x50) = 1;
      return param_2;
    }
  }
  return L'\xffff';
}

