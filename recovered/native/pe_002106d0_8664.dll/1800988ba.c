/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800988ba */

void Unwind_1800988ba(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x97) == '\0') {
    lVar3 = *(longlong *)(param_2 + 0x80);
    lVar2 = *(longlong *)(param_2 + 0x88);
    do {
      lVar1 = lVar2 + -0x20 + lVar3;
      lVar3 = lVar3 + -0x20;
      FUN_1800010ec(lVar1);
    } while (lVar3 != 0x118);
  }
  return;
}

