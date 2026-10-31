/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c397 */

undefined8 FUN_14001c397(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014001c3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong **)(param_1 + 0x90),"font-format");
      return uVar1;
    }
  }
  return 0;
}

