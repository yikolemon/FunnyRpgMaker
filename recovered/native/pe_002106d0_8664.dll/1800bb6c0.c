/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb6c0 */

longlong * FUN_1800bb6c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != param_3) {
    puVar1 = (undefined8 *)param_2[1];
    *puVar1 = param_3;
    param_3[1] = (longlong)puVar1;
    lVar3 = 0;
    do {
      plVar2 = (longlong *)*param_2;
      FUN_18001828d(param_2 + 2);
      thunk_FUN_1802464a0(param_2,0x38);
      lVar3 = lVar3 + -1;
      param_2 = plVar2;
    } while (plVar2 != param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + lVar3;
  }
  return param_3;
}

