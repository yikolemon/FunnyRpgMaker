/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ffaf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ffaf(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  piVar5 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x1c);
  iVar2 = piVar5[0xd];
  uVar7 = (ulonglong)_DAT_150b0d70c;
  piVar5[1] = 0x3f800000;
  *piVar5 = 0x39;
  piVar5[-2] = 0x4076ffd5;
  piVar5[-1] = 1;
  iVar3 = FUN_140754a09();
  iVar1 = iVar2 + 8;
  piVar5[4] = 0;
  piVar5[3] = piVar5[0xe];
  piVar5[2] = iVar3;
  piVar5[1] = iVar1;
  *piVar5 = iVar2;
  piVar5[-2] = 0x40770000;
  piVar5[-1] = 1;
  FUN_1407e372a(piVar5[0xc]);
  puVar6 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x30);
  puVar6[6] = *(undefined4 *)(uVar7 + 0xda0);
  puVar6[1] = 0x3f800000;
  *puVar6 = 0x38;
  *(undefined8 *)(puVar6 + -2) = 0x140770021;
  uVar4 = FUN_140754a09();
  puVar6[5] = 0;
  puVar6[4] = puVar6[6];
  puVar6[3] = puVar6[0xe];
  puVar6[2] = uVar4;
  puVar6[1] = iVar1;
  *puVar6 = puVar6[0xd];
  *(undefined8 *)(puVar6 + -2) = 0x140770055;
  FUN_1407e3632(puVar6[0xc]);
  return;
}

