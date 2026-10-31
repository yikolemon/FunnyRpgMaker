/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046fd15 */

int __cdecl
FUN_0046fd15(int param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  char local_24;
  char local_22;
  char local_20;
  char local_1e;
  
  pbVar1 = param_2 + 2;
  iVar10 = 3;
  if (pbVar1 <= param_3) {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    iVar11 = (uint)bVar2 * 0x100 + (uint)bVar3;
    if (pbVar1 + iVar11 * 4 <= param_3) {
      iVar12 = *(int *)(param_1 + 0xc);
      uVar6 = *(undefined2 *)(iVar12 + 4);
      uVar7 = *(undefined2 *)(iVar12 + 6);
      bVar4 = *(byte *)(iVar12 + 8);
      uVar8 = *(undefined2 *)(iVar12 + 10);
      uVar9 = *(undefined2 *)(iVar12 + 0xc);
      bVar5 = *(byte *)(iVar12 + 0xe);
      if (iVar11 == 0) {
        iVar10 = 0;
      }
      else {
        iVar11 = 0;
        do {
          iVar10 = FUN_0046f202((int *)param_1,
                                (uint)(ushort)(*(ushort *)(pbVar1 + iVar11 * 4) << 8 |
                                              *(ushort *)(pbVar1 + iVar11 * 4) >> 8),
                                (char)param_2[iVar11 * 4 + 4] + param_4,
                                (char)param_2[iVar11 * 4 + 5] + param_5,param_6 + 1,'\0');
          if (iVar10 != 0) break;
          bVar13 = (uint)bVar2 * 0x100 + (uint)bVar3 + -1 != iVar11;
          iVar11 = iVar11 + 1;
        } while (bVar13);
        iVar12 = *(int *)(param_1 + 0xc);
      }
      local_24 = (char)uVar6;
      *(short *)(iVar12 + 4) = (short)local_24;
      local_22 = (char)uVar7;
      *(short *)(*(int *)(param_1 + 0xc) + 6) = (short)local_22;
      *(ushort *)(*(int *)(param_1 + 0xc) + 8) = (ushort)bVar4;
      local_20 = (char)uVar8;
      *(short *)(*(int *)(param_1 + 0xc) + 10) = (short)local_20;
      local_1e = (char)uVar9;
      *(short *)(*(int *)(param_1 + 0xc) + 0xc) = (short)local_1e;
      *(ushort *)(*(int *)(param_1 + 0xc) + 0xe) = (ushort)bVar5;
      *(ushort *)(*(int *)(param_1 + 0xc) + 2) = (ushort)*(byte *)(*(int *)(param_1 + 8) + 4);
      **(ushort **)(param_1 + 0xc) = (ushort)**(byte **)(param_1 + 8);
    }
  }
  return iVar10;
}

