/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006455b */

undefined2 *
FUN_14006455b(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             longlong *param_5,longlong param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  undefined2 *puVar5;
  
  puVar5 = param_1;
  while ((puVar5 != param_2 && (param_3 != param_4))) {
    *param_5 = *param_5 + 1;
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    sVar3 = (**(code **)(**(longlong **)(param_6 + 8) + 0x40))(*(longlong **)(param_6 + 8),uVar2);
    sVar4 = (**(code **)(**(longlong **)(param_6 + 8) + 0x40))(*(longlong **)(param_6 + 8),uVar1);
    if (sVar3 != sVar4) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return puVar5;
}

