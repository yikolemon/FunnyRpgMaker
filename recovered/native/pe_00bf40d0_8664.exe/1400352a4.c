/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400352a4 */

void FUN_1400352a4(longlong *param_1,uint *param_2,ulonglong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 uVar9;
  
  lVar4 = *(longlong *)(*param_1 + 0x98);
  lVar2 = param_1[5] + (param_3 & 0xffffffff);
  puVar10 = (ushort *)(param_1[5] + (param_3 & 0xffffffff));
  puVar11 = puVar10 + 3;
  uVar6 = *puVar10 << 8 | *puVar10 >> 8;
  uVar5 = puVar10[2];
  bVar3 = *(byte *)((longlong)puVar10 + 5);
  do {
    if ((ushort *)((ulonglong)(byte)uVar5 * 0x200 + lVar2 + 6 + (ulonglong)bVar3 * 2) <= puVar11) {
      return;
    }
    puVar10 = (ushort *)
              ((ulonglong)*(byte *)((longlong)puVar11 + 1) + lVar2 +
              (ulonglong)(byte)*puVar11 * 0x100);
    uVar7 = uVar6;
    if (uVar6 == 7) {
      puVar1 = puVar10 + 1;
      puVar10 = (ushort *)
                ((longlong)puVar10 +
                (ulonglong)*(byte *)((longlong)puVar10 + 7) +
                (ulonglong)(byte)puVar10[3] * 0x100 +
                (ulonglong)*(byte *)((longlong)puVar10 + 5) * 0x10000 +
                (ulonglong)(byte)puVar10[2] * 0x1000000);
      uVar7 = *puVar1 << 8 | *puVar1 >> 8;
    }
    if (uVar7 == 1) {
      if ((ushort)(*puVar10 << 8 | *puVar10 >> 8) == 1) {
        uVar9 = FUN_1400354f8(param_2,(longlong)puVar10,lVar4);
        iVar8 = (int)uVar9;
      }
      else {
        uVar9 = FUN_14003559d(param_2,(longlong)puVar10,lVar4);
        iVar8 = (int)uVar9;
      }
    }
    else {
      uVar9 = FUN_140035647(param_2,(longlong)puVar10,lVar4);
      iVar8 = (int)uVar9;
    }
    puVar11 = puVar11 + 1;
  } while (iVar8 == 0);
  return;
}

