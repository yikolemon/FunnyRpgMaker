/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077dc81 */

void FUN_14077dc81(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int unaff_EBX;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  puVar6 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  puVar10 = (ulonglong *)((ulonglong)param_1 & 0xffffffff);
  uVar5 = *param_1 - param_2;
  if (1 < (int)uVar5) {
    *puVar6 = param_2 * 0xc;
    puVar6[1] = param_2;
    do {
      puVar6[3] = uVar5 - 1;
      puVar6[2] = uVar5;
      uVar1 = *puVar6;
      do {
        uVar2 = (uint)puVar10[1];
        if (*(int *)((ulonglong)uVar2 + 0xc + (ulonglong)uVar1) <
            *(int *)((ulonglong)uVar2 + (ulonglong)uVar1)) {
          *(ulonglong *)((longlong)puVar6 + -8) = (ulonglong)(uVar2 + uVar1 + 0xc);
          *(ulonglong *)((longlong)puVar6 + -0x10) = (ulonglong)(uVar2 + uVar1);
          *(undefined8 *)((longlong)puVar6 + -0x18) = 0x14077dcdd;
          FUN_14077dd8b();
          puVar6 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar6 + -0x10) + 8);
        }
      } while (unaff_EBX < (int)(uVar5 + param_2));
      param_2 = *(int *)((longlong)puVar6 + 4);
      uVar5 = *(uint *)((longlong)puVar6 + 0xc);
    } while (2 < *(int *)((longlong)puVar6 + 8));
    uVar4 = (ulonglong)(uint)*puVar10;
    while (iVar9 = param_2, param_2 = iVar9 + 1, param_2 < (int)uVar4) {
      uVar5 = (uint)puVar10[1];
      uVar1 = *(uint *)((ulonglong)uVar5 + (ulonglong)(uint)(param_2 * 3) * 4);
      if ((int)uVar1 <= *(int *)((ulonglong)uVar5 + 4 + (ulonglong)(uint)(iVar9 * 3) * 4)) {
        *(ulonglong *)((longlong)puVar6 + -8) = (ulonglong)uVar1;
        *(undefined8 *)((longlong)puVar6 + -0x10) = *(undefined8 *)(ulonglong)(uVar5 + iVar9 * 0xc);
        *(undefined8 *)((longlong)puVar6 + -0x18) = 0x14077dd27;
        uVar3 = FUN_140752553();
        uVar7 = (ulonglong)((int)(undefined1 *)((longlong)puVar6 + -0x10) + 8);
        uVar11 = (ulonglong)(uint)(iVar9 * 0xc);
        *(undefined4 *)((uint)puVar10[1] + uVar11) = uVar3;
        uVar4 = puVar10[1];
        uVar5 = param_2 * 0xc;
        *(undefined8 *)(uVar7 - 8) = *(undefined8 *)((ulonglong)(uint)uVar4 + 4 + (ulonglong)uVar5);
        *(undefined8 *)(uVar7 - 0x10) = *(undefined8 *)((ulonglong)(uint)uVar4 + 4 + uVar11);
        *(undefined8 *)(uVar7 - 0x18) = 0x14077dd50;
        uVar3 = FUN_140753b3a();
        uVar8 = (ulonglong)((int)(uVar7 - 0x10) + 8);
        *(undefined4 *)((ulonglong)(uint)puVar10[1] + 4 + uVar11) = uVar3;
        uVar4 = puVar10[1];
        *(ulonglong *)(uVar8 - 8) = (ulonglong)(((uint)*puVar10 - iVar9) * 0xc - 0x18);
        *(ulonglong *)(uVar8 - 0x10) = (ulonglong)((uint)uVar4 + uVar5 + 0xc);
        *(ulonglong *)(uVar8 - 0x18) = (ulonglong)((uint)uVar4 + uVar5);
        *(undefined8 *)(uVar8 - 0x20) = 0x14077dd7b;
        FUN_1408b31a0();
        puVar6 = (uint *)(ulonglong)((int)(uVar8 - 0x18) + 0xc);
        uVar4 = (ulonglong)(uint)*puVar10;
        *puVar10 = uVar4;
        param_2 = iVar9;
      }
    }
  }
  return;
}

