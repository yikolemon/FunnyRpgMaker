/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b3720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1408b3720(void)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  uint unaff_retaddr;
  byte local_res8;
  uint local_resc;
  
  uVar2 = (ulonglong)local_resc;
  piVar4 = (int *)(ulonglong)unaff_retaddr;
  if (local_resc == 0) goto LAB_1408b3873;
  iVar1 = (uint)local_res8 * 0x1010101;
  if (0x20 < local_resc) {
    if (local_resc < 0x80) {
LAB_1408b37dd:
      if ((_DAT_150c3d5dd >> 1 & 1) != 0) {
LAB_1408b37f0:
        uVar3 = (uint)uVar2;
        if (uVar3 < 0x20) {
LAB_1408b3811:
          piVar4 = (int *)(ulonglong)((int)piVar4 + -0x20 + uVar3);
          *piVar4 = iVar1;
          piVar4[1] = iVar1;
          piVar4[2] = iVar1;
          piVar4[3] = iVar1;
          piVar4[4] = iVar1;
          piVar4[5] = iVar1;
          piVar4[6] = iVar1;
          piVar4[7] = iVar1;
          return *(uint *)((longlong)register0x00000020 + 4);
        }
        do {
          *piVar4 = iVar1;
          piVar4[1] = iVar1;
          piVar4[2] = iVar1;
          piVar4[3] = iVar1;
          piVar4[4] = iVar1;
          piVar4[5] = iVar1;
          piVar4[6] = iVar1;
          piVar4[7] = iVar1;
          piVar4 = (int *)(ulonglong)((int)piVar4 + 0x20);
          uVar3 = (int)uVar2 - 0x20;
          uVar2 = (ulonglong)uVar3;
        } while (0x1f < uVar3);
        if ((uVar3 & 0x1f) != 0) goto LAB_1408b3811;
        goto LAB_1408b3873;
      }
    }
    else {
      if ((_DAT_150c50f12 >> 1 & 1) != 0) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)piVar4 = (char)iVar1;
          piVar4 = (int *)((longlong)piVar4 + 1);
        }
        return unaff_retaddr;
      }
      if ((_DAT_150c3d565 >> 1 & 1) != 0) {
        *piVar4 = iVar1;
        piVar4[1] = iVar1;
        piVar4[2] = iVar1;
        piVar4[3] = iVar1;
        uVar3 = unaff_retaddr + 0x10 & 0xfffffff0;
        piVar4 = (int *)(ulonglong)uVar3;
        uVar3 = (local_resc + unaff_retaddr) - uVar3;
        uVar2 = (ulonglong)uVar3;
        if (uVar3 < 0x81) goto LAB_1408b37dd;
        register0x00000020 = (BADSPACEBASE *)((ulonglong)&stack0x00000000 & 0xffffffff);
        do {
          *piVar4 = iVar1;
          piVar4[1] = iVar1;
          piVar4[2] = iVar1;
          piVar4[3] = iVar1;
          piVar4[4] = iVar1;
          piVar4[5] = iVar1;
          piVar4[6] = iVar1;
          piVar4[7] = iVar1;
          piVar4[8] = iVar1;
          piVar4[9] = iVar1;
          piVar4[10] = iVar1;
          piVar4[0xb] = iVar1;
          piVar4[0xc] = iVar1;
          piVar4[0xd] = iVar1;
          piVar4[0xe] = iVar1;
          piVar4[0xf] = iVar1;
          piVar4[0x10] = iVar1;
          piVar4[0x11] = iVar1;
          piVar4[0x12] = iVar1;
          piVar4[0x13] = iVar1;
          piVar4[0x14] = iVar1;
          piVar4[0x15] = iVar1;
          piVar4[0x16] = iVar1;
          piVar4[0x17] = iVar1;
          piVar4[0x18] = iVar1;
          piVar4[0x19] = iVar1;
          piVar4[0x1a] = iVar1;
          piVar4[0x1b] = iVar1;
          piVar4[0x1c] = iVar1;
          piVar4[0x1d] = iVar1;
          piVar4[0x1e] = iVar1;
          piVar4[0x1f] = iVar1;
          piVar4 = (int *)(ulonglong)((int)piVar4 + 0x80);
          uVar3 = (int)uVar2 - 0x80;
          uVar2 = (ulonglong)uVar3;
        } while ((uVar3 & 0xffffff00) != 0);
        goto LAB_1408b37f0;
      }
    }
  }
  while ((uVar2 & 3) != 0) {
    *(char *)piVar4 = (char)iVar1;
  }
  if ((uVar2 & 4) != 0) {
    *piVar4 = iVar1;
    piVar4 = (int *)(ulonglong)((int)piVar4 + 4);
    uVar2 = (ulonglong)((int)uVar2 - 4);
  }
  if ((uVar2 & 0xfffffff8) != 0) {
    register0x00000020 = (BADSPACEBASE *)((ulonglong)&stack0x00000000 & 0xffffffff);
    do {
      *piVar4 = iVar1;
      piVar4[1] = iVar1;
      piVar4 = (int *)(ulonglong)((int)piVar4 + 8);
      uVar3 = (int)uVar2 - 8;
      uVar2 = (ulonglong)uVar3;
    } while ((uVar3 & 0xfffffff8) != 0);
  }
LAB_1408b3873:
  return *(uint *)((longlong)register0x00000020 + 4);
}

