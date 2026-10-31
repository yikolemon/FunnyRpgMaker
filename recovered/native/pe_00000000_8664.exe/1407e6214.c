/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e6214 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e6214(ulonglong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  ulonglong uStack_28;
  uint uVar5;
  int iVar6;
  
  param_1 = param_1 & 0xffffffff;
  iVar6 = (int)((ulonglong)unaff_RBP >> 0x20);
  uVar5 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uStack_28 = 0x1407e622b;
  FUN_1407e6290();
  *(uint *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 4) = 2;
  *(int *)(param_1 + 0x1c) = (int)unaff_RBP;
  *(int *)(param_1 + 0x20) = iVar6;
  uStack_28 = (ulonglong)uVar5;
  iVar1 = FUN_1407e61ca();
  uVar3 = (ulonglong)((int)&uStack_28 + 4);
  *(int *)(param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(ulonglong *)(uVar3 - 8) = (ulonglong)(uint)(iVar6 * (int)unaff_RBP * iVar1);
  *(undefined8 *)(uVar3 - 0x10) = 0x1407e6257;
  uVar2 = FUN_1407520ca();
  uVar4 = (ulonglong)((int)(uVar3 - 8) + 4);
  *(int *)(param_1 + 0x28) = (int)uVar2;
  *(ulonglong *)(uVar4 - 8) =
       (ulonglong)
       (uint)(*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x24));
  *(undefined8 *)(uVar4 - 0x10) = 0;
  *(undefined8 *)(uVar4 - 0x18) = uVar2;
  *(undefined8 *)(uVar4 - 0x20) = 0x1407e6272;
  FUN_1408b3720();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = _DAT_150a7a713;
  return;
}

