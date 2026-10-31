/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018c480 */

ulonglong FUN_14018c480(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_5;
  for (lVar3 = param_3; (lVar4 != 0 && (lVar3 != param_4)); lVar3 = lVar3 + uVar2) {
    uVar1 = FUN_14018d830(&param_5,lVar3,param_4 - lVar3,param_2,param_1 + 0x10);
    if ((int)uVar1 < 0) break;
    uVar2 = (ulonglong)uVar1;
    if (uVar1 == 0) {
      uVar2 = 1;
    }
    lVar4 = lVar4 + -1;
  }
  uVar2 = lVar3 - param_3 & 0xffffffff;
  if (0x7fffffff < lVar3 - param_3) {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}

