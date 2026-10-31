/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009227e */

uint FUN_14009227e(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  uVar4 = DAT_140f2a910;
  pbVar5 = (byte *)FUN_140076e46(DAT_140f2a910,0x1000);
  bVar1 = *pbVar5;
  pbVar5 = (byte *)FUN_140076e46(uVar4,0x2000);
  bVar2 = *pbVar5;
  pbVar5 = (byte *)FUN_140076e46(uVar4,0x4000);
  bVar3 = *pbVar5;
  pbVar5 = (byte *)FUN_140076e46(uVar4,0x8000);
  return (uint)*pbVar5 << 0xf | (uint)bVar3 << 0xe | (uint)bVar2 << 0xd | (uint)bVar1 << 0xc;
}

