/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140076199 */

undefined8
FUN_140076199(longlong param_1,byte *param_2,byte *param_3,int param_4,int param_5,int param_6)

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
  undefined8 uVar11;
  undefined4 extraout_var;
  longlong lVar12;
  uint uVar13;
  
  pbVar1 = param_2 + 2;
  uVar11 = 3;
  if (pbVar1 <= param_3) {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    uVar13 = (uint)bVar2 * 0x100 + (uint)bVar3;
    if (pbVar1 + (ulonglong)uVar13 * 4 <= param_3) {
      lVar12 = *(longlong *)(param_1 + 0x18);
      uVar6 = *(undefined2 *)(lVar12 + 4);
      uVar7 = *(undefined2 *)(lVar12 + 6);
      bVar4 = *(byte *)(lVar12 + 8);
      uVar8 = *(undefined2 *)(lVar12 + 10);
      uVar9 = *(undefined2 *)(lVar12 + 0xc);
      bVar5 = *(byte *)(lVar12 + 0xe);
      if (uVar13 == 0) {
        uVar11 = 0;
      }
      else {
        lVar12 = 0;
        do {
          iVar10 = FUN_1400755f1((longlong *)param_1,
                                 (uint)(ushort)(*(ushort *)(pbVar1 + lVar12 * 4) << 8 |
                                               *(ushort *)(pbVar1 + lVar12 * 4) >> 8),
                                 (char)param_2[lVar12 * 4 + 4] + param_4,
                                 (char)param_2[lVar12 * 4 + 5] + param_5,param_6 + 1,'\0');
          uVar11 = CONCAT44(extraout_var,iVar10);
          if (iVar10 != 0) break;
          iVar10 = (int)lVar12;
          lVar12 = lVar12 + 1;
        } while (CONCAT11(bVar2,bVar3) - 1 != iVar10);
        lVar12 = *(longlong *)(param_1 + 0x18);
      }
      *(short *)(lVar12 + 4) = (short)(char)uVar6;
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
  return uVar11;
}

