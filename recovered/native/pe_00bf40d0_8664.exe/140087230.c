/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087230 */

ulonglong FUN_140087230(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,
                       longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong lVar4;
  
  lVar4 = param_5;
  for (pbVar3 = param_3; (lVar4 != 0 && (pbVar3 != param_4)); pbVar3 = pbVar3 + uVar2) {
    uVar1 = FUN_140088b60((LPWSTR)&param_5,pbVar3,(longlong)param_4 - (longlong)pbVar3,param_2,
                          (UINT *)(param_1 + 0x10));
    if ((int)uVar1 < 0) break;
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      uVar2 = 1;
    }
    lVar4 = lVar4 + -1;
  }
  uVar2 = (longlong)pbVar3 - (longlong)param_3 & 0xffffffff;
  if (0x7fffffff < (longlong)pbVar3 - (longlong)param_3) {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}

