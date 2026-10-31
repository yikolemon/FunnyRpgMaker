/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180065196 */

void FUN_180065196(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0x3c0 < param_3 - param_1) {
    uVar2 = ((ulonglong)(param_3 - param_1) >> 3) * -0x5555555555555555 + 1;
    uVar3 = uVar2 >> 3;
    lVar4 = (uVar2 & 0xfffffffffffffff8) * 3;
    lVar1 = param_1 + lVar4;
    FUN_180065617(param_1,lVar1,uVar3 * 0x30 + param_1);
    FUN_180065617(param_2 + uVar3 * -0x18,param_2,lVar4 + param_2);
    lVar4 = uVar3 * -0x18 + param_3;
    FUN_180065617(param_3 + uVar3 * -0x30,lVar4,param_3);
    param_1 = lVar1;
    param_3 = lVar4;
  }
  FUN_180065617(param_1,param_2,param_3);
  return;
}

