/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400949e2 */

ulonglong FUN_1400949e2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar3;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  if (0x3e6 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_14009484e(param_1,0xc);
  }
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(int *)(param_1 + 0x70) == 0x29 && ((uint)*(ulonglong *)(param_1 + 0x60) >> 0x1a & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14009484e(param_1,5);
  }
  if ((*(int *)(param_1 + 0x70) == 0x3f & (byte)(*(ulonglong *)(param_1 + 0x60) >> 5) & 7) == 1) {
    FUN_14009474c(param_1);
    uVar2 = *(uint *)(param_1 + 0x70);
    unaff_RDI = (ulonglong)uVar2;
    FUN_14009474c(param_1);
    if (uVar2 == 0x3d) {
      uVar4 = 0;
      FUN_14009664a(param_1,0);
      goto LAB_140094a7c;
    }
    if (uVar2 != 0x3a) {
      if (uVar2 != 0x21) {
                    /* WARNING: Subroutine does not return */
        FUN_14009484e(param_1,10);
      }
      FUN_14009664a(param_1,CONCAT71(uVar3,1));
      uVar4 = 0;
      goto LAB_140094a7c;
    }
LAB_140094a71:
    FUN_140096616(param_1);
  }
  else {
    if ((*(byte *)(param_1 + 0x69) & 2) != 0) goto LAB_140094a71;
    FUN_14009667e(param_1);
  }
  uVar4 = CONCAT71((int7)(unaff_RDI >> 8),1);
LAB_140094a7c:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return uVar4 & 0xffffffff;
}

