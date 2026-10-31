/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b43d1 */

void FUN_1801b43d1(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = 0;
    do {
      FUN_1801b43d1(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1801b4414(param_1);
  return;
}

