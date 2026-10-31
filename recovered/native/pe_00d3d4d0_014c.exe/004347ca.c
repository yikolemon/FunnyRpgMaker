/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004347ca */

void __fastcall FUN_004347ca(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  iVar3 = *(int *)(*param_1 + 100);
  iVar1 = param_1[5] + param_3;
  puVar8 = (ushort *)(param_1[5] + param_3);
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
        iVar7 = FUN_004349be(param_2,(int)puVar8,iVar3);
      }
      else {
        iVar7 = FUN_00434a4a(param_2,(int)puVar8,iVar3);
      }
    }
    else {
      iVar7 = FUN_00434ad8(param_2,(int)puVar8,iVar3);
    }
    puVar9 = puVar9 + 1;
  } while (iVar7 == 0);
  return;
}

