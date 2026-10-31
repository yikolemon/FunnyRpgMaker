/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140753ede */

void FUN_140753ede(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RDI;
  undefined8 uStack_18;
  
  uVar5 = (ulonglong)param_1 & 0xffffffff;
  *param_1 = (int)((ulonglong)unaff_RDI >> 0x20);
  param_1[3] = 0;
  param_1[2] = 0;
  if ((int)param_1[5] < 0) {
    uStack_18 = 0;
    uVar2 = FUN_1407520ca();
    uVar3 = (ulonglong)((int)&uStack_18 + 4);
    uVar1 = *(uint *)(uVar5 + 0x18);
    if (uVar1 != 0) {
      *(ulonglong *)(uVar3 - 8) = (ulonglong)(uint)(*(int *)(uVar5 + 0x10) * 0xc);
      *(ulonglong *)(uVar3 - 0x10) = (ulonglong)uVar1;
      *(ulonglong *)(uVar3 - 0x18) = (ulonglong)uVar2;
      *(undefined8 *)(uVar3 - 0x20) = 0x140753f19;
      FUN_1408b31a0();
      uVar4 = (ulonglong)((int)(uVar3 - 0x18) + 0xc);
      *(undefined8 *)(uVar4 - 8) = *(undefined8 *)(uVar5 + 0x18);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar4 - 0x10) = &UNK_140753f24;
      FUN_14075219b();
    }
    *(uint *)(uVar5 + 0x18) = uVar2;
    *(undefined4 *)(uVar5 + 0x14) = 0;
  }
  *(undefined4 *)(uVar5 + 0x10) = 0;
  return;
}

