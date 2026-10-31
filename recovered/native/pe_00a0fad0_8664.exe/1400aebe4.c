/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aebe4 */

undefined * FUN_1400aebe4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400aec04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    return puVar2;
  }
  lVar3 = FUN_14001750a(&DAT_1401cc9c8,param_2);
  if (lVar3 != DAT_1401cc9c8) {
    puVar2 = (undefined *)FUN_14001748a(&DAT_1401cc9c8,param_2);
    return puVar2;
  }
  return &DAT_1401cc9d8;
}

