/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001f56c */

undefined8 * FUN_18001f56c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = std::_Node_assert::vftable;
  puVar2 = (undefined8 *)param_1[4];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x28);
  }
  return param_1;
}

