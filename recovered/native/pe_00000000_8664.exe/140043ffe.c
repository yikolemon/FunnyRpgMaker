/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140043ffe */

void FUN_140043ffe(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar2;
  
  if (0x7fefffffffffffff < (param_2 & 0x7fffffffffffffff)) {
                    /* WARNING: Could not recover jumptable at 0x00014004403d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"null",4);
    return;
  }
  puVar1 = param_1 + 2;
  lVar2 = FUN_1400440ff(puVar1,param_1 + 10);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)*param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014004406d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((longlong *)*param_1,puVar1,lVar2 - (longlong)puVar1,UNRECOVERED_JUMPTABLE);
  return;
}

