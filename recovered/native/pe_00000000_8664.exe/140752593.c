/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752593 */

uint FUN_140752593(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong unaff_RBX;
  uint unaff_EBP;
  uint uVar6;
  byte *pbVar7;
  
  uVar6 = (uint)(unaff_RBX >> 0x20);
  pbVar5 = (byte *)(unaff_RBX & 0xffffffff);
  uVar3 = ~unaff_EBP;
  uVar2 = uVar3;
  if (uVar6 == 0) {
    bVar1 = *pbVar5;
    while (bVar1 != 0) {
      pbVar7 = (byte *)(ulonglong)((int)pbVar5 + 1);
      if (((bVar1 == 0x23) && (*pbVar7 == 0x23)) && (pbVar5[2] == 0x23)) {
        pbVar7 = (byte *)(ulonglong)((int)pbVar5 + 3);
        uVar2 = uVar3;
      }
      else {
        uVar2 = uVar2 >> 8 ^ *(uint *)((ulonglong)(uVar2 & 0xff ^ (uint)bVar1) * 4 + 0x102b7c58);
      }
      pbVar5 = pbVar7;
      bVar1 = *pbVar7;
    }
  }
  else {
    do {
      uVar4 = (int)pbVar5 + 1;
      if (((uVar6 - 1 < 2 || *pbVar5 != 0x23) || (*(char *)(ulonglong)uVar4 != '#')) ||
         (pbVar5[2] != 0x23)) {
        uVar2 = uVar2 >> 8 ^ *(uint *)((ulonglong)(uVar2 & 0xff ^ (uint)*pbVar5) * 4 + 0x102b7c58);
        uVar6 = uVar6 - 1;
      }
      else {
        uVar4 = (int)pbVar5 + 3;
        uVar6 = uVar6 - 3;
        uVar2 = uVar3;
      }
      pbVar5 = (byte *)(ulonglong)uVar4;
    } while (uVar6 != 0);
  }
  return ~uVar2;
}

