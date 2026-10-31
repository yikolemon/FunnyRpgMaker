/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401054be */

void Unwind_1401054be(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38) + 0x70;
  lVar2 = -0x60;
  do {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_140077b90();
    }
    lVar1 = lVar1 + -0x30;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 != 0);
  return;
}

