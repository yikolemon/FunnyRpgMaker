/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024afa0 */

ulonglong FUN_18024afa0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_5;
  for (lVar3 = param_3; (lVar4 != 0 && (lVar3 != param_4)); lVar3 = lVar3 + uVar2) {
    uVar1 = FUN_18023ec80(&param_5,lVar3,param_4 - lVar3,param_2,param_1 + 0x10);
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

