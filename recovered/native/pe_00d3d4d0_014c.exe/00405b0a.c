/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405b0a */

WCHAR * __thiscall FUN_00405b0a(void *this,WCHAR *param_1,WCHAR *param_2)

{
  WCHAR WVar1;
  void *extraout_ECX;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)this + 8;
    do {
      WVar1 = FUN_00481670(this,*param_1,iVar2);
      *param_1 = WVar1;
      param_1 = param_1 + 1;
      this = extraout_ECX;
    } while (param_1 != param_2);
  }
  return param_1;
}

