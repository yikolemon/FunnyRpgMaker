/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e372a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e372a(uint param_1)

{
  undefined8 unaff_RBX;
  undefined4 *puVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  float unaff_retaddr;
  uint unaff_retaddr_00;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)unaff_RBP >> 0x20);
  if (0xffffff < uVar3) {
    uVar2 = (ulonglong)param_1;
    if (_DAT_150a9a832 <= unaff_retaddr && (unaff_retaddr_00 & 0x1f0) != 0x100) {
      puVar1 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
      puVar1[3] = unaff_retaddr_00;
      puVar1[2] = unaff_retaddr;
      puVar1[1] = (int)unaff_RBP;
      *puVar1 = (int)((ulonglong)unaff_RBX >> 0x20);
      *(undefined8 *)(puVar1 + -2) = 0x1407e37a3;
      FUN_1407e2d14(uVar2);
      *(ulonglong *)(puVar1 + -2) = (ulonglong)uVar3;
      *(undefined8 *)(puVar1 + -4) = *(undefined8 *)(uVar2 + 0x38);
      *(undefined8 *)(puVar1 + -6) = *(undefined8 *)(uVar2 + 0x40);
      *(undefined8 *)(puVar1 + -8) = 0x1407e37b1;
      FUN_1407e1238(param_1);
      *(undefined4 *)(uVar2 + 0x38) = 0;
    }
    else {
      FUN_1407e03e6(uVar2);
      FUN_1407e0542(param_1);
    }
  }
  return;
}

