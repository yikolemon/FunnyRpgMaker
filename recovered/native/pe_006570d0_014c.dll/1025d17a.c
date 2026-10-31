/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025d17a */

/* Library Function - Single Match
    void __cdecl store_number(int,int,wchar_t * * const,unsigned int * const,wchar_t)
   
   Library: Visual Studio 2019 Release */

void __cdecl store_number(int param_1,int param_2,wchar_t **param_3,uint *param_4,wchar_t param_5)

{
  wchar_t wVar1;
  int iVar2;
  
  if (param_5 == L'\0') {
    store_number_without_lead_zeroes(param_1,param_3,param_4);
    return;
  }
  if ((uint)param_2 < *param_4) {
    iVar2 = 0;
    while (param_2 != 0) {
      param_2 = param_2 + -1;
      wVar1 = param_5;
      if (param_1 != 0) {
        wVar1 = (short)(param_1 % 10) + L'0';
      }
      (*param_3)[param_2] = wVar1;
      param_1 = param_1 / 10;
      iVar2 = iVar2 + 1;
    }
    *param_3 = *param_3 + iVar2;
    *param_4 = *param_4 - iVar2;
  }
  else {
    *param_4 = 0;
  }
  return;
}

