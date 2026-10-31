/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016d6e3 */

void FUN_18016d6e3(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_180419160;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  *(undefined1 *)(param_1 + 0x23c) = 1;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    *(undefined8 *)(param_1 + 400) = 0;
    FUN_1800fe8d4();
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

