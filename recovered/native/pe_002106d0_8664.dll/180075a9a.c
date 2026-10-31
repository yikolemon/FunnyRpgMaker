/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075a9a */

ulonglong FUN_180075a9a(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_4 - param_3 < 0x7fffffff) {
    uVar1 = param_4 - param_3;
  }
  if (param_5 <= uVar1) {
    uVar1 = param_5;
  }
  return uVar1;
}

