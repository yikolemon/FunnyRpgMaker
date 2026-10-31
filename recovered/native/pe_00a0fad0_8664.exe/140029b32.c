/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140029b32 */

void Unwind_140029b32(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    lVar3 = *(longlong *)(param_2 + 0x78);
    while (lVar3 != lVar2) {
      lVar3 = *(longlong *)(param_2 + 0x78);
      FUN_1400017de(lVar3);
      lVar3 = lVar3 + 0x20;
      *(longlong *)(param_2 + 0x78) = lVar3;
    }
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x88);
  }
  return;
}

