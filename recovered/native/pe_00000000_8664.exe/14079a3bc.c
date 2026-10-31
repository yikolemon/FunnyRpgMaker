/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a3bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079a3bc(uint param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar6;
  
  uVar5 = (int)&stack0xfffffffffffffff0 - 0xc;
  uVar6 = (ulonglong)uVar5;
  uVar10 = (ulonglong)param_1;
  *(uint *)(uVar6 + 8) = _DAT_150b230cd ^ uVar5;
  lVar1 = uVar6 + 3;
  *(ulonglong *)(uVar6 - 8) = (ulonglong)*(uint *)(uVar6 + 0x18);
  *(longlong *)(uVar6 - 0x10) = lVar1;
  *(undefined8 *)(uVar6 - 0x18) = 0x14079a3de;
  FUN_140752921();
  uVar7 = (ulonglong)((int)(uVar6 - 0x10) + 8);
  *(longlong *)(uVar7 - 8) = lVar1;
  *(undefined8 *)(uVar7 - 0x10) = 0x14079a3e7;
  uVar4 = FUN_1408c85c0();
  uVar8 = (ulonglong)((int)(uVar7 - 8) + 4);
  uVar2 = *(undefined4 *)(uVar10 + 4);
  *(undefined8 *)(uVar8 - 8) = uVar4;
  *(longlong *)(uVar8 - 0x10) = lVar1;
  *(undefined8 *)(uVar8 - 0x18) = 0x14079a3f6;
  FUN_14079a427(uVar10,uVar2);
  uVar5 = (int)(uVar8 - 0x10) + 8;
  uVar9 = (ulonglong)uVar5;
  *(undefined1 *)(uVar10 + 0x54) = 1;
  *(undefined8 *)(uVar9 - 8) = 0x14079a404;
  FUN_14079a3b4(param_1);
  if (_DAT_150b23110 == (*(uint *)(uVar9 + 8) ^ uVar5)) {
    return;
  }
  uVar3 = *(uint *)(uVar9 + 8);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar9 - 8) = FUN_14079a427;
  FUN_1408802b0(uVar3 ^ uVar5);
}

