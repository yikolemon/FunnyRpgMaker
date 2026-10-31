/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e2ea */

void __thiscall FUN_1007e2ea(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  
  if (param_1 != param_2) {
    iVar3 = **(int **)(param_1 + 0xc);
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = **(undefined4 **)(param_1 + 0x10);
    uVar6 = **(undefined4 **)(param_1 + 0x20);
    uVar7 = **(undefined4 **)(param_1 + 0x30);
    uVar8 = **(undefined4 **)(param_1 + 0x2c);
    uVar1 = *(undefined1 *)(param_1 + 0x3d);
    uVar2 = *(undefined1 *)(param_1 + 0x48);
    iVar9 = *(int *)(param_1 + 0x4c);
    uVar10 = *(undefined4 *)(param_1 + 0x38);
    uVar11 = *(undefined4 *)(param_1 + 0x44);
    uVar12 = *(undefined4 *)(param_1 + 0x40);
    FUN_10074268(*(int *)(param_2 + 0x4c),*(int *)(param_2 + 0x4c) != 0);
    uVar16 = **(undefined4 **)(param_2 + 0x20);
    uVar13 = **(undefined4 **)(param_2 + 0x30);
    **(undefined4 **)(param_1 + 0x10) = **(undefined4 **)(param_2 + 0x10);
    **(undefined4 **)(param_1 + 0x20) = uVar16;
    **(undefined4 **)(param_1 + 0x30) = uVar13;
    iVar14 = **(int **)(param_2 + 0xc);
    iVar15 = **(int **)(param_2 + 0x1c);
    if (iVar14 == param_2 + 0x3c) {
      **(int **)(param_1 + 0xc) = param_1 + 0x3c;
      if (iVar15 == iVar14) {
        **(int **)(param_1 + 0x1c) = param_1 + 0x3c;
        uVar16 = 1;
      }
      else {
        **(int **)(param_1 + 0x1c) = param_1 + 0x3d;
        uVar16 = 0;
      }
    }
    else {
      uVar16 = **(undefined4 **)(param_2 + 0x2c);
      **(int **)(param_1 + 0xc) = iVar14;
      **(int **)(param_1 + 0x1c) = iVar15;
    }
    **(undefined4 **)(param_1 + 0x2c) = uVar16;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    FUN_10074268(iVar9,iVar9 != 0);
    **(undefined4 **)(param_2 + 0x10) = uVar5;
    **(undefined4 **)(param_2 + 0x20) = uVar6;
    **(undefined4 **)(param_2 + 0x30) = uVar7;
    if (iVar3 == param_1 + 0x3c) {
      **(int **)(param_2 + 0xc) = param_2 + 0x3c;
      if (iVar4 == param_1 + 0x3c) {
        **(int **)(param_2 + 0x1c) = param_2 + 0x3c;
        **(undefined4 **)(param_2 + 0x2c) = 1;
      }
      else {
        **(int **)(param_2 + 0x1c) = param_2 + 0x3d;
        **(undefined4 **)(param_2 + 0x2c) = 0;
      }
    }
    else {
      **(int **)(param_2 + 0xc) = iVar3;
      **(int **)(param_2 + 0x1c) = iVar4;
      **(undefined4 **)(param_2 + 0x2c) = uVar8;
    }
    *(undefined4 *)(param_2 + 0x38) = uVar10;
    *(undefined4 *)(param_2 + 0x40) = uVar12;
    *(undefined4 *)(param_2 + 0x44) = uVar11;
    *(undefined1 *)(param_2 + 0x3d) = uVar1;
    *(undefined1 *)(param_2 + 0x48) = uVar2;
    uVar5 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0x50) = uVar5;
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_2 + 0x54) = uVar5;
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    *(undefined1 *)(param_2 + 0x3c) = uVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_2 + 0x34) = uVar5;
  }
  return;
}

