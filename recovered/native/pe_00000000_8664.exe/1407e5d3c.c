/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e5d3c */

void FUN_1407e5d3c(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong unaff_RBX;
  undefined1 *puVar10;
  int *piVar11;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  undefined8 *puVar8;
  
  iVar6 = (int)(unaff_RBX >> 0x20);
  if (*param_1 == iVar6) {
    return;
  }
  piVar11 = (int *)(unaff_RBX & 0xffffffff);
  uVar5 = param_1[4];
  uVar7 = (ulonglong)(uint)(*param_1 * 3);
  *(int *)((ulonglong)uVar5 + 8 + uVar7 * 8) = piVar11[2];
  *(undefined8 *)((ulonglong)uVar5 + uVar7 * 8) = *(undefined8 *)piVar11;
  iVar1 = *param_1;
  uVar5 = param_1[4];
  *(int *)((ulonglong)uVar5 + 0x14 + (ulonglong)(uint)(iVar1 * 3) * 8) = piVar11[5];
  *(undefined8 *)((ulonglong)uVar5 + 0xc + (ulonglong)(uint)(iVar1 * 3) * 8) =
       *(undefined8 *)(piVar11 + 3);
  *param_1 = iVar6;
  uVar5 = param_1[4];
  uVar7 = (ulonglong)(uint)(iVar6 * 0x18);
  piVar11[2] = *(int *)((ulonglong)uVar5 + 8 + uVar7);
  *(undefined8 *)piVar11 = *(undefined8 *)(uVar5 + uVar7);
  uVar5 = param_1[4];
  *(undefined8 *)(piVar11 + 3) = *(undefined8 *)((ulonglong)uVar5 + 0xc + uVar7);
  iVar6 = *(int *)((ulonglong)uVar5 + 0x14 + uVar7);
  piVar11[5] = iVar6;
  piVar11[0xd] = iVar6 + piVar11[3] * 2;
  puVar10 = &stack0xffffffffffffffe8;
  if (*piVar11 != 0) {
    uVar9 = *piVar11 * 0x40 + piVar11[2];
    uVar5 = uVar9 - 0x40;
    puVar8 = (undefined8 *)(ulonglong)uVar5;
    puVar10 = &stack0xffffffffffffffe8;
    if (uVar5 != 0) {
      puStack_28 = (undefined8 *)(ulonglong)((int)unaff_RBX + 0x48);
      if (*(int *)((ulonglong)uVar9 - 0x18) == 0) {
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puStack_28 + 4);
        uVar2 = *puStack_28;
        uVar3 = puStack_28[1];
        uVar4 = puStack_28[3];
        puVar8[2] = puStack_28[2];
        puVar8[3] = uVar4;
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
        return;
      }
      uStack_20 = 0x24;
      puStack_30 = puVar8;
      iVar6 = FUN_1408b14b0();
      puVar10 = (undefined1 *)(ulonglong)((int)&puStack_30 + 0xc);
      if (iVar6 == 0) {
        return;
      }
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1407e5ded;
  FUN_1407dfc44(piVar11);
  return;
}

