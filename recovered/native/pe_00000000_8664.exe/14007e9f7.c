/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007e9f7 */

void FUN_14007e9f7(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x15a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x15b0);
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar3) + 0x31c) = 0xffffffff;
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if (*(longlong *)(param_1 + 0x29a0) != 0) {
    *(undefined8 *)(param_1 + 0x2998) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x29a0) = 0;
  }
  return;
}

