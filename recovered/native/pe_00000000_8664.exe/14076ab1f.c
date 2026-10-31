/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ab1f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ab1f(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  puVar6 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x10);
  uVar3 = puVar6[8];
  uVar1 = puVar6[10];
  uVar2 = puVar6[9];
  uVar7 = (ulonglong)_DAT_150b08287;
  *(uint *)(uVar7 + 0x1220) = uVar3;
  *(uint *)(uVar7 + 0x122c) = uVar2;
  *puVar6 = uVar1;
  puVar6[-2] = 0x4076ab53;
  puVar6[-1] = 1;
  FUN_140769e13();
  if (uVar3 != 0) {
    uVar1 = *(uint *)((ulonglong)uVar3 + 4);
    uVar5 = (ulonglong)uVar1;
    *(uint *)(uVar7 + 0x1248) = uVar1;
    *(uint *)(uVar7 + 0x124c) = uVar3;
    *puVar6 = uVar1;
    puVar6[-2] = 0x4076ab6e;
    puVar6[-1] = 1;
    FUN_1407e93ef();
    if (*(uint *)(uVar7 + 0x14cc) != 0) {
      uVar4 = *(undefined4 *)((ulonglong)*(uint *)(uVar7 + 0x14cc) + 0x2e8);
      uVar1 = *(uint *)(uVar5 + 0x24);
      uVar2 = *(uint *)(uVar5 + 0x28);
      uVar3 = *(uint *)(uVar5 + 0x2c);
      *puVar6 = *(undefined4 *)(uVar5 + 0x20);
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar6[-2] = 0x4076ab8b;
      puVar6[-1] = 1;
      FUN_1407e0384(uVar4);
    }
  }
  return;
}

