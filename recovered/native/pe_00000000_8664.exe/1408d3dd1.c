/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3dd1 */

void FUN_1408d3dd1(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint unaff_EDI;
  uint uVar10;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uVar3;
  uint *puVar11;
  
  uVar3 = (ulonglong)unaff_EDI;
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar10 = *(uint *)(uVar8 + 8);
  uVar9 = (ulonglong)uVar10;
  if ((((*(int *)(uVar9 + 0x88) != 0) && (*(int *)(uVar9 + 0x88) != 0x1039b380)) &&
      (*(uint *)(uVar9 + 0x7c) != 0)) && (*(int *)(ulonglong)*(uint *)(uVar9 + 0x7c) == 0)) {
    uVar6 = *(uint *)(uVar9 + 0x84);
    if ((uVar6 != 0) && (*(int *)(ulonglong)uVar6 == 0)) {
      uStack_28 = 0x1408d3e0d;
      FUN_1408cbff0();
      uStack_28 = *(ulonglong *)(uVar9 + 0x88);
      uStack_30 = 0x1408d3e18;
      FUN_1408d31c8();
      param_1 = (int *)(ulonglong)uVar6;
    }
    uVar6 = *(uint *)(uVar9 + 0x80);
    piVar4 = param_1;
    if ((uVar6 != 0) && (*(int *)(ulonglong)uVar6 == 0)) {
      uStack_28 = 0x1408d3e2f;
      FUN_1408cbff0(param_1);
      uStack_28 = *(ulonglong *)(uVar9 + 0x88);
      uStack_30 = 0x1408d3e3a;
      FUN_1408d34e3();
      piVar4 = (int *)(ulonglong)uVar6;
    }
    param_1 = *(int **)(uVar9 + 0x7c);
    uStack_28 = 0x1408d3e44;
    FUN_1408cbff0(piVar4);
    uStack_28 = *(ulonglong *)(uVar9 + 0x88);
    uStack_30 = 0x1408d3e4f;
    FUN_1408cbff0();
  }
  puVar7 = &uStack_28;
  uStack_28 = uVar3;
  if ((*(uint *)(uVar9 + 0x8c) != 0) &&
     (puVar7 = &uStack_28, *(int *)(ulonglong)*(uint *)(uVar9 + 0x8c) == 0)) {
    uStack_30 = (ulonglong)(*(int *)(uVar9 + 0x90) - 0xfe);
    uStack_38 = 0x1408d3e73;
    FUN_1408cbff0(param_1);
    uStack_38 = (ulonglong)(*(int *)(uVar9 + 0x94) - 0x80);
    uStack_40 = 0x1408d3e86;
    FUN_1408cbff0();
    uStack_40 = (ulonglong)(*(int *)(uVar9 + 0x98) - 0x80);
    uStack_48 = 0x1408d3e94;
    FUN_1408cbff0();
    uStack_48 = *(undefined8 *)(uVar9 + 0x8c);
    FUN_1408cbff0();
    puVar7 = (ulonglong *)(ulonglong)((int)&uStack_48 + 0x10);
  }
  puVar7[-1] = *(undefined8 *)(uVar9 + 0x9c);
  puVar7[-2] = 0x1408d3ead;
  FUN_1408d3f6b();
  uVar5 = puVar7[-1];
  puVar7[-1] = 6;
  uVar3 = puVar7[-1];
  uVar6 = uVar10 + 0xa0;
  *(int *)(uVar8 - 4) = (int)uVar3;
  uVar10 = uVar10 + 0x28;
  do {
    iVar1 = (int)uVar3;
    puVar11 = (uint *)(ulonglong)uVar10;
    if (puVar11[-2] != 0x1039b4c8) {
      uVar2 = *puVar11;
      if ((uVar2 != 0) && (*(int *)(ulonglong)uVar2 == 0)) {
        puVar7[-1] = (ulonglong)uVar2;
        puVar7[-2] = 0x1408d3ed7;
        FUN_1408cbff0(uVar5);
        puVar7[-2] = *(undefined8 *)(ulonglong)uVar6;
        puVar7[-3] = 0x1408d3ede;
        FUN_1408cbff0();
        uVar5 = puVar7[-1];
      }
      iVar1 = *(int *)(uVar8 - 4);
    }
    if (puVar11[-3] != 0) {
      uVar2 = puVar11[-1];
      if ((uVar2 != 0) && (*(int *)(ulonglong)uVar2 == 0)) {
        puVar7[-1] = (ulonglong)uVar2;
        puVar7[-2] = 0x1408d3efb;
        FUN_1408cbff0(uVar5);
        uVar5 = puVar7[-1];
      }
      iVar1 = *(int *)(uVar8 - 4);
    }
    uVar6 = uVar6 + 4;
    uVar10 = uVar10 + 0x10;
    uVar2 = iVar1 - 1;
    uVar3 = (ulonglong)uVar2;
    *(uint *)(uVar8 - 4) = uVar2;
  } while (uVar2 != 0);
  puVar7[1] = uVar9;
  *puVar7 = 0x1408d3f15;
  FUN_1408cbff0(uVar5);
  return;
}

