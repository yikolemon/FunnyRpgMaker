/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101db1aa */

void __fastcall FUN_101db1aa(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  
  iVar1 = *(int *)(param_1 + 0x18);
  puVar6 = *(ushort **)(param_1 + 0x1c);
  puVar7 = puVar6 + iVar1 * 0x14;
  puVar8 = *(undefined4 **)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  if (param_2 == 0) {
    uVar11 = 4;
    puVar4 = puVar6;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 8);
        *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(puVar4 + 2);
        puVar4 = puVar4 + 0x14;
      } while (puVar4 < puVar7);
    }
  }
  else {
    uVar11 = 8;
    puVar4 = puVar6;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 10);
        *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(puVar4 + 4);
        puVar4 = puVar4 + 0x14;
      } while (puVar4 < puVar7);
    }
  }
  if (iVar2 < 1) {
LAB_101db30a:
    if (param_2 == 0) {
      if (0 < iVar1) {
        do {
          *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar6 + 0xc);
          puVar6 = puVar6 + 0x14;
        } while (puVar6 < puVar7);
      }
    }
    else if (0 < iVar1) {
      do {
        *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(puVar6 + 0xc);
        puVar6 = puVar6 + 0x14;
      } while (puVar6 < puVar7);
    }
    return;
  }
  puVar5 = puVar8 + iVar2;
LAB_101db236:
  puVar4 = (ushort *)*puVar8;
  puVar3 = *(ushort **)(puVar4 + 0x12);
  for (; puVar4 <= puVar3; puVar4 = puVar4 + 0x14) {
    puVar10 = puVar4;
    if ((uVar11 & *puVar4) != 0) goto LAB_101db262;
  }
  goto LAB_101db2ff;
LAB_101db262:
  puVar9 = puVar10;
  if (puVar9 < puVar3) goto code_r0x101db268;
  goto LAB_101db273;
code_r0x101db268:
  puVar10 = puVar9 + 0x14;
  if ((uVar11 & puVar9[0x14]) != 0) goto LAB_101db262;
LAB_101db273:
  puVar10 = puVar9 + 0x14;
  if (puVar10 <= puVar3) {
    while ((uVar11 & *puVar10) == 0) {
      puVar10 = puVar10 + 0x14;
      if (puVar3 < puVar10) goto LAB_101db2a7;
    }
    FUN_101dbf63(puVar9,puVar10);
    goto LAB_101db262;
  }
LAB_101db2a7:
  if (puVar4 == puVar9) {
    FUN_101dc040(puVar4);
  }
  else {
    if (puVar9 < puVar3) {
      FUN_101dbf63(puVar9,puVar4);
    }
    if (puVar6 < puVar4) {
      FUN_101dbf63(puVar9,puVar4);
    }
  }
LAB_101db2ff:
  puVar8 = puVar8 + 1;
  if (puVar5 <= puVar8) goto LAB_101db30a;
  goto LAB_101db236;
}

