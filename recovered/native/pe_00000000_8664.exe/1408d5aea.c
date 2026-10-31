/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d5aea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d5aea(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  longlong unaff_RBP;
  longlong unaff_R13;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_RBP + -0x2c8) = *(byte *)(unaff_RBP + -0x2c8) & 0xfe;
  if (_DAT_150c7afac != 0) {
    return;
  }
  *(double *)(unaff_RBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_RBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar4 = *(ushort *)(unaff_RBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_RBP + -0x8e) = (int)cVar1;
        goto LAB_1408d5bd6;
      }
      uVar4 = *(ushort *)(unaff_RBP + -0x2ca) & 0x7ff0;
      if (uVar4 == 0) {
        *(undefined4 *)(unaff_RBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)_DAT_150bfb7b4);
        if (ABS(in_ST0) < (float10)_DAT_150bfb7b4) {
          in_ST0 = in_ST0 * (float10)(double)CONCAT62(uRam0000000150bfb7e2,_DAT_150bfb7e0);
        }
        goto LAB_1408d5bd6;
      }
    }
    if (uVar4 == 0x7ff0) {
      *(undefined4 *)(unaff_RBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)(double)CONCAT26(_DAT_150bfb7e0,_DAT_150bfb7da));
      if ((float10)(double)CONCAT26(_DAT_150bfb7e0,_DAT_150bfb7da) < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)_DAT_150bfb806;
      }
      goto LAB_1408d5bd6;
    }
  }
  if ((*(ushort *)(unaff_RBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_RBP + -0x8e) = 8;
LAB_1408d5bd6:
  uVar2 = *(uint *)(unaff_RBP + -0x94);
  *(uint *)(unaff_R13 + -0x8a) = uVar2;
  iVar3 = (int)unaff_RBP;
  if ((*(byte *)(unaff_RBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(ulonglong)(iVar3 - 0x86) = *(undefined4 *)(ulonglong)(iVar3 + 8);
    ((undefined4 *)(ulonglong)(iVar3 - 0x86))[1] = ((undefined4 *)(ulonglong)(iVar3 + 8))[1];
    if (*(char *)((ulonglong)uVar2 + 0xc) != '\x01') {
      *(undefined4 *)(ulonglong)(iVar3 - 0x7e) = *(undefined4 *)(ulonglong)(iVar3 + 0x10);
      ((undefined4 *)(ulonglong)(iVar3 - 0x7e))[1] = ((undefined4 *)(ulonglong)(iVar3 + 0x10))[1];
    }
  }
  *(double *)(unaff_RBP + -0x76) = (double)in_ST0;
  FUN_1408dec60();
  return;
}

