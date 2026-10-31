/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180207ad8 */

undefined8 FUN_180207ad8(longlong *param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x1d8);
  lVar2 = FUN_1801caa22(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),"pshinter");
  if ((puVar1 != (undefined8 *)0x0 && lVar2 != 0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180207b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(lVar2);
    return uVar3;
  }
  return 0;
}

