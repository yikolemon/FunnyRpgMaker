/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118f66 */

uint FUN_180118f66(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  uVar4 = DAT_180419160;
  pbVar5 = (byte *)FUN_1800fdb8a(DAT_180419160,0x1000);
  bVar1 = *pbVar5;
  pbVar5 = (byte *)FUN_1800fdb8a(uVar4,0x2000);
  bVar2 = *pbVar5;
  pbVar5 = (byte *)FUN_1800fdb8a(uVar4,0x4000);
  bVar3 = *pbVar5;
  pbVar5 = (byte *)FUN_1800fdb8a(uVar4,0x8000);
  return (uint)*pbVar5 << 0xf | (uint)bVar3 << 0xe | (uint)bVar2 << 0xd | (uint)bVar1 << 0xc;
}

