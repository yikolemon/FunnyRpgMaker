/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012b6e8 */

undefined8 FUN_14012b6e8(longlong param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = 0x23;
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) && (uVar1 = 6, -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x28))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0xa0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014012b72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x80));
      return uVar1;
    }
    FUN_14012b2c6();
    uVar1 = 0;
  }
  return uVar1;
}

