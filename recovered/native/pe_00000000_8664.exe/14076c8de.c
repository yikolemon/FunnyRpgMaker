/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c8de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076c8de(void)

{
  ulonglong uVar1;
  float fVar2;
  float unaff_retaddr;
  undefined4 local_res8;
  
  uVar1 = (ulonglong)*(uint *)((ulonglong)_DAT_150b0a030 + 0x14cc);
  if (*(char *)(uVar1 + 0xfe) == '\0') {
    if ((unaff_retaddr != 0.0) || (NAN(unaff_retaddr))) {
      fVar2 = 0.0;
      if (0.0 <= local_res8) {
        fVar2 = local_res8;
      }
      *(float *)(uVar1 + 0x144) =
           unaff_retaddr + (*(float *)(uVar1 + 0x50) - *(float *)(uVar1 + 0xc4)) + fVar2 +
           *(float *)(uVar1 + 400) + *(float *)(uVar1 + 0x18c);
    }
    else {
      if (local_res8 < 0.0) {
        local_res8 = *(float *)((ulonglong)_DAT_150b0a030 + 0xd1c);
      }
      *(float *)(uVar1 + 0x144) = local_res8 + *(float *)(uVar1 + 0x14c);
    }
    *(undefined4 *)(uVar1 + 0x148) = *(undefined4 *)(uVar1 + 0x150);
    *(undefined4 *)(uVar1 + 0x170) = *(undefined4 *)(uVar1 + 0x178);
    *(undefined4 *)(uVar1 + 0x16c) = *(undefined4 *)(uVar1 + 0x174);
    *(undefined4 *)(uVar1 + 0x17c) = *(undefined4 *)(uVar1 + 0x180);
    *(undefined1 *)(uVar1 + 0x184) = 1;
  }
  return;
}

