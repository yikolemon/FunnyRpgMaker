/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407642b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407642b4(void)

{
  ulonglong uVar1;
  longlong lVar2;
  uint unaff_retaddr;
  
  uVar1 = (ulonglong)*(uint *)((ulonglong)_DAT_150b01a0b + 0x14cc);
  lVar2 = 0x274;
  if ((*(int *)(uVar1 + 0x1e8) == 0) &&
     (lVar2 = 0x274, *(int *)((ulonglong)_DAT_150b01a0b + 0x2308) == 0)) {
    lVar2 = 0x2a4;
  }
  *(ulonglong *)(ulonglong)unaff_retaddr =
       CONCAT44((float)((ulonglong)*(undefined8 *)(uVar1 + lVar2) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(uVar1 + 0x144) >> 0x20),
                (float)*(undefined8 *)(uVar1 + lVar2) - (float)*(undefined8 *)(uVar1 + 0x144));
  return;
}

