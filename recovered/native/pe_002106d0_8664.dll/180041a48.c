/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041a48 */

void FUN_180041a48(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_180044980();
  lVar2 = *param_2;
  *param_2 = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_18023d6e0(uVar1);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180041ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}

