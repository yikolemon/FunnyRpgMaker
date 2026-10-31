/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d0ec9 */

void FUN_1801d0ec9(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    lVar3 = FUN_1801cbd6f(puVar1 + 0x23,param_1);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x28))();
      }
      FUN_1801cbd8b(puVar1 + 0x23,lVar3);
      FUN_1801c9b65(uVar2,lVar3);
      FUN_1801d0ea7(puVar1);
      return;
    }
  }
  return;
}

