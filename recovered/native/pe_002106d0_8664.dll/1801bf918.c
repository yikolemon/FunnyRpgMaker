/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bf918 */

void Unwind_1801bf918(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30) + 0x30;
  if (lVar1 != 0) {
    lVar1 = -lVar1;
    lVar2 = *(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 0x30) + 0x40;
    do {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1800fe8d4();
      }
      lVar2 = lVar2 + -0x30;
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != 0);
  }
  return;
}

