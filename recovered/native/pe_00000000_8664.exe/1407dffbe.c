/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407dffbe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407dffbe(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  double *pdVar4;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  
  pdVar4 = (double *)(ulonglong)((int)&stack0x00000000 - 0x18);
  uVar2 = (uint)(_DAT_150ae133f + *(float *)((longlong)pdVar4 + 0x1c));
  if (uVar2 < 0x40) {
    return (ulonglong)*(byte *)((ulonglong)*(uint *)(param_1 + 0x2c) + 0x1dc + (ulonglong)uVar2);
  }
  uVar1 = *(undefined4 *)((ulonglong)*(uint *)(param_1 + 0x2c) + 0x20);
  *(float *)((longlong)pdVar4 + 4) = *(float *)((longlong)pdVar4 + 0x1c);
  *(undefined4 *)pdVar4 = uVar1;
  pdVar4[-1] = 2.65657450455162e-314;
  FUN_14074225a();
  *(float *)((longlong)pdVar4 + 0x14) = (float)in_ST0;
  *pdVar4 = (double)(_DAT_150a6b44a -
                    *(float *)((longlong)pdVar4 + 0x14) / *(float *)((longlong)pdVar4 + 0x1c));
  pdVar4[-1] = 2.65657452678457e-314;
  FUN_1408c49d0();
  *(float *)(pdVar4 + 2) = (float)in_ST1;
  *pdVar4 = (double)(_DAT_150a9963f / *(float *)(pdVar4 + 2));
  pdVar4[-1] = 2.65657454259467e-314;
  FUN_1408c5280();
  *(float *)((longlong)pdVar4 + 0xc) = (float)in_ST2;
  *(uint *)pdVar4 =
       (int)*(float *)((longlong)pdVar4 + 0xc) -
       ((int)*(float *)((longlong)pdVar4 + 0xc) + 1 >> 0x1f) & 0xfffffffe;
  *(uint *)(pdVar4 + 1) = 0x200;
  *(uint *)((longlong)pdVar4 + 4) = 4;
  pdVar4[-1] = 2.65657456532169e-314;
  uVar3 = FUN_14077dc6a();
  return uVar3;
}

