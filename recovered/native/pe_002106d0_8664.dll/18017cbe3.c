/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017cbe3 */

undefined8 FUN_18017cbe3(longlong param_1,longlong param_2)

{
  ushort uVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  
  iVar4 = 0;
  pcVar2 = "bad size list";
  lVar9 = 0;
  do {
    if (0 < *(int *)(param_2 + lVar9 * 4)) {
      iVar12 = 0x100;
      if (0x100 < iVar4) {
        iVar12 = iVar4;
      }
      lVar7 = 0;
      do {
        *(char *)((longlong)iVar4 + param_1 + 0x500 + lVar7) = (char)lVar9 + '\x01';
        if ((iVar4 - iVar12) + (int)lVar7 == 0) goto LAB_18017cd52;
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(param_2 + lVar9 * 4));
      iVar4 = iVar4 + (int)lVar7;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x10);
  *(undefined1 *)(param_1 + 0x500 + (longlong)iVar4) = 0;
  uVar10 = 0;
  uVar6 = 1;
  pcVar2 = "bad code lengths";
  uVar8 = 0;
  do {
    *(uint *)(param_1 + 0x64c + uVar6 * 4) = uVar8 - uVar10;
    lVar9 = (longlong)(int)uVar8;
    if (uVar6 == *(byte *)(param_1 + 0x500 + lVar9)) {
      puVar13 = (undefined2 *)(param_1 + 0x200 + lVar9 * 2);
      pbVar5 = (byte *)(lVar9 + param_1 + 0x501);
      do {
        uVar11 = uVar10;
        *puVar13 = (short)uVar11;
        uVar10 = uVar11 + 1;
        bVar3 = *pbVar5;
        puVar13 = puVar13 + 1;
        uVar8 = uVar8 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 == bVar3);
      if (uVar11 >> ((byte)uVar6 & 0x1f) != 0) {
LAB_18017cd52:
        FUN_1801765d0(pcVar2);
        return 0;
      }
    }
    *(uint *)(param_1 + 0x604 + uVar6 * 4) = uVar10 << (0x10 - (byte)uVar6 & 0x1f);
    uVar10 = uVar10 * 2;
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x11) {
      *(undefined4 *)(param_1 + 0x648) = 0xffffffff;
      FUN_1802a89a0(param_1,0xff);
      if (0 < (int)uVar8) {
        uVar6 = 0;
        do {
          bVar3 = *(byte *)(param_1 + 0x500 + uVar6);
          if (bVar3 < 10) {
            uVar1 = *(ushort *)(param_1 + 0x200 + uVar6 * 2);
            bVar3 = 9 - bVar3;
            lVar9 = 0;
            do {
              *(char *)(((ulonglong)uVar1 << (bVar3 & 0x3f)) + param_1 + lVar9) = (char)uVar6;
              lVar9 = lVar9 + 1;
            } while ((uint)lVar9 >> (bVar3 & 0x1f) == 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
      return 1;
    }
  } while( true );
}

