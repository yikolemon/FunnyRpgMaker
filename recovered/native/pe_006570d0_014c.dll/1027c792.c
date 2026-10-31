/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c792 */

/* Library Function - Single Match
    _GetLocaleNameFromLanguage
   
   Library: Visual Studio 2019 Release */

void _GetLocaleNameFromLanguage(undefined4 *param_1)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  bool bVar5;
  
  uVar3 = 2;
  psVar4 = (short *)*param_1;
  psVar1 = psVar4 + 1;
  do {
    sVar2 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  bVar5 = (int)psVar4 - (int)psVar1 >> 1 == 3;
  param_1[4] = (uint)bVar5;
  if (!bVar5) {
    uVar3 = _GetPrimaryLen(*param_1);
  }
  param_1[3] = uVar3;
  ___acrt_EnumSystemLocalesEx_16(&DAT_1027c7eb,3,0,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    param_1[2] = 0;
  }
  return;
}

