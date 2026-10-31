/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180014db0 */

void FUN_180014db0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  *(ulonglong *)(param_1 + 0x48) = uVar2 + param_3 * 8;
  if (param_3 != 0) {
    uVar2 = (ulonglong)((uint)(uVar2 >> 3) & 0x3f);
    do {
      uVar3 = 0x40 - uVar2;
      lVar1 = uVar2 + param_1 + 1;
      if (param_3 < uVar3) {
        thunk_FUN_180006ba5(param_2,param_3,lVar1);
        return;
      }
      thunk_FUN_180006ba5(param_2,uVar3,lVar1);
      FUN_180014ef4(param_1,param_1 + 1);
      param_2 = param_2 + uVar3;
      uVar2 = 0;
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
  }
  return;
}

