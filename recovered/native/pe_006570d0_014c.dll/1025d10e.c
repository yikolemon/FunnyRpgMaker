/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025d10e */

/* Library Function - Single Match
    void __cdecl store_number_without_lead_zeroes(int,wchar_t * * const,unsigned int * const)
   
   Library: Visual Studio 2019 Release */

void __cdecl store_number_without_lead_zeroes(int param_1,wchar_t **param_2,uint *param_3)

{
  wchar_t wVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar3 = *param_2;
  if (*param_3 < 2) {
    *param_2 = *param_2 + -*param_3;
    *param_3 = 0;
  }
  else {
    do {
      pwVar4 = pwVar3;
      *pwVar4 = (short)(param_1 % 10) + L'0';
      uVar2 = *param_3;
      *param_3 = uVar2 - 1;
      if (param_1 / 10 < 1) break;
      pwVar3 = pwVar4 + 1;
      param_1 = param_1 / 10;
    } while (1 < uVar2 - 1);
    pwVar3 = *param_2;
    *param_2 = pwVar4 + 1;
    for (; pwVar3 < pwVar4; pwVar3 = pwVar3 + 1) {
      wVar1 = *pwVar4;
      *pwVar4 = *pwVar3;
      pwVar4 = pwVar4 + -1;
      *pwVar3 = wVar1;
    }
  }
  return;
}

