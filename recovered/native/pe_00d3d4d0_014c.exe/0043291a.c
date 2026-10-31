/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043291a */

void __fastcall FUN_0043291a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  
  iVar1 = *(int *)(param_1 + 0x18);
  puVar7 = *(ushort **)(param_1 + 0x1c);
  puVar8 = puVar7 + iVar1 * 0x14;
  puVar9 = *(undefined4 **)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x24);
  if (param_2 == 0) {
    uVar13 = 4;
    puVar4 = puVar7;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 8);
        *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(puVar4 + 2);
        puVar4 = puVar4 + 0x14;
      } while (puVar4 < puVar8);
    }
  }
  else {
    uVar13 = 8;
    puVar4 = puVar7;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 10);
        *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(puVar4 + 4);
        puVar4 = puVar4 + 0x14;
      } while (puVar4 < puVar8);
    }
  }
  if (iVar2 < 1) {
LAB_00432a7a:
    if (param_2 == 0) {
      if (0 < iVar1) {
        do {
          *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar7 + 0xc);
          puVar7 = puVar7 + 0x14;
        } while (puVar7 < puVar8);
      }
    }
    else if (0 < iVar1) {
      do {
        *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(puVar7 + 0xc);
        puVar7 = puVar7 + 0x14;
      } while (puVar7 < puVar8);
    }
    return;
  }
  puVar5 = puVar9 + iVar2;
LAB_004329a6:
  puVar4 = (ushort *)*puVar9;
  puVar3 = *(ushort **)(puVar4 + 0x12);
  for (puVar12 = puVar4; puVar12 <= puVar3; puVar12 = puVar12 + 0x14) {
    puVar11 = puVar12;
    if ((uVar13 & *puVar12) != 0) goto LAB_004329d2;
  }
  goto LAB_00432a6f;
LAB_004329d2:
  puVar10 = puVar11;
  if (puVar10 < puVar3) goto code_r0x004329d8;
  goto LAB_004329e3;
code_r0x004329d8:
  puVar11 = puVar10 + 0x14;
  if ((uVar13 & puVar10[0x14]) != 0) goto LAB_004329d2;
LAB_004329e3:
  puVar6 = puVar10 + 0x14;
  puVar11 = puVar6;
  if (puVar6 <= puVar3) {
    while ((uVar13 & *puVar11) == 0) {
      puVar11 = puVar11 + 0x14;
      if (puVar3 < puVar11) goto LAB_00432a17;
    }
    FUN_004336d3((uint)puVar6,(uint)(puVar11 + -0x14),(int)puVar10,(int)puVar11);
    goto LAB_004329d2;
  }
LAB_00432a17:
  if (puVar12 == puVar10) {
    FUN_004337b0((uint)puVar4,(uint)puVar3,(uint)puVar12);
  }
  else {
    if (puVar10 < puVar3) {
      FUN_004336d3((uint)puVar6,(uint)puVar3,(int)puVar10,(int)puVar12);
    }
    if (puVar7 < puVar12) {
      FUN_004336d3((uint)puVar4,(uint)(puVar12 + -0x14),(int)puVar10,(int)puVar12);
    }
  }
LAB_00432a6f:
  puVar9 = puVar9 + 1;
  if (puVar5 <= puVar9) goto LAB_00432a7a;
  goto LAB_004329a6;
}

