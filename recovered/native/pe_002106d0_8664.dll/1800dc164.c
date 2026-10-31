/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dc164 */

void FUN_1800dc164(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1800dc1c2(param_1,**(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_1800c31d2(param_1 + 8);
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

