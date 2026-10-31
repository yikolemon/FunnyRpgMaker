/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114148 */

uint FUN_10114148(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  uVar4 = DAT_1039d74c;
  pbVar5 = (byte *)FUN_100f9590(DAT_1039d74c,0x1000);
  bVar1 = *pbVar5;
  pbVar5 = (byte *)FUN_100f9590(uVar4,0x2000);
  bVar2 = *pbVar5;
  pbVar5 = (byte *)FUN_100f9590(uVar4,0x4000);
  bVar3 = *pbVar5;
  pbVar5 = (byte *)FUN_100f9590(uVar4,0x8000);
  return (uint)*pbVar5 << 0xf | (uint)bVar3 << 0xe | (uint)bVar2 << 0xd | (uint)bVar1 << 0xc;
}

