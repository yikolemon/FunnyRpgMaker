/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180014660 */

ulonglong FUN_180014660(undefined8 *param_1,char *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  sVar2 = strlen(param_2);
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar4 = 0xffffffffffffffff;
  if ((param_3 <= uVar1 - sVar2 && sVar2 <= uVar1) && (uVar4 = param_3, sVar2 != 0)) {
    lVar3 = thunk_FUN_18023b6c0(param_3 + (longlong)param_1,uVar1 + (longlong)param_1,param_2,sVar2)
    ;
    uVar4 = 0xffffffffffffffff;
    if (lVar3 != uVar1 + (longlong)param_1) {
      uVar4 = lVar3 - (longlong)param_1;
    }
  }
  return uVar4;
}

