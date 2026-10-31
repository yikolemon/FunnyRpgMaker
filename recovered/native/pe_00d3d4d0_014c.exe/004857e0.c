/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004857e0 */

uint __cdecl FUN_004857e0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_2 + 5);
    pbVar3 = (byte *)(param_1 + 5);
    do {
      bVar1 = *pbVar3;
      bVar4 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_00485813:
        return -(uint)bVar4 | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = pbVar3[1];
      bVar4 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_00485813;
      pbVar3 = pbVar3 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
  }
  return 0;
}

