/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009226f */

undefined2 *
FUN_18009226f(undefined2 *param_1,undefined2 *param_2,short *param_3,short *param_4,
             longlong *param_5,longlong param_6)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  undefined2 *puVar4;
  
  puVar4 = param_1;
  while ((puVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = *param_5 + 1;
    sVar1 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    sVar3 = (**(code **)(**(longlong **)(param_6 + 8) + 0x40))(*(longlong **)(param_6 + 8),uVar2);
    if (sVar3 != sVar1) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return puVar4;
}

