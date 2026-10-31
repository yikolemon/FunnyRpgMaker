/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001b848 */

void Unwind_14001b848(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte in_AL;
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int in_R10D;
  uint unaff_R12D;
  uint uVar3;
  ulonglong in_stack_00000070;
  
  *(byte *)(param_1 + -0x75) = *(byte *)(param_1 + -0x75) | in_AL;
  if (in_R10D == 0 && (int)param_1 == -1) {
    if ((ulonglong)unaff_RDI[2] < (ulonglong)((unaff_R12D >> 0x18) + param_4) + unaff_RDI[1]) {
      (*(code *)unaff_RDI[3])();
    }
    for (uVar3 = unaff_R12D & 0xffffff; uVar3 != 0; uVar3 = uVar3 >> 8) {
      lVar1 = unaff_RDI[1];
      uVar2 = lVar1 + 1;
      if ((ulonglong)unaff_RDI[2] < uVar2) {
        (*(code *)unaff_RDI[3])();
        lVar1 = unaff_RDI[1];
        uVar2 = lVar1 + 1;
      }
      unaff_RDI[1] = uVar2;
      *(char *)(*unaff_RDI + lVar1) = (char)uVar3;
    }
    FUN_140019fc2();
    *unaff_RSI = unaff_RDI;
  }
  else {
    FUN_14001e194();
  }
  if (DAT_140f17b40 != (in_stack_00000070 ^ (ulonglong)&stack0x00000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
  }
  return;
}

