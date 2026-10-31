/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00459c36 */

void __fastcall FUN_00459c36(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      bVar2 = *(byte *)(param_1 + iVar1) << 4 | *(byte *)(param_1 + iVar1) >> 4;
      uVar3 = CONCAT11(bVar2,bVar2) & 0x33ff;
      uVar4 = CONCAT11((char)(uVar3 >> 8) << 2,(byte)uVar3 >> 2) & 0xffffff33;
      bVar2 = (byte)uVar4 | (byte)(uVar4 >> 8);
      uVar3 = CONCAT11(bVar2,bVar2) & 0x55ff;
      uVar4 = CONCAT11((char)(uVar3 >> 8) * '\x02',(byte)uVar3 >> 1) & 0xffffff55;
      *(byte *)(param_1 + iVar1) = (byte)uVar4 | (byte)(uVar4 >> 8);
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
  }
  return;
}

