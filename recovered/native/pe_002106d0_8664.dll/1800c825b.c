/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c825b */

void Unwind_1800c825b(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_2 + 0x3a6) = 0;
  lVar2 = param_2 + 0x160;
  do {
    lVar1 = lVar2 + -0x40;
    FUN_180004cea(lVar2 + -0x18);
    FUN_180001ef2(lVar2 + -0x38);
    lVar2 = lVar1;
  } while (lVar1 != param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x3a6) = 0;
  return;
}

