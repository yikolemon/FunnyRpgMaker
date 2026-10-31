/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd05a */

void __thiscall FUN_101dd05a(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  uVar3 = *(undefined4 *)(*param_1 + 100);
  iVar1 = param_1[5] + param_2;
  puVar8 = (ushort *)(param_1[5] + param_2);
  puVar9 = puVar8 + 3;
  uVar5 = *puVar8 << 8 | *puVar8 >> 8;
  uVar4 = puVar8[2];
  bVar2 = *(byte *)((int)puVar8 + 5);
  do {
    if ((ushort *)((uint)(byte)uVar4 * 0x200 + iVar1 + 6 + (uint)bVar2 * 2) <= puVar9) {
      return;
    }
    puVar8 = (ushort *)((uint)*(byte *)((int)puVar9 + 1) + iVar1 + (uint)(byte)*puVar9 * 0x100);
    uVar6 = uVar5;
    if (uVar5 == 7) {
      uVar6 = puVar8[1] << 8 | puVar8[1] >> 8;
      puVar8 = (ushort *)
               ((int)puVar8 +
               (uint)*(byte *)((int)puVar8 + 7) +
               (uint)(byte)puVar8[3] * 0x100 + (uint)*(byte *)((int)puVar8 + 5) * 0x10000 +
               (uint)(byte)puVar8[2] * 0x1000000);
    }
    if (uVar6 == 1) {
      if ((ushort)(*puVar8 << 8 | *puVar8 >> 8) == 1) {
        iVar7 = FUN_101dd24e(uVar3);
      }
      else {
        iVar7 = FUN_101dd2da(uVar3);
      }
    }
    else {
      iVar7 = FUN_101dd368(uVar3);
    }
    puVar9 = puVar9 + 1;
  } while (iVar7 == 0);
  return;
}

