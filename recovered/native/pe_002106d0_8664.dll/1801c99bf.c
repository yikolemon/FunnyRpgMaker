/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c99bf */

undefined8 FUN_1801c99bf(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801c99de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong **)(param_1 + 0x90),"font-format");
      return uVar1;
    }
  }
  return 0;
}

