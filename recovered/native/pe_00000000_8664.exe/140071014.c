/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140071014 */

void FUN_140071014(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_140071078(param_1,**(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_140071208((undefined8 *)(param_1 + 8));
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

