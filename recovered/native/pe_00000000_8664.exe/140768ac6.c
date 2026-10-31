/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140768ac6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140768ac6(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = _DAT_150b0622a;
  puVar5 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar4 = (ulonglong)_DAT_150b0622a;
  puVar6 = puVar5;
  if (*(char *)(uVar4 + 0x2748) == '\x01') {
    uVar8 = (ulonglong)(uint)puVar5[7];
    uVar7 = (ulonglong)(puVar5 + 8) & 0xffffffff;
    *puVar5 = (int)(puVar5 + 8);
    if (*(int *)(uVar4 + 0x2754) == 0) {
      *(ulonglong *)(puVar5 + -2) = uVar7;
      puVar6 = puVar5 + -4;
      *(ulonglong *)(puVar5 + -4) = uVar8;
      *(undefined8 *)(puVar5 + -6) = 0x140768bab;
      FUN_1407538b6(uVar3 + 0x2758);
    }
    else {
      if (*(int *)(uVar4 + 0x275c) < 0) {
        *(undefined8 *)(puVar5 + -2) = 0;
        *(undefined8 *)(puVar5 + -4) = 0x140768b19;
        uVar2 = FUN_1407520ca();
        puVar5 = (undefined4 *)(ulonglong)((int)(puVar5 + -2) + 4);
        uVar1 = *(uint *)(uVar4 + 0x2760);
        if (uVar1 != 0) {
          *(undefined8 *)((longlong)puVar5 + -8) = *(undefined8 *)(uVar4 + 0x2758);
          *(ulonglong *)((longlong)puVar5 + -0x10) = (ulonglong)uVar1;
          *(ulonglong *)((longlong)puVar5 + -0x18) = (ulonglong)uVar2;
          *(undefined8 *)((longlong)puVar5 + -0x20) = 0x140768b35;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar5 + -0x18) + 0xc) - 8) =
               *(undefined8 *)(uVar4 + 0x2760);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar5 + -0x18) + 0xc) - 0x10) =
               &UNK_140768b43;
          FUN_14075219b();
        }
        *(uint *)(uVar4 + 0x2760) = uVar2;
        *(undefined4 *)(uVar4 + 0x275c) = 0;
        uVar8 = (ulonglong)*(uint *)((longlong)puVar5 + 0x1c);
      }
      *(undefined4 *)(uVar4 + 0x2758) = 0;
      *(ulonglong *)((longlong)puVar5 + -8) = uVar7;
      *(ulonglong *)((longlong)puVar5 + -0x10) = uVar8;
      *(undefined8 *)((longlong)puVar5 + -0x18) = 0x140768b6b;
      FUN_1407538b6(uVar3 + 0x2758);
      uVar3 = *(int *)(uVar4 + 0x2758) + -1 + (uint)(*(int *)(uVar4 + 0x2758) == 0);
      uVar8 = 0x1039d750;
      if (*(uint *)(uVar4 + 0x2760) != 0) {
        uVar8 = (ulonglong)*(uint *)(uVar4 + 0x2760);
      }
      *(undefined8 *)((longlong)puVar5 + -0x18) = *(undefined8 *)(uVar4 + 0x2754);
      *(ulonglong *)((longlong)puVar5 + -0x20) = (ulonglong)(uint)((int)uVar3 >> 0x1f);
      *(ulonglong *)((longlong)puVar5 + -0x28) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)puVar5 + -0x30) = 0;
      *(undefined8 *)((longlong)puVar5 + -0x38) = 1;
      *(ulonglong *)((longlong)puVar5 + -0x40) = uVar8;
      *(undefined8 *)((longlong)puVar5 + -0x48) = 0x140768b9d;
      FUN_14075284c();
      puVar6 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar5 + -0x40) + 0x18);
    }
  }
  if (_DAT_150af18b7 == (*(uint *)((longlong)puVar6 + 4) ^ (uint)puVar6)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar6 + -8) = &UNK_140768bce;
  FUN_1408802b0(*(uint *)((longlong)puVar6 + 4) ^ (uint)puVar6);
}

