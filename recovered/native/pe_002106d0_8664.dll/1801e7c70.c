/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e7c70 */

void FUN_1801e7c70(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  uVar4 = *(undefined8 *)(*param_1 + 0x98);
  lVar2 = param_1[5] + (param_3 & 0xffffffff);
  puVar9 = (ushort *)(param_1[5] + (param_3 & 0xffffffff));
  puVar10 = puVar9 + 3;
  uVar6 = *puVar9 << 8 | *puVar9 >> 8;
  uVar5 = puVar9[2];
  bVar3 = *(byte *)((longlong)puVar9 + 5);
  do {
    if ((ushort *)((ulonglong)(byte)uVar5 * 0x200 + lVar2 + 6 + (ulonglong)bVar3 * 2) <= puVar10) {
      return;
    }
    puVar9 = (ushort *)
             ((ulonglong)*(byte *)((longlong)puVar10 + 1) + lVar2 +
             (ulonglong)(byte)*puVar10 * 0x100);
    uVar7 = uVar6;
    if (uVar6 == 7) {
      puVar1 = puVar9 + 1;
      puVar9 = (ushort *)
               ((longlong)puVar9 +
               (ulonglong)*(byte *)((longlong)puVar9 + 7) +
               (ulonglong)(byte)puVar9[3] * 0x100 +
               (ulonglong)*(byte *)((longlong)puVar9 + 5) * 0x10000 +
               (ulonglong)(byte)puVar9[2] * 0x1000000);
      uVar7 = *puVar1 << 8 | *puVar1 >> 8;
    }
    if (uVar7 == 1) {
      if ((ushort)(*puVar9 << 8 | *puVar9 >> 8) == 1) {
        iVar8 = FUN_1801e7ec4();
      }
      else {
        iVar8 = FUN_1801e7f69(param_2,puVar9,uVar4);
      }
    }
    else {
      iVar8 = FUN_1801e8013(param_2,puVar9,uVar4);
    }
    puVar10 = puVar10 + 1;
  } while (iVar8 == 0);
  return;
}

