/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bfa8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1407bfa8b(void)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong unaff_RDI;
  
  uVar1 = *(uint *)((unaff_RDI >> 0x20) + 0x38);
  puVar2 = (undefined4 *)0x0;
  if ((uVar1 != 0xffffffff) &&
     (puVar2 = (undefined4 *)(ulonglong)(*(uint *)((ulonglong)_DAT_150b5d1ed + 0x26fc) + uVar1),
     (int)*(short *)((ulonglong)*(uint *)((ulonglong)_DAT_150b5d1ed + 0x26fc) + 0xe +
                    (ulonglong)uVar1) < *(int *)((unaff_RDI >> 0x20) + 0x40))) {
    *puVar2 = 0;
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

