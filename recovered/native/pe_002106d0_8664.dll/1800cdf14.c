/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cdf14 */

void FUN_1800cdf14(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800cdf72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}

