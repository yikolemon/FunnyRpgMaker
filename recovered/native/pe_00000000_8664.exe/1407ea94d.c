/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ea94d */

void FUN_1407ea94d(ulonglong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uStack_28;
  
  if (*(int *)(param_1 + 0x18) < (int)param_2) {
    puVar4 = &stack0xffffffffffffffe0;
    puVar8 = (uint *)(param_1 & 0xffffffff);
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < (int)param_2) {
      if (iVar1 == 0) {
        uVar7 = 8;
      }
      else {
        uVar7 = iVar1 / 2 + iVar1;
      }
      if ((int)uVar7 <= (int)param_2) {
        uVar7 = param_2;
      }
      uStack_28 = (ulonglong)(uVar7 * 4);
      uVar3 = FUN_1407520ca();
      puVar4 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
      uVar2 = puVar8[2];
      if (uVar2 != 0) {
        *(ulonglong *)(puVar4 + -8) = (ulonglong)(*puVar8 << 2);
        *(ulonglong *)(puVar4 + -0x10) = (ulonglong)uVar2;
        *(ulonglong *)(puVar4 + -0x18) = (ulonglong)uVar3;
        *(undefined8 *)(puVar4 + -0x20) = 0x1407ea9a6;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 8) = *(undefined8 *)(puVar8 + 2);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar4 + -0x18) + 0xc) - 0x10) = &UNK_1407ea9b1;
        FUN_14075219b();
      }
      puVar8[2] = uVar3;
      puVar8[1] = uVar7;
    }
    uVar7 = *puVar8;
    if ((int)uVar7 < (int)param_2) {
      do {
        *(undefined4 *)((ulonglong)puVar8[2] + (ulonglong)uVar7 * 4) = 0xbf800000;
      } while (param_2 != uVar7);
    }
    *puVar8 = param_2;
    uVar7 = puVar8[7];
    if ((int)uVar7 < (int)param_2) {
      if (uVar7 == 0) {
        uVar7 = 8;
      }
      else {
        uVar7 = (int)uVar7 / 2 + uVar7;
      }
      if ((int)uVar7 <= (int)param_2) {
        uVar7 = param_2;
      }
      *(ulonglong *)(puVar4 + -8) = (ulonglong)(uVar7 * 2);
      *(undefined8 *)(puVar4 + -0x10) = 0x1407eaa00;
      uVar3 = FUN_1407520ca();
      uVar5 = (ulonglong)((int)(puVar4 + -8) + 4);
      uVar2 = puVar8[8];
      if (uVar2 != 0) {
        *(ulonglong *)(uVar5 - 8) = (ulonglong)(puVar8[6] * 2);
        *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar2;
        *(ulonglong *)(uVar5 - 0x18) = (ulonglong)uVar3;
        *(undefined8 *)(uVar5 - 0x20) = 0x1407eaa19;
        FUN_1408b31a0();
        uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
        *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(puVar8 + 8);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar6 - 0x10) = &UNK_1407eaa24;
        FUN_14075219b();
      }
      puVar8[8] = uVar3;
      puVar8[7] = uVar7;
    }
    uVar7 = puVar8[6];
    if ((int)uVar7 < (int)param_2) {
      do {
        *(undefined2 *)((ulonglong)puVar8[8] + (ulonglong)uVar7 * 2) = 0xffff;
      } while (param_2 != uVar7);
    }
    puVar8[6] = param_2;
  }
  return;
}

