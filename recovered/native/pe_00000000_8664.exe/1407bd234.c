/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd234 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bd234(void)

{
  uint uVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  pfVar2 = (float *)(ulonglong)((int)&stack0xffffffffffffffe8 - 8);
  uVar4 = (ulonglong)_DAT_150b5a98c;
  uVar1 = *(uint *)(uVar4 + 0x2308);
  uVar3 = (ulonglong)uVar1;
  if (*(char *)(uVar3 + 0x1ed) == '\0') {
    *pfVar2 = (float)uVar1;
    pfVar2[-2] = 3.9347131;
    pfVar2[-1] = 1.4013e-45;
    FUN_1407b9056();
  }
  fVar5 = pfVar2[6];
  if (*(char *)(uVar3 + 0x1ee) == '\x01') {
    *pfVar2 = (float)uVar1;
    pfVar2[-2] = 3.9347181;
    pfVar2[-1] = 1.4013e-45;
    FUN_1407bb89e();
  }
  *(uint *)(uVar3 + 0x68) = (uint)fVar5 & 0xffff | *(int *)(uVar3 + 0x68) << 0x10;
  *(undefined4 *)(uVar3 + 0x5c) = *(undefined4 *)(uVar4 + 0xd30);
  *(float *)(uVar3 + 0x58) = pfVar2[7];
  *pfVar2 = (float)uVar1;
  pfVar2[-2] = 3.934729;
  pfVar2[-1] = 1.4013e-45;
  FUN_1407bd2df();
  fVar5 = *(float *)(uVar3 + 0x5c) + *(float *)(uVar3 + 0x5c) + *(float *)(uVar3 + 0x54);
  *(float *)(uVar3 + 0x54) = fVar5;
  pfVar2[1] = pfVar2[7] + *(float *)(uVar3 + 0x50);
  *pfVar2 = fVar5;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar2 + -2) = &UNK_1407bd2c8;
  FUN_140755a9a();
}

