/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140050ea0 */

undefined8 FUN_140050ea0(longlong *param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(*(longlong **)(*param_1 + 0x3e0))[0x21a];
  plVar2 = FUN_14001d3fa(**(longlong **)(*param_1 + 0x3e0),"pshinter");
  if ((puVar1 != (undefined8 *)0x0 && plVar2 != (longlong *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140050ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2);
    return uVar3;
  }
  return 0;
}

