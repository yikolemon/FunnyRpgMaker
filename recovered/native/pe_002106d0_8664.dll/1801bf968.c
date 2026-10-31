/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bf968 */

void Unwind_1801bf968(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28) + 0x70;
  lVar2 = -0x60;
  do {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1800fe8d4();
    }
    lVar1 = lVar1 + -0x30;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0);
  return;
}

