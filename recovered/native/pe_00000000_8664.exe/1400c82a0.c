/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c82a0 */

void FUN_1400c82a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910;
  *(longlong *)(DAT_140f2a910 + 0x1fb8) = param_1;
  *(undefined4 *)(lVar2 + 0x1fb0) = *(undefined4 *)(lVar2 + 0x1f9c);
  lVar1 = *(longlong *)(lVar2 + 0x2638);
  if (lVar1 == 0) {
    *(uint *)(lVar2 + 0x1fac) = *(uint *)(lVar2 + 0x1fac) | 0x200000;
  }
  else {
    *(uint *)(lVar2 + 0x1fac) = *(uint *)(lVar2 + 0x1fac) | 0x600000;
    if (*(longlong *)(lVar1 + 0x10) == param_1) {
      *(undefined1 *)(lVar1 + 0x55) = 1;
      return;
    }
  }
  return;
}

