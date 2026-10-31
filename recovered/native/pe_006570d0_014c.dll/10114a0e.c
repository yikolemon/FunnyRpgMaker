/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114a0e */

void FUN_10114a0e(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    if ((param_1 != 0.0) || (NAN(param_1))) {
      fVar2 = 0.0;
      if (0.0 <= param_2) {
        fVar2 = param_2;
      }
      *(float *)(iVar1 + 0x144) =
           param_1 + (*(float *)(iVar1 + 0x50) - *(float *)(iVar1 + 0xc4)) + fVar2 +
           *(float *)(iVar1 + 400) + *(float *)(iVar1 + 0x18c);
    }
    else {
      if (param_2 < 0.0) {
        param_2 = *(float *)(DAT_1039d74c + 0xd1c);
      }
      *(float *)(iVar1 + 0x144) = param_2 + *(float *)(iVar1 + 0x14c);
    }
    *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(iVar1 + 0x150);
    *(undefined4 *)(iVar1 + 0x170) = *(undefined4 *)(iVar1 + 0x178);
    *(undefined4 *)(iVar1 + 0x16c) = *(undefined4 *)(iVar1 + 0x174);
    *(undefined4 *)(iVar1 + 0x17c) = *(undefined4 *)(iVar1 + 0x180);
    *(undefined1 *)(iVar1 + 0x184) = 1;
  }
  return;
}

