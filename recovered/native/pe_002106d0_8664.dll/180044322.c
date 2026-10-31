/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044322 */

void FUN_180044322(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    FUN_180016c8e(plVar1,*param_1,*(undefined8 *)(*plVar1 + 8));
    thunk_FUN_1802464a0(*plVar1,0x50);
    return;
  }
  return;
}

