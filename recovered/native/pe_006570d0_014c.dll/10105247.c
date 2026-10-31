/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10105247 */

void FUN_10105247(void)

{
  int iVar1;
  float fVar2;
  
  iVar1 = DAT_1039d74c;
  if (*(char *)(DAT_1039d74c + 0x26c8) == '\0') {
    if (*(int *)(DAT_1039d74c + 0x50) != 0) {
      FUN_10118619(*(int *)(DAT_1039d74c + 0x50));
    }
    *(undefined1 *)(iVar1 + 0x26c8) = 1;
  }
  if ((0.0 < *(float *)(iVar1 + 0x26cc)) &&
     (fVar2 = *(float *)(iVar1 + 0x26cc) - *(float *)(iVar1 + 0x48),
     *(float *)(iVar1 + 0x26cc) = fVar2, fVar2 <= 0.0)) {
    if (*(int *)(iVar1 + 0x50) == 0) {
      *(undefined1 *)(iVar1 + 0xc0) = 1;
    }
    else {
      FUN_101019e9(*(int *)(iVar1 + 0x50));
    }
    *(undefined4 *)(iVar1 + 0x26cc) = 0;
  }
  return;
}

