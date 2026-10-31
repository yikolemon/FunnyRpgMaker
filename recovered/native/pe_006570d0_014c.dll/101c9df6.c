/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c9df6 */

void __fastcall FUN_101c9df6(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(uint *)(param_1 + 8) != 0) {
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x1c) >> 3) {
      FUN_101c9e3c(**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
    }
    else {
      FUN_101ca01e();
      puVar3 = *(undefined4 **)(param_1 + 0xc);
      puVar1 = *(undefined4 **)(param_1 + 0x10);
      if (puVar3 != puVar1) {
        uVar2 = *(undefined4 *)(param_1 + 4);
        do {
          *puVar3 = uVar2;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
    }
  }
  return;
}

