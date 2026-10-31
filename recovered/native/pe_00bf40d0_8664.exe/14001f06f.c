/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f06f */

undefined8 FUN_14001f06f(longlong param_1,ulonglong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  uVar1 = 0x23;
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) && (uVar1 = 6, -1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0x28))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0xa0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014001f0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x80));
      return uVar1;
    }
    FUN_14001ec4d(param_1,param_2);
    uVar1 = 0;
  }
  return uVar1;
}

