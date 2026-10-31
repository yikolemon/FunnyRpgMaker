/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa2e8 */

void FUN_1407aa2e8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  int unaff_R13D;
  int unaff_R15D;
  undefined4 unaff_retaddr;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = unaff_RBP & 0xffffffff;
  uStack_28 = CONCAT44(unaff_retaddr,(int)(unaff_RBP >> 0x20));
  uVar3 = FUN_1407aa189(param_2 + 0x20,(int)((ulonglong)unaff_RBX >> 0x20));
  uVar4 = (ulonglong)((int)&uStack_30 + 8);
  if (0 < (int)unaff_RBP && uVar3 != 0) {
    do {
      uVar1 = *(undefined4 *)(uVar4 + 0x14);
      *(undefined8 *)(uVar4 - 8) = 0x1407aa328;
      uVar2 = FUN_14079ac10(param_1,uVar1);
      *(undefined1 *)(ulonglong)uVar3 = uVar2;
    } while (unaff_R13D != unaff_R15D);
  }
  return;
}

