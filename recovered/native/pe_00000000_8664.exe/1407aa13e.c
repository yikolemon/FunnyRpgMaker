/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa13e */

void FUN_1407aa13e(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  uint unaff_EBP;
  int unaff_R13D;
  int unaff_R15D;
  ulonglong auStack_30 [2];
  
  auStack_30[0] = (ulonglong)unaff_EBP;
  auStack_30[1] = 0;
  uVar3 = FUN_1407aa189(param_2 + 0x20,(int)((ulonglong)unaff_RBX >> 0x20));
  uVar4 = (ulonglong)((int)auStack_30 + 8);
  if (0 < (int)unaff_EBP && uVar3 != 0) {
    do {
      uVar1 = *(undefined4 *)(uVar4 + 0x14);
      *(undefined8 *)(uVar4 - 8) = 0x1407aa17c;
      uVar2 = FUN_14079ac10(param_1,uVar1);
      *(undefined1 *)(ulonglong)uVar3 = uVar2;
    } while (unaff_R13D != unaff_R15D);
  }
  return;
}

