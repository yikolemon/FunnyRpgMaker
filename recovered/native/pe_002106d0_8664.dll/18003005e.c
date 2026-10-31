/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003005e */

void FUN_18003005e(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = ((ulonglong)param_1[2] >> 1) + param_1[2];
  uVar4 = param_2;
  if (((param_2 <= uVar3) && (uVar4 = uVar3, uVar3 >> 0x3e != 0)) &&
     (uVar4 = 0x3fffffffffffffff, 0x3fffffffffffffff < param_2)) {
    uVar4 = param_2;
  }
  plVar1 = (longlong *)*param_1;
  lVar2 = FUN_1800285f4(param_1 + 0x14,uVar4);
  FUN_1802a82f0(lVar2,plVar1,param_1[1] << 2);
  *param_1 = lVar2;
  param_1[2] = uVar4;
  if (plVar1 == param_1 + 4) {
    return;
  }
  thunk_FUN_180290e40(plVar1);
  return;
}

