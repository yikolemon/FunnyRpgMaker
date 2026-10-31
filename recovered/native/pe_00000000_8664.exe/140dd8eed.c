/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd8eed */

void FUN_140dd8eed(int *param_1)

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
  if ((((*(int *)(uVar9 + 0x88) != 0) && (*(int *)(uVar9 + 0x88) != 0x51ae00)) &&
      (*(uint *)(uVar9 + 0x7c) != 0)) && (*(int *)(ulonglong)*(uint *)(uVar9 + 0x7c) == 0)) {
    uVar6 = *(uint *)(uVar9 + 0x84);
    if ((uVar6 != 0) && (*(int *)(ulonglong)uVar6 == 0)) {
      uStack_28 = 0x140dd8f29;
      FUN_140dd41d0();
      uStack_28 = *(ulonglong *)(uVar9 + 0x88);
      uStack_30 = 0x140dd8f34;
      FUN_140dd8296();
      param_1 = (int *)(ulonglong)uVar6;
    }
    uVar6 = *(uint *)(uVar9 + 0x80);
    piVar4 = param_1;
    if ((uVar6 != 0) && (*(int *)(ulonglong)uVar6 == 0)) {
      uStack_28 = 0x140dd8f4b;
      FUN_140dd41d0(param_1);
      uStack_28 = *(ulonglong *)(uVar9 + 0x88);
      uStack_30 = 0x140dd8f56;
      FUN_140dd85b1();
      piVar4 = (int *)(ulonglong)uVar6;
    }
    param_1 = *(int **)(uVar9 + 0x7c);
    uStack_28 = 0x140dd8f60;
    FUN_140dd41d0(piVar4);
    uStack_28 = *(ulonglong *)(uVar9 + 0x88);
    uStack_30 = 0x140dd8f6b;
    FUN_140dd41d0();
  }
  puVar7 = &uStack_28;
  uStack_28 = uVar3;
  if ((*(uint *)(uVar9 + 0x8c) != 0) &&
     (puVar7 = &uStack_28, *(int *)(ulonglong)*(uint *)(uVar9 + 0x8c) == 0)) {
    uStack_30 = (ulonglong)(*(int *)(uVar9 + 0x90) - 0xfe);
    uStack_38 = 0x140dd8f8f;
    FUN_140dd41d0(param_1);
    uStack_38 = (ulonglong)(*(int *)(uVar9 + 0x94) - 0x80);
    uStack_40 = 0x140dd8fa2;
    FUN_140dd41d0();
    uStack_40 = (ulonglong)(*(int *)(uVar9 + 0x98) - 0x80);
    uStack_48 = 0x140dd8fb0;
    FUN_140dd41d0();
    uStack_48 = *(undefined8 *)(uVar9 + 0x8c);
    FUN_140dd41d0();
    puVar7 = (ulonglong *)(ulonglong)((int)&uStack_48 + 0x10);
  }
  puVar7[-1] = *(undefined8 *)(uVar9 + 0x9c);
  puVar7[-2] = 0x140dd8fc9;
  FUN_140dd9087();
  uVar5 = puVar7[-1];
  puVar7[-1] = 6;
  uVar3 = puVar7[-1];
  uVar6 = uVar10 + 0xa0;
  *(int *)(uVar8 - 4) = (int)uVar3;
  uVar10 = uVar10 + 0x28;
  do {
    iVar1 = (int)uVar3;
    puVar11 = (uint *)(ulonglong)uVar10;
    if (puVar11[-2] != 0x51af48) {
      uVar2 = *puVar11;
      if ((uVar2 != 0) && (*(int *)(ulonglong)uVar2 == 0)) {
        puVar7[-1] = (ulonglong)uVar2;
        puVar7[-2] = 0x140dd8ff3;
        FUN_140dd41d0(uVar5);
        puVar7[-2] = *(undefined8 *)(ulonglong)uVar6;
        puVar7[-3] = 0x140dd8ffa;
        FUN_140dd41d0();
        uVar5 = puVar7[-1];
      }
      iVar1 = *(int *)(uVar8 - 4);
    }
    if (puVar11[-3] != 0) {
      uVar2 = puVar11[-1];
      if ((uVar2 != 0) && (*(int *)(ulonglong)uVar2 == 0)) {
        puVar7[-1] = (ulonglong)uVar2;
        puVar7[-2] = 0x140dd9017;
        FUN_140dd41d0(uVar5);
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
  *puVar7 = 0x140dd9031;
  FUN_140dd41d0(uVar5);
  return;
}

