/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140098dd8 */

void Unwind_140098dd8(undefined8 param_1,longlong param_2)

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
      FUN_140005242(lVar1);
    } while (lVar3 != 0x118);
  }
  return;
}

