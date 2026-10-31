/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407663d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407663d8(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint unaff_retaddr;
  
  if ((*(byte *)((ulonglong)unaff_retaddr + 0xd) & 1) == 0) {
    pbVar3 = (byte *)((ulonglong)_DAT_fc0570f1039d74c | 0x2600);
    bVar1 = *pbVar3;
    bVar2 = (byte)_DAT_fc0570f1039d74c;
    *pbVar3 = *pbVar3 + bVar2;
    if (!CARRY1(bVar1,bVar2)) {
      *(undefined4 *)(pbVar3 + 0x26cc) = *(undefined4 *)(pbVar3 + 0x4c);
    }
  }
  return;
}

