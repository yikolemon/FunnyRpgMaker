/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400fb3d0 */

void FUN_1400fb3d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined2 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  lVar1 = param_4 * 2;
  FUN_140135ff0(param_1,param_2,lVar1);
  puVar3 = (undefined2 *)(lVar1 + param_1);
  lVar2 = param_5;
  if (param_5 != 0) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = param_6;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_140135ff0(param_1 + (param_4 + param_5) * 2,lVar1 + param_2,(param_3 - param_4) * 2 + 2);
  return;
}

