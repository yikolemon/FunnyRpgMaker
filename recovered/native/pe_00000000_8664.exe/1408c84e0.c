/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c84e0 */

uint FUN_1408c84e0(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  uint unaff_retaddr;
  uint local_res8;
  
  pbVar5 = (byte *)(ulonglong)unaff_retaddr;
  pbVar4 = (byte *)(ulonglong)local_res8;
  if ((unaff_retaddr & 3) != 0) {
    if ((unaff_retaddr & 1) != 0) {
      bVar3 = *pbVar5;
      pbVar5 = (byte *)(ulonglong)(unaff_retaddr + 1);
      bVar6 = bVar3 < *pbVar4;
      if (bVar3 != *pbVar4) goto LAB_1408c8528;
      pbVar4 = (byte *)(ulonglong)(local_res8 + 1);
      if (bVar3 == 0) {
        return 0;
      }
      if ((unaff_retaddr + 1 & 2) == 0) goto LAB_1408c84f0;
    }
    uVar1 = *(undefined2 *)pbVar5;
    pbVar5 = (byte *)(ulonglong)((int)pbVar5 + 2);
    bVar3 = (byte)uVar1;
    bVar6 = bVar3 < *pbVar4;
    if (bVar3 != *pbVar4) goto LAB_1408c8528;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar6 = bVar3 < pbVar4[1];
    if (bVar3 != pbVar4[1]) goto LAB_1408c8528;
    if (bVar3 == 0) {
      return 0;
    }
    pbVar4 = (byte *)(ulonglong)((int)pbVar4 + 2);
  }
LAB_1408c84f0:
  while( true ) {
    uVar2 = *(undefined4 *)pbVar5;
    bVar3 = (byte)uVar2;
    bVar6 = bVar3 < *pbVar4;
    if (bVar3 != *pbVar4) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 8);
    bVar6 = bVar3 < pbVar4[1];
    if (bVar3 != pbVar4[1]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x10);
    bVar6 = bVar3 < pbVar4[2];
    if (bVar3 != pbVar4[2]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    bVar6 = bVar3 < pbVar4[3];
    if (bVar3 != pbVar4[3]) break;
    pbVar4 = (byte *)(ulonglong)((int)pbVar4 + 4);
    pbVar5 = (byte *)(ulonglong)((int)pbVar5 + 4);
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_1408c8528:
  return -(uint)bVar6 | 1;
}

