/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401156b3 */

void FUN_1401156b3(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_140f2a910;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined1 *)(param_1 + 0x23c) = 1;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    *(undefined8 *)(param_1 + 400) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  *(undefined1 *)(param_1 + 0x24b) = 1;
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar2 = 0x54;
    lVar3 = 0;
    do {
      *(undefined2 *)(*(longlong *)(param_1 + 0x18) + lVar2) = 0xffff;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x74;
    } while (lVar3 < *(int *)(param_1 + 0x6c));
  }
  *(undefined4 *)
   (*(longlong *)(lVar1 + 0x2548) +
   (longlong)((int)((ulonglong)(param_1 - *(longlong *)(lVar1 + 0x2520)) >> 4) * -0x6eb3e453) * 4) =
       0xbf800000;
  return;
}

