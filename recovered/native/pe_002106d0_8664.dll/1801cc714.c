/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc714 */

undefined8 FUN_1801cc714(longlong param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = 0x23;
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) && (uVar1 = 6, -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x28))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0xa0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801cc758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x80));
      return uVar1;
    }
    FUN_1801cc2f2();
    uVar1 = 0;
  }
  return uVar1;
}

