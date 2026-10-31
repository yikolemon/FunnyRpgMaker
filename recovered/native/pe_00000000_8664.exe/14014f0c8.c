/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014f0c8 */

undefined4 Unwind_14014f0c8(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  int unaff_ESI;
  int *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000040;
  
  lVar7 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),CONCAT11(0x30,(char)unaff_RBX));
  cVar3 = (char)in_RAX + *in_RAX;
  lVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  pcVar1 = (char *)(lVar7 + 0x607401fb);
  *pcVar1 = *pcVar1 + cVar3;
  iVar2 = (int)lVar7;
  uVar6 = iVar2 + 1;
  uVar5 = 3;
  if (3 < uVar6) {
    uVar5 = (ulonglong)uVar6;
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x48);
  lVar8 = *(longlong *)(unaff_RDI + 0x6a);
  lVar9 = 0;
  do {
    lVar8 = lVar8 + 0xc4;
    lVar7 = lVar7 + 0x38;
    lVar4 = lVar4 + 0x10;
    *(longlong *)(unaff_RDI + lVar9 * 2 + 0x4a) = lVar7;
    *(longlong *)(unaff_RDI + lVar9 * 2 + 0x6c) = lVar8;
    *(longlong *)(unaff_RDI + lVar9 * 2 + 0x90) = lVar4;
    lVar9 = lVar9 + 1;
  } while (uVar5 - 2 != lVar9);
  *unaff_RDI = iVar2;
  if (unaff_ESI != 0) {
    if ((unaff_RDI[1] == 0) || (unaff_RDI[1] == unaff_ESI)) {
      unaff_RDI[1] = unaff_ESI;
    }
    else {
      in_stack_00000038._4_4_ = 3;
    }
  }
  if (DAT_140f17b40 == (in_stack_00000040 ^ (ulonglong)&stack0x00000000)) {
    return in_stack_00000038._4_4_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}

