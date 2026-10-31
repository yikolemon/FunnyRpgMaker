/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180132577 */

void FUN_180132577(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x29a0);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 4;
    do {
      if (*(int *)(lVar2 + 0x14) == *param_1) {
        *(undefined4 *)(lVar2 + 0x14) = 0;
        *(undefined2 *)(lVar2 + 0x1c) = 0xffff;
        return;
      }
      lVar2 = lVar2 + *(int *)(lVar2 + -4);
    } while (lVar2 != *(int *)(DAT_180419160 + 0x2998) + lVar1 + 4);
  }
  return;
}

