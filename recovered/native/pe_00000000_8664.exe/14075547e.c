/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075547e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075547e(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar9;
  
  uVar8 = (int)&stack0xffffffffffffffe0 - 0xc;
  puVar9 = (undefined4 *)(ulonglong)uVar8;
  uVar11 = (ulonglong)(uint)puVar9[0xb];
  uVar2 = puVar9[10];
  puVar9[2] = _DAT_150ade1a3 ^ uVar8;
  *puVar9 = puVar9[8];
  puVar9[1] = puVar9[9];
  uVar10 = (ulonglong)_DAT_150af2c06;
  uVar8 = *(uint *)(uVar10 + 0x14cc);
  if (*(char *)(puVar9 + 0xc) == '\0') {
    if (puVar9[0xb] == 0) {
      *(ulonglong *)(puVar9 + -2) = (ulonglong)uVar2;
      *(undefined8 *)(puVar9 + -4) = 0x1407554dc;
      iVar6 = FUN_1408c85c0();
      puVar9 = (undefined4 *)(ulonglong)((int)(puVar9 + -2) + 4);
      uVar11 = (ulonglong)(iVar6 + uVar2);
    }
  }
  else {
    *(ulonglong *)(puVar9 + -2) = uVar11;
    *(ulonglong *)(puVar9 + -4) = (ulonglong)uVar2;
    *(undefined8 *)(puVar9 + -6) = 0x1407554cb;
    uVar5 = FUN_14075544d();
    puVar9 = (undefined4 *)(ulonglong)((int)(puVar9 + -4) + 8);
    uVar11 = (ulonglong)uVar5;
  }
  if (uVar2 != (uint)uVar11) {
    uVar3 = *(undefined4 *)((ulonglong)uVar8 + 0x2e8);
    *(undefined8 *)((longlong)puVar9 + -8) = 0x3f800000;
    *(undefined8 *)((longlong)puVar9 + -0x10) = 0;
    *(undefined8 *)((longlong)puVar9 + -0x18) = 0x1407554fa;
    uVar7 = FUN_140754a09();
    uVar1 = *(undefined4 *)(uVar10 + 0x1228);
    uVar4 = *(undefined4 *)(uVar10 + 0x1220);
    puVar9 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar9 + -0x10) - 0x18);
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[5] = (uint)uVar11;
    puVar9[4] = puVar9[0x12];
    puVar9[3] = uVar7;
    puVar9[2] = (int)(puVar9 + 8);
    puVar9[1] = uVar1;
    *puVar9 = uVar4;
    *(undefined8 *)(puVar9 + -2) = 0x14075553e;
    FUN_1407e456a(uVar3);
    if (*(char *)(uVar10 + 0x2748) == '\x01') {
      *(ulonglong *)(puVar9 + -2) = uVar11;
      *(undefined8 *)(puVar9 + -4) = *(undefined8 *)(puVar9 + 9);
      *(ulonglong *)(puVar9 + -6) = (ulonglong)(puVar9 + 8) & 0xffffffff;
      *(undefined8 *)(puVar9 + -8) = 0x140755552;
      FUN_140755578();
      puVar9 = (undefined4 *)(ulonglong)((int)(puVar9 + -6) + 0xc);
    }
  }
  if (_DAT_150ade261 == (*(uint *)((longlong)puVar9 + 8) ^ (uint)puVar9)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar9 + -8) = FUN_140755578;
  FUN_1408802b0(*(uint *)((longlong)puVar9 + 8) ^ (uint)puVar9);
}

