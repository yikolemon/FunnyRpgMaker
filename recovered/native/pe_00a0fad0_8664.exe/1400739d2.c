/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400739d2 */

void FUN_1400739d2(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar2;
  
  if (0x7fefffffffffffff < (param_2 & 0x7fffffffffffffff)) {
                    /* WARNING: Could not recover jumptable at 0x000140073a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_14016f8cd,4);
    return;
  }
  puVar1 = param_1 + 2;
  lVar2 = FUN_140073ad3(puVar1,param_1 + 10);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)*param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140073a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((longlong *)*param_1,puVar1,lVar2 - (longlong)puVar1,UNRECOVERED_JUMPTABLE);
  return;
}

