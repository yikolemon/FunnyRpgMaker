/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9fe1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e9fe1(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_RDI;
  ulonglong auStack_20 [2];
  
  uVar2 = unaff_RDI >> 0x20;
  uVar1 = *(uint *)(uVar2 + 0x290);
  auStack_20[1] = 2;
  auStack_20[0] = uVar2;
  FUN_1407e91d0();
  uVar3 = (ulonglong)((int)auStack_20 + 8);
  if ((float)*(int *)((ulonglong)uVar1 + 0x88) * _DAT_150aa2c80 <=
      (float)*(int *)((ulonglong)uVar1 + 0x90)) {
    uVar1 = *(uint *)(uVar2 + 0x30);
    *(undefined8 *)(uVar3 - 8) = *(undefined8 *)((ulonglong)uVar1 + 0x20);
    *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)((ulonglong)uVar1 + 0x1c);
    *(ulonglong *)(uVar3 - 0x18) = uVar2;
    *(undefined8 *)(uVar3 - 0x20) = 0x1407ea031;
    FUN_1407e9598();
  }
  else {
    *(undefined8 *)(uVar3 - 8) = 0;
    *(undefined8 *)(uVar3 - 0x10) = 0;
    *(ulonglong *)(uVar3 - 0x18) = uVar2;
    *(undefined8 *)(uVar3 - 0x20) = 0x1407ea020;
    FUN_1407e9b78();
  }
  return;
}

