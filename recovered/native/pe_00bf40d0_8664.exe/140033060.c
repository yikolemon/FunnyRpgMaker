/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033060 */

void FUN_140033060(longlong param_1,int param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort uVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  puVar13 = *(ushort **)(param_1 + 0x20);
  puVar9 = *(undefined8 **)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x1c);
  puVar10 = puVar13 + (longlong)iVar3 * 0x18;
  iVar4 = *(int *)(param_1 + 0x2c);
  if (param_2 == 0) {
    uVar8 = 4;
    puVar6 = puVar13;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar6 + 8);
        *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(puVar6 + 2);
        puVar6 = puVar6 + 0x18;
      } while (puVar6 < puVar10);
    }
  }
  else {
    uVar8 = 8;
    puVar6 = puVar13;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar6 + 10);
        *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(puVar6 + 4);
        puVar6 = puVar6 + 0x18;
      } while (puVar6 < puVar10);
    }
  }
  if (iVar4 < 1) {
LAB_1400331c0:
    if (param_2 == 0) {
      if (0 < iVar3) {
        do {
          *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(puVar13 + 0xc);
          puVar13 = puVar13 + 0x18;
        } while (puVar13 < puVar10);
      }
    }
    else if (0 < iVar3) {
      do {
        *(undefined4 *)(puVar13 + 10) = *(undefined4 *)(puVar13 + 0xc);
        puVar13 = puVar13 + 0x18;
      } while (puVar13 < puVar10);
    }
    return;
  }
  puVar2 = puVar9 + iVar4;
LAB_1400330f8:
  puVar6 = (ushort *)*puVar9;
  puVar5 = *(ushort **)(puVar6 + 0x14);
  for (puVar7 = puVar6; puVar7 <= puVar5; puVar7 = puVar7 + 0x18) {
    puVar12 = puVar7;
    if ((uVar8 & *puVar7) != 0) goto LAB_140033123;
  }
  goto LAB_1400331b3;
LAB_140033123:
  puVar11 = puVar12;
  if (puVar11 < puVar5) goto code_r0x00014003312b;
  goto LAB_140033138;
code_r0x00014003312b:
  puVar12 = puVar11 + 0x18;
  if ((uVar8 & puVar11[0x18]) != 0) goto LAB_140033123;
LAB_140033138:
  puVar1 = puVar11 + 0x18;
  puVar12 = puVar1;
  if (puVar1 <= puVar5) {
    while ((uVar8 & *puVar12) == 0) {
      puVar12 = puVar12 + 0x18;
      if (puVar5 < puVar12) goto LAB_14003316a;
    }
    FUN_140033f1c((ulonglong)puVar1,(ulonglong)(puVar12 + -0x18),(longlong)puVar11,(longlong)puVar12
                 );
    goto LAB_140033123;
  }
LAB_14003316a:
  if (puVar7 == puVar11) {
    FUN_140033fed((ulonglong)puVar6,(ulonglong)puVar5,(ulonglong)puVar7);
  }
  else {
    if (puVar11 < puVar5) {
      FUN_140033f1c((ulonglong)puVar1,(ulonglong)puVar5,(longlong)puVar11,(longlong)puVar7);
    }
    if (puVar13 < puVar7) {
      FUN_140033f1c((ulonglong)puVar6,(ulonglong)(puVar7 + -0x18),(longlong)puVar11,(longlong)puVar7
                   );
    }
  }
LAB_1400331b3:
  puVar9 = puVar9 + 1;
  if (puVar2 <= puVar9) goto LAB_1400331c0;
  goto LAB_1400330f8;
}

