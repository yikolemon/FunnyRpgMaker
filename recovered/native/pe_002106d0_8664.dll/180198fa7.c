/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180198fa7 */

void FUN_180198fa7(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x2a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3[2] == param_1) {
        *puVar3 = *(undefined8 *)(param_1 + 0x5c);
        puVar3[1] = param_1 + 0x88;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}

