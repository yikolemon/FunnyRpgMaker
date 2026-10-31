/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755727 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755727(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  uVar10 = puVar8[0xb];
  uVar2 = puVar8[10];
  *puVar8 = puVar8[8];
  puVar8[1] = puVar8[9];
  uVar9 = (ulonglong)_DAT_150af2eaa;
  uVar3 = *(uint *)(uVar9 + 0x14cc);
  if (uVar10 == 0) {
    *(ulonglong *)(puVar8 + -2) = (ulonglong)uVar2;
    *(undefined8 *)(puVar8 + -4) = 0x14075576e;
    iVar6 = FUN_1408c85c0();
    puVar8 = (undefined4 *)(ulonglong)((int)(puVar8 + -2) + 4);
    uVar10 = iVar6 + uVar2;
  }
  if (uVar2 != uVar10) {
    uVar4 = *(undefined4 *)((ulonglong)uVar3 + 0x2e8);
    *(undefined8 *)((longlong)puVar8 + -8) = 0x3f800000;
    *(undefined8 *)((longlong)puVar8 + -0x10) = 0;
    *(undefined8 *)((longlong)puVar8 + -0x18) = 0x14075578c;
    uVar7 = FUN_140754a09();
    uVar1 = *(undefined4 *)(uVar9 + 0x1228);
    uVar5 = *(undefined4 *)(uVar9 + 0x1220);
    puVar8 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x10) - 0x18);
    puVar8[7] = 0;
    uVar2 = puVar8[0x12];
    puVar8[6] = puVar8[0x14];
    puVar8[5] = uVar10;
    puVar8[4] = uVar2;
    puVar8[3] = uVar7;
    puVar8[2] = (int)(puVar8 + 8);
    puVar8[1] = uVar1;
    *puVar8 = uVar5;
    *(undefined8 *)(puVar8 + -2) = 0x1407557d8;
    FUN_1407e456a(uVar4);
    if (*(char *)(uVar9 + 0x2748) == '\x01') {
      *(ulonglong *)(puVar8 + -2) = (ulonglong)uVar10;
      *(ulonglong *)(puVar8 + -4) = (ulonglong)uVar2;
      *(ulonglong *)(puVar8 + -6) = (ulonglong)(puVar8 + -2) & 0xffffffff;
      *(undefined8 *)(puVar8 + -8) = 0x1407557ed;
      FUN_140755578();
      puVar8 = (undefined4 *)(ulonglong)((int)(puVar8 + -6) + 0xc);
    }
  }
  if (_DAT_150ade4fc == (*(uint *)((longlong)puVar8 + 8) ^ (uint)puVar8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar8 + -8) = FUN_140755813;
  FUN_1408802b0(*(uint *)((longlong)puVar8 + 8) ^ (uint)puVar8);
}

