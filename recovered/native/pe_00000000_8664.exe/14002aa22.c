/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002aa22 */

void FUN_14002aa22(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_14002aa9c(param_1,**(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_140018c4e((undefined8 *)(param_1 + 8),*(undefined8 **)(param_1 + 8));
    lVar1 = *(longlong *)(param_1 + 8);
    *(longlong *)lVar1 = lVar1;
    *(longlong *)(lVar1 + 8) = lVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    if (puVar4 != puVar2) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      do {
        *puVar4 = uVar3;
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar2);
    }
  }
  return;
}

