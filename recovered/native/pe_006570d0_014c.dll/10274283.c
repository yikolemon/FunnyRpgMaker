/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274283 */

void FUN_10274283(int param_1,undefined4 param_2,LPCWSTR param_3,int param_4,LPSTR param_5,
                 int param_6,LPCSTR param_7,LPBOOL param_8)

{
  bool bVar1;
  LPBOOL lpUsedDefaultChar;
  undefined8 uVar2;
  
  if ((param_1 == 65000) || (param_1 == 0xfde9)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar2 = FUN_102742ed(param_1,param_2);
  lpUsedDefaultChar = param_8;
  if (bVar1) {
    lpUsedDefaultChar = (LPBOOL)0x0;
  }
  if ((bVar1) && (param_7 = (LPCSTR)0x0, param_8 != (LPBOOL)0x0)) {
    *param_8 = 0;
  }
  WideCharToMultiByte((UINT)((ulonglong)uVar2 >> 0x20),(DWORD)uVar2,param_3,param_4,param_5,param_6,
                      param_7,lpUsedDefaultChar);
  return;
}

