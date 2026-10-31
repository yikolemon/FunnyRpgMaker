/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180109f29 */

void FUN_180109f29(void)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = DAT_180419160;
  if (*(char *)(DAT_180419160 + 0x2970) == '\0') {
    if (*(longlong *)(DAT_180419160 + 0x50) != 0) {
      FUN_18011d5ac();
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
        FUN_180106514();
      }
      *(undefined4 *)(lVar1 + 0x2974) = 0;
    }
  }
  return;
}

