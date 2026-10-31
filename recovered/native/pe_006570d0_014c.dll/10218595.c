/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10218595 */

int FUN_10218595(int param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  char local_24;
  char local_22;
  char local_20;
  char local_1e;
  
  iVar9 = 3;
  if (param_2 + 2 <= param_3) {
    bVar1 = *param_2;
    bVar2 = param_2[1];
    iVar10 = (uint)bVar1 * 0x100 + (uint)bVar2;
    if (param_2 + 2 + iVar10 * 4 <= param_3) {
      iVar11 = *(int *)(param_1 + 0xc);
      uVar5 = *(undefined2 *)(iVar11 + 4);
      uVar6 = *(undefined2 *)(iVar11 + 6);
      bVar3 = *(byte *)(iVar11 + 8);
      uVar7 = *(undefined2 *)(iVar11 + 10);
      uVar8 = *(undefined2 *)(iVar11 + 0xc);
      bVar4 = *(byte *)(iVar11 + 0xe);
      if (iVar10 == 0) {
        iVar9 = 0;
      }
      else {
        iVar10 = 0;
        do {
          iVar9 = FUN_10217a82((char)param_2[iVar10 * 4 + 4] + param_4,
                               (char)param_2[iVar10 * 4 + 5] + param_5,param_6 + 1,0);
          if (iVar9 != 0) break;
          bVar12 = (uint)bVar1 * 0x100 + (uint)bVar2 + -1 != iVar10;
          iVar10 = iVar10 + 1;
        } while (bVar12);
        iVar11 = *(int *)(param_1 + 0xc);
      }
      local_24 = (char)uVar5;
      *(short *)(iVar11 + 4) = (short)local_24;
      local_22 = (char)uVar6;
      *(short *)(*(int *)(param_1 + 0xc) + 6) = (short)local_22;
      *(ushort *)(*(int *)(param_1 + 0xc) + 8) = (ushort)bVar3;
      local_20 = (char)uVar7;
      *(short *)(*(int *)(param_1 + 0xc) + 10) = (short)local_20;
      local_1e = (char)uVar8;
      *(short *)(*(int *)(param_1 + 0xc) + 0xc) = (short)local_1e;
      *(ushort *)(*(int *)(param_1 + 0xc) + 0xe) = (ushort)bVar4;
      *(ushort *)(*(int *)(param_1 + 0xc) + 2) = (ushort)*(byte *)(*(int *)(param_1 + 8) + 4);
      **(ushort **)(param_1 + 0xc) = (ushort)**(byte **)(param_1 + 8);
    }
  }
  return iVar9;
}

