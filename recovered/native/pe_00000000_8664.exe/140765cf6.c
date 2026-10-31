/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765cf6 */

void FUN_140765cf6(void)

{
  ulonglong uVar1;
  byte bVar2;
  uint unaff_retaddr;
  byte unaff_retaddr_00;
  undefined4 local_res8;
  
  uVar1 = (ulonglong)unaff_retaddr;
  if ((local_res8 == 0) || (((int)*(uint *)(uVar1 + 0x120) >> 0x18 & local_res8) != 0)) {
    *(uint *)(uVar1 + 0x120) = *(uint *)(uVar1 + 0x120) & 0xf1ffffff;
    bVar2 = *(byte *)(uVar1 + 0xfc);
    if (*(char *)(uVar1 + 0xfd) == '\x01') {
      bVar2 = bVar2 ^ 1;
      *(byte *)(uVar1 + 0xfc) = bVar2;
    }
    *(bool *)(uVar1 + 0xfd) = bVar2 != unaff_retaddr_00;
  }
  return;
}

