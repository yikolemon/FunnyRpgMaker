/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800946c6 */

ulonglong FUN_1800946c6(longlong param_1,undefined8 param_2)

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
    FUN_18001d772(param_1,0xc);
  }
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(int *)(param_1 + 0x70) == 0x29 && ((uint)*(ulonglong *)(param_1 + 0x60) >> 0x1a & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18001d772(param_1,5);
  }
  if ((*(int *)(param_1 + 0x70) == 0x3f & (byte)(*(ulonglong *)(param_1 + 0x60) >> 5) & 7) == 1) {
    FUN_180094520(param_1);
    uVar2 = *(uint *)(param_1 + 0x70);
    unaff_RDI = (ulonglong)uVar2;
    FUN_180094520(param_1);
    if (uVar2 == 0x3d) {
      uVar4 = 0;
      FUN_1800960e8(param_1,0);
      goto LAB_180094760;
    }
    if (uVar2 != 0x3a) {
      if (uVar2 != 0x21) {
                    /* WARNING: Subroutine does not return */
        FUN_18001d772(param_1,10);
      }
      FUN_1800960e8(param_1,CONCAT71(uVar3,1));
      uVar4 = 0;
      goto LAB_180094760;
    }
LAB_180094755:
    FUN_1800960b4(param_1);
  }
  else {
    if ((*(byte *)(param_1 + 0x69) & 2) != 0) goto LAB_180094755;
    FUN_18009611c(param_1);
  }
  uVar4 = CONCAT71((int7)(unaff_RDI >> 8),1);
LAB_180094760:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  return uVar4 & 0xffffffff;
}

