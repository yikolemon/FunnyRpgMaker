/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140055114 */

undefined8 FUN_140055114(longlong *param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
  plVar2 = FUN_14001d3fa(*(longlong *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((puVar1 != (undefined8 *)0x0 && plVar2 != (longlong *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014005515d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2);
    return uVar3;
  }
  return 0;
}

