/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180043158 */

longlong * FUN_180043158(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    plVar2 = param_1;
    plVar3 = param_3;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *plVar3 = *plVar2;
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 1;
    }
    param_3[0xd] = 0;
    FUN_180018bde(param_3 + 0xc,param_1[0xc],param_1[0xd] + param_1[0xc]);
    *param_3 = param_3[0xc];
    param_3[10] = param_3[0xc] + param_3[1];
    param_3 = param_3 + 0x30;
    param_1 = param_1 + 0x30;
  }
  return param_3;
}

