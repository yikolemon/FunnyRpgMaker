/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140795b61 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140795b61(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar9;
  
  uVar7 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x18);
  uVar1 = *(uint *)(uVar7 + 0x40);
  uVar6 = *(uint *)(uVar7 + 0x34);
  uVar2 = *(uint *)(uVar7 + 0x30);
  uVar11 = (ulonglong)_DAT_150b332d1;
  uVar10 = (ulonglong)*(uint *)(uVar11 + 0x14cc);
  uVar5 = *(uint *)(uVar11 + 0x254c);
  if (uVar5 != uVar2) {
    *(undefined8 *)(uVar7 - 8) = 0x140795b9a;
    FUN_14075a7a8();
    uVar6 = *(uint *)(uVar7 + 0x34);
    uVar2 = *(uint *)(uVar7 + 0x30);
  }
  *(undefined4 *)(uVar7 + 8) = *(undefined4 *)(uVar10 + 0x144);
  *(undefined4 *)(uVar7 + 4) = *(undefined4 *)(uVar10 + 0x148);
  puVar4 = (undefined8 *)(ulonglong)*(uint *)(uVar7 + 0x2c);
  *(undefined8 *)(uVar10 + 0x144) = *puVar4;
  *(byte *)(uVar11 + 0x1e84) = *(byte *)(uVar11 + 0x1e84) | 0x20;
  *(undefined8 *)(uVar7 + 0xc & 0xffffffff) =
       CONCAT44((float)((ulonglong)puVar4[1] >> 0x20) - (float)((ulonglong)*puVar4 >> 0x20),
                (float)puVar4[1] - (float)*puVar4);
  *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(uVar7 + 0x48);
  *(undefined8 *)(uVar7 - 0x10) = *(undefined8 *)(uVar7 + 0x40);
  *(ulonglong *)(uVar7 - 0x18) = (ulonglong)(uVar1 | 0x8001000);
  *(undefined8 **)(uVar7 - 0x20) = (undefined8 *)(uVar7 + 0xc & 0xffffffff);
  *(undefined8 *)(uVar7 - 0x28) = *(undefined8 *)(uVar7 + 0x2c);
  *(undefined8 *)(uVar7 - 0x30) = *(undefined8 *)(uVar7 + 0x24);
  *(undefined8 *)(uVar7 - 0x38) = 0;
  *(ulonglong *)(uVar7 - 0x40) = (ulonglong)uVar6;
  *(undefined8 *)(uVar7 - 0x48) = 0x140795c04;
  uVar3 = FUN_140795c6a();
  uVar8 = (ulonglong)((int)(uVar7 - 0x40) + 0x20);
  *(undefined1 *)(uVar8 + 3) = uVar3;
  *(ulonglong *)(uVar8 - 8) = (ulonglong)uVar2;
  *(undefined8 *)(uVar8 - 0x10) = 0x140795c11;
  FUN_14075bad9();
  uVar6 = (int)(uVar8 - 8) + 4;
  uVar9 = (ulonglong)uVar6;
  uVar1 = *(uint *)(uVar11 + 0x1528);
  if (uVar1 != uVar2 || uVar5 != uVar2) {
    uVar5 = 0;
    if (uVar1 == uVar2) {
      uVar5 = uVar1;
    }
    *(uint *)(uVar11 + 0x254c) = uVar5;
  }
  *(undefined4 *)(uVar10 + 0x144) = *(undefined4 *)(uVar9 + 8);
  *(undefined4 *)(uVar10 + 0x148) = *(undefined4 *)(uVar9 + 4);
  if (_DAT_150b1e94f == (*(uint *)(uVar9 + 0x14) ^ uVar6)) {
    return CONCAT31((int3)((*(uint *)(uVar9 + 0x14) ^ uVar6) >> 8),*(undefined1 *)(uVar9 + 3));
  }
  uVar1 = *(uint *)(uVar9 + 0x14);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar9 - 8) = FUN_140795c6a;
  FUN_1408802b0(uVar1 ^ uVar6);
}

