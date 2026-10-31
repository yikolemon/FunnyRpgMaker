/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a0a4 */

uint FUN_14075a0a4(ulonglong param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  uint unaff_EBP;
  ulonglong uStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar1 = unaff_EBP - uVar3;
  if (unaff_EBP == 0) {
    uVar1 = 0;
  }
  uStack_30 = (ulonglong)uVar1;
  uStack_28 = *(undefined8 *)
               (((ulonglong)*(uint *)(param_1 + 0x140) - 4) +
               (ulonglong)*(uint *)(param_1 + 0x138) * 4);
  uStack_38 = (ulonglong)uVar3;
  uVar1 = FUN_140752593();
  uVar2 = (ulonglong)((int)&uStack_38 + 0xc);
  if (*(uint *)((ulonglong)*(uint *)(param_1 & 0xffffffff) + 0x150c) == uVar1) {
    *(ulonglong *)(uVar2 - 8) = (ulonglong)unaff_EBP;
    *(ulonglong *)(uVar2 - 0x10) = (ulonglong)uVar3;
    *(undefined8 *)(uVar2 - 0x18) = 0xb;
    *(ulonglong *)(uVar2 - 0x20) = (ulonglong)uVar1;
    *(undefined8 *)(uVar2 - 0x28) = 0x14075a0eb;
    FUN_14076ad2a();
  }
  return uVar1;
}

