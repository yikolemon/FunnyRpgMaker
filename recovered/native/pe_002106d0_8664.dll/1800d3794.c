/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d3794 */

void FUN_1800d3794(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  HANDLE pvVar4;
  longlong lVar5;
  uint uVar6;
  UINT uExitCode;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
                    /* 0xd3794  1   */
  uExitCode = 0x26b1;
  if (DAT_180417e90 != (int *)0x0) {
    pvVar4 = OpenProcess(0x1fffff,0,DAT_180417e90[1]);
    piVar2 = DAT_180417e90;
    uExitCode = 0x26ad;
    if (pvVar4 != (HANDLE)0x0) {
      uVar1 = DAT_180417e90[2];
      lVar5 = thunk_FUN_180239630();
      if (uVar1 != 0) {
        iVar3 = *piVar2;
        uVar6 = 0;
        uVar10 = 0;
        uExitCode = 0x26ae;
        do {
          uVar8 = (iVar3 + -0x10) - uVar6;
          if ((uVar8 == 0) || ((int)uVar8 < 0)) goto code_r0x0001800d3841;
          lVar7 = (longlong)piVar2 + (ulonglong)uVar6 + 0xc;
          uVar9 = 0;
          while (*(char *)(lVar7 + uVar9) != '\0') {
            uVar9 = uVar9 + 1;
            if (uVar8 == uVar9) goto code_r0x0001800d3841;
          }
          *(longlong *)(lVar5 + uVar10 * 8) = lVar7;
          uVar6 = uVar6 + (int)uVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar1);
      }
      iVar3 = FUN_1800d252b(pvVar4,lVar5,uVar1);
      uExitCode = 0x26af;
      if (iVar3 != 0) {
        uExitCode = 0;
      }
code_r0x0001800d3841:
      thunk_FUN_1802464a0(lVar5);
    }
    if (DAT_180417e90 != (int *)0x0) {
      FUN_1800d2179();
      DAT_180417e90 = (int *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(uExitCode);
}

