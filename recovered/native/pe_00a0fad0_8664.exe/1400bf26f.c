/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf26f */

void FUN_1400bf26f(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0x640 < param_3 - param_1) {
    uVar2 = ((ulonglong)(param_3 - param_1) >> 3) * -0x3333333333333333 + 1;
    uVar3 = uVar2 >> 3;
    lVar4 = (uVar2 & 0xfffffffffffffff8) * 5;
    lVar1 = param_1 + lVar4;
    FUN_1400bf4ac(param_1,lVar1,uVar3 * 0x50 + param_1);
    FUN_1400bf4ac(param_2 + uVar3 * -0x28,param_2,lVar4 + param_2);
    lVar4 = uVar3 * -0x28 + param_3;
    FUN_1400bf4ac(param_3 + uVar3 * -0x50,lVar4,param_3);
    param_1 = lVar1;
    param_3 = lVar4;
  }
  FUN_1400bf4ac(param_1,param_2,param_3);
  return;
}

