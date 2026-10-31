/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b003 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075b003(void)

{
  float *pfVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint unaff_retaddr;
  int local_res8;
  
  pfVar1 = (float *)(ulonglong)unaff_retaddr;
  uVar3 = (ulonglong)_DAT_150af8759;
  uVar4 = (ulonglong)*(uint *)(uVar3 + 0x14cc);
  if (((((*(float *)(uVar4 + 0x290) <= pfVar1[3] && pfVar1[3] != *(float *)(uVar4 + 0x290)) &&
        (pfVar1[1] <= *(float *)(uVar4 + 0x298) && *(float *)(uVar4 + 0x298) != pfVar1[1])) &&
       (*(float *)(uVar4 + 0x28c) <= pfVar1[2] && pfVar1[2] != *(float *)(uVar4 + 0x28c))) &&
      (*pfVar1 <= *(float *)(uVar4 + 0x294) && *(float *)(uVar4 + 0x294) != *pfVar1)) ||
     (((local_res8 != 0 &&
       (((local_res8 == *(int *)(uVar3 + 0x1528) || (local_res8 == *(int *)(uVar3 + 0x1550))) ||
        ((local_res8 == *(int *)(uVar3 + 0x2044) || (local_res8 == *(int *)(uVar3 + 0x2058))))))) ||
      (uVar2 = CONCAT71((uint7)(uint3)((uint)local_res8 >> 8),1),
      *(char *)(uVar3 + 0x1526) == '\x01')))) {
    uVar2 = 0;
  }
  return uVar2;
}

