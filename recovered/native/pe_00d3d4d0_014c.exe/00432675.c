/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00432675 */

void __fastcall FUN_00432675(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  
  uVar5 = *(uint *)(param_1 + 0x48 + param_2 * 0x544);
  if (uVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(int *)(param_2 * 0x544 + param_1 + 0x40) * 0x2c + uVar5;
  }
  if (uVar5 < uVar10) {
    uVar1 = *(uint *)(param_1 + 0xac0);
    uVar7 = (uint)(param_2 != 0);
    uVar6 = (ushort)(param_2 != 0) * 4 + 4;
    do {
      iVar8 = *(int *)(uVar5 + 0x24);
      if ((2 - (param_2 == 0) & uVar1) == 0) {
        iVar3 = *(int *)(uVar5 + 8);
        iVar4 = *(int *)(uVar5 + 4);
        do {
          puVar9 = (ushort *)(iVar8 + 0x24);
          do {
            puVar2 = *(ushort **)puVar9;
            *(int *)(puVar2 + uVar7 * 2 + 8) = *(int *)(puVar2 + uVar7 * 2 + 8) + (iVar3 - iVar4);
            *puVar2 = *puVar2 | uVar6;
            puVar9 = puVar2 + 0x10;
          } while (puVar2 != *(ushort **)(iVar8 + 0x28));
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *(int *)(uVar5 + 0x24));
      }
      else {
        do {
          puVar9 = (ushort *)(iVar8 + 0x24);
          do {
            puVar2 = *(ushort **)puVar9;
            *(undefined4 *)(puVar2 + uVar7 * 2 + 8) = *(undefined4 *)(uVar5 + 8);
            *puVar2 = *puVar2 | uVar6;
            puVar9 = puVar2 + 0x10;
          } while (puVar2 != *(ushort **)(iVar8 + 0x28));
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *(int *)(uVar5 + 0x24));
      }
      uVar5 = uVar5 + 0x2c;
    } while (uVar5 < uVar10);
  }
  return;
}

