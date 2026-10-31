/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180043211 */

longlong * FUN_180043211(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = param_1;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar2 = *param_2;
    param_2 = param_2 + 1;
    plVar2 = plVar2 + 1;
  }
  param_1[0xd] = 0;
  param_1[0xf] = (longlong)FUN_180018c5c;
  param_1[0xc] = (longlong)(param_1 + 0x10);
  param_1[0xe] = 0xfa;
  FUN_180018bde(param_1 + 0xc,*param_1,param_1[1] + *param_1,param_4,param_1 + 0xc,param_1 + 0x10,
                0xfffffffffffffffe);
  FUN_180018bde(param_1 + 0xc,param_1[10],param_1[0xb] + param_1[10]);
  *param_1 = param_1[0xc];
  param_1[10] = param_1[0xc] + param_1[1];
  return param_1;
}

