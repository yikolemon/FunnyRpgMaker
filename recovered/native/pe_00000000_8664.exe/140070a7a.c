/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140070a7a */

void FUN_140070a7a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_140070ad8(param_1,**(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_140070c68(param_1 + 8);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar3 != puVar1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      do {
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar1);
    }
  }
  return;
}

