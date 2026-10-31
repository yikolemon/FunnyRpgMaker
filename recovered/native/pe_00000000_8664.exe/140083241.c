/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140083241 */

void FUN_140083241(void)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = DAT_140f2a910;
  if (*(char *)(DAT_140f2a910 + 0x2970) == '\0') {
    if (*(longlong *)(DAT_140f2a910 + 0x50) != 0) {
      FUN_140096868();
    }
    *(undefined1 *)(lVar1 + 0x2970) = 1;
  }
  if (0.0 < *(float *)(lVar1 + 0x2974)) {
    fVar2 = *(float *)(lVar1 + 0x2974) - *(float *)(lVar1 + 0x48);
    *(float *)(lVar1 + 0x2974) = fVar2;
    if (fVar2 <= 0.0) {
      if (*(longlong *)(lVar1 + 0x50) == 0) {
        *(undefined1 *)(lVar1 + 0xec) = 1;
      }
      else {
        FUN_14007f82c();
      }
      *(undefined4 *)(lVar1 + 0x2974) = 0;
    }
  }
  return;
}

