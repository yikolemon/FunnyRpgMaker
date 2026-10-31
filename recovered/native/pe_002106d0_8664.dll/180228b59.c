/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180228b59 */

undefined8
FUN_180228b59(longlong param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6)

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
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  
  pbVar1 = param_2 + 2;
  uVar10 = 3;
  if (pbVar1 <= param_3) {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    uVar12 = (uint)bVar2 * 0x100 + (uint)bVar3;
    if (pbVar1 + (ulonglong)uVar12 * 4 <= param_3) {
      lVar11 = *(longlong *)(param_1 + 0x18);
      uVar6 = *(undefined2 *)(lVar11 + 4);
      uVar7 = *(undefined2 *)(lVar11 + 6);
      bVar4 = *(byte *)(lVar11 + 8);
      uVar8 = *(undefined2 *)(lVar11 + 10);
      uVar9 = *(undefined2 *)(lVar11 + 0xc);
      bVar5 = *(byte *)(lVar11 + 0xe);
      if (uVar12 == 0) {
        uVar10 = 0;
      }
      else {
        lVar11 = 0;
        do {
          uVar10 = FUN_180227fb1(param_1,*(ushort *)(pbVar1 + lVar11 * 4) << 8 |
                                         *(ushort *)(pbVar1 + lVar11 * 4) >> 8,
                                 (char)param_2[lVar11 * 4 + 4] + param_4,
                                 (char)param_2[lVar11 * 4 + 5] + param_5,param_6 + 1,0);
          if ((int)uVar10 != 0) break;
          iVar13 = (int)lVar11;
          lVar11 = lVar11 + 1;
        } while (CONCAT11(bVar2,bVar3) - 1 != iVar13);
        lVar11 = *(longlong *)(param_1 + 0x18);
      }
      *(short *)(lVar11 + 4) = (short)(char)uVar6;
      *(short *)(*(longlong *)(param_1 + 0x18) + 6) = (short)(char)uVar7;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 8) = (ushort)bVar4;
      *(short *)(*(longlong *)(param_1 + 0x18) + 10) = (short)(char)uVar8;
      *(short *)(*(longlong *)(param_1 + 0x18) + 0xc) = (short)(char)uVar9;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 0xe) = (ushort)bVar5;
      *(ushort *)(*(longlong *)(param_1 + 0x18) + 2) =
           (ushort)*(byte *)(*(longlong *)(param_1 + 0x10) + 4);
      **(ushort **)(param_1 + 0x18) = (ushort)**(byte **)(param_1 + 0x10);
    }
  }
  return uVar10;
}

