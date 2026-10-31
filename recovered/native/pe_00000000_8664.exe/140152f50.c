/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140152f50 */

undefined8 FUN_140152f50(longlong *param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
  lVar2 = FUN_1401299f6(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
  if ((puVar1 != (undefined8 *)0x0 && lVar2 != 0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140152f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(lVar2);
    return uVar3;
  }
  return 0;
}

