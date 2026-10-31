/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e742d */

void FUN_1407e742d(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  puVar5 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  iVar1 = *(int *)((ulonglong)puVar5[7] + 0x54);
  if (iVar1 != 0) {
    uVar9 = *(uint *)((ulonglong)puVar5[7] + 0x5c);
    uVar4 = (ulonglong)uVar9;
    uVar7 = 0;
    *puVar5 = uVar9;
    do {
      uVar6 = (ulonglong)*(uint *)(uVar4 + uVar7);
      if (*(int *)(uVar6 + 0x1c) < 0) {
        *(undefined8 *)((longlong)puVar5 + -8) = 0;
        *(undefined8 *)((longlong)puVar5 + -0x10) = 0x1407e745a;
        uVar2 = FUN_1407520ca();
        puVar5 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar5 + -8) + 4);
        uVar9 = *(uint *)(uVar6 + 0x20);
        if (uVar9 != 0) {
          *(ulonglong *)(puVar5 + -2) = (ulonglong)(uint)(*(int *)(uVar6 + 0x18) << 2);
          *(ulonglong *)(puVar5 + -4) = (ulonglong)uVar9;
          *(ulonglong *)(puVar5 + -6) = (ulonglong)uVar2;
          puVar5[-8] = 0x407e7474;
          puVar5[-7] = 1;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(puVar5 + -6) + 0xc) - 8) = *(undefined8 *)(uVar6 + 0x20)
          ;
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(puVar5 + -6) + 0xc) - 0x10) = &UNK_1407e747f;
          FUN_14075219b();
        }
        *(uint *)(uVar6 + 0x20) = uVar2;
        *(undefined4 *)(uVar6 + 0x1c) = 0;
        uVar4 = (ulonglong)*puVar5;
      }
      *(undefined4 *)(uVar6 + 0x18) = 0;
      uVar9 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar9;
    } while (iVar1 << 2 != uVar9);
  }
  iVar1 = *(int *)((ulonglong)puVar5[7] + 0x60);
  if (iVar1 != 0) {
    uVar9 = *(uint *)((ulonglong)puVar5[7] + 0x68);
    uVar4 = (ulonglong)uVar9;
    uVar2 = iVar1 << 7;
    uVar7 = 0;
    *puVar5 = uVar2;
    puVar5[1] = uVar9;
    do {
      uVar6 = (ulonglong)*(uint *)(uVar4 + 0x70 + uVar7);
      uVar9 = *(uint *)(uVar6 + 0x18);
      if (uVar9 == *(uint *)(uVar6 + 0x1c)) {
        if (uVar9 == 0) {
          uVar2 = 8;
        }
        else {
          uVar2 = (int)uVar9 / 2 + uVar9;
        }
        if ((int)uVar9 < param_3) {
          uVar9 = uVar2;
        }
        *(ulonglong *)((longlong)puVar5 + -8) = (ulonglong)(uVar9 * 4);
        *(undefined8 *)((longlong)puVar5 + -0x10) = 0x1407e74f5;
        uVar3 = FUN_1407520ca();
        puVar5 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar5 + -8) + 4);
        uVar8 = (ulonglong)uVar3;
        uVar2 = *(uint *)(uVar6 + 0x20);
        if (uVar2 != 0) {
          *(ulonglong *)(puVar5 + -2) = (ulonglong)(uint)(*(int *)(uVar6 + 0x18) << 2);
          *(ulonglong *)(puVar5 + -4) = (ulonglong)uVar2;
          *(ulonglong *)(puVar5 + -6) = uVar8;
          puVar5[-8] = 0x407e750f;
          puVar5[-7] = 1;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(puVar5 + -6) + 0xc) - 8) = *(undefined8 *)(uVar6 + 0x20)
          ;
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(puVar5 + -6) + 0xc) - 0x10) = &UNK_1407e751a;
          FUN_14075219b();
        }
        *(uint *)(uVar6 + 0x20) = uVar3;
        *(uint *)(uVar6 + 0x1c) = uVar9;
        uVar9 = *(uint *)(uVar6 + 0x18);
        uVar2 = *puVar5;
        uVar4 = (ulonglong)puVar5[1];
      }
      else {
        uVar8 = (ulonglong)*(uint *)(uVar6 + 0x20);
      }
      *(int *)(uVar8 + (ulonglong)uVar9 * 4) = (int)uVar4 + (int)uVar7;
      *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
      uVar9 = (int)uVar7 + 0x80;
      uVar7 = (ulonglong)uVar9;
    } while (uVar2 != uVar9);
  }
  return;
}

