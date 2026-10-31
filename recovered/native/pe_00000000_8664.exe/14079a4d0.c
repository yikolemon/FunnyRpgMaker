/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a4d0 */

void FUN_14079a4d0(ulonglong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar5 = param_1 & 0xffffffff;
  uStack_10 = *(undefined8 *)(param_1 + 0x10);
  uStack_18 = *(undefined8 *)(ulonglong)*(uint *)(param_1 + 4);
  uVar2 = FUN_140752553();
  uVar3 = (ulonglong)((int)&uStack_18 + 8);
  *(undefined4 *)(ulonglong)*(uint *)(uVar5 + 4) = uVar2;
  uVar1 = *(uint *)(uVar5 + 4);
  *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(uVar5 + 0x10);
  *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)((ulonglong)uVar1 + 4);
  *(undefined8 *)(uVar3 - 0x18) = 0x14079a4f6;
  uVar2 = FUN_140752553();
  uVar4 = (ulonglong)((int)(uVar3 - 0x10) + 8);
  *(undefined4 *)((ulonglong)*(uint *)(uVar5 + 4) + 4) = uVar2;
  uVar1 = *(uint *)(uVar5 + 4);
  *(undefined8 *)(uVar4 - 8) = *(undefined8 *)(uVar5 + 0x10);
  *(undefined8 *)(uVar4 - 0x10) = *(undefined8 *)((ulonglong)uVar1 + 8);
  *(undefined8 *)(uVar4 - 0x18) = 0x14079a50d;
  uVar2 = FUN_140752553();
  *(undefined4 *)((ulonglong)*(uint *)(uVar5 + 4) + 8) = uVar2;
  return;
}

