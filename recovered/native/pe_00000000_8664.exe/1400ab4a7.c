/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ab4a7 */

void FUN_1400ab4a7(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x29a0);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 4;
    do {
      if (*(int *)(lVar2 + 0x14) == *param_1) {
        *(undefined4 *)(lVar2 + 0x14) = 0;
        *(undefined2 *)(lVar2 + 0x1c) = 0xffff;
        return;
      }
      lVar2 = lVar2 + *(int *)(lVar2 + -4);
    } while (lVar2 != *(int *)(DAT_140f2a910 + 0x2998) + lVar1 + 4);
  }
  return;
}

