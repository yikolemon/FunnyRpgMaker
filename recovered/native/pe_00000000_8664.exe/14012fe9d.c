/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012fe9d */

void FUN_14012fe9d(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    lVar3 = FUN_14012ad43(puVar1 + 0x23,param_1);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x28))();
      }
      FUN_14012ad5f(puVar1 + 0x23,lVar3);
      FUN_140128b39(uVar2,lVar3);
      FUN_14012fe7b(puVar1);
      return;
    }
  }
  return;
}

