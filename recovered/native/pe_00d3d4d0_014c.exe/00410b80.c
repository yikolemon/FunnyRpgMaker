/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410b80 */

void __thiscall FUN_00410b80(void *this,ushort param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  
  uVar7 = (uint)param_1;
  if (0x7f < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504a30);
  }
  switch(uVar7) {
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
switchD_00410ba2_caseD_61:
    iVar9 = 2;
    bVar3 = true;
    bVar4 = false;
    bVar6 = true;
    local_1c = 2;
    bVar5 = true;
    break;
  case 0x62:
  case 100:
  case 0x6f:
  case 0x78:
switchD_00410ba2_caseD_62:
    iVar9 = 1;
    bVar4 = false;
    bVar3 = false;
    bVar6 = false;
    local_1c = 1;
    bVar5 = false;
    break;
  case 99:
    bVar5 = true;
    iVar9 = 5;
    bVar4 = false;
    bVar3 = false;
    bVar6 = false;
    local_1c = 5;
    break;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
    goto switchD_00410ba2_caseD_68;
  case 0x70:
switchD_00410ba2_caseD_70:
    iVar10 = 4;
    bVar6 = true;
    bVar4 = false;
    bVar3 = false;
    local_1c = 4;
    bVar5 = true;
    iVar8 = 4;
    iVar9 = 4;
    goto LAB_00410d8b;
  case 0x73:
    iVar9 = 3;
    bVar4 = true;
    bVar3 = false;
    bVar6 = true;
    local_1c = 3;
    bVar5 = false;
    break;
  default:
    uVar1 = uVar7 - 0x41;
    if (uVar1 < 0x18) {
      if ((0x71U >> (uVar1 & 0x1f) & 1) != 0) goto switchD_00410ba2_caseD_61;
      if ((0x800002U >> (uVar1 & 0x1f) & 1) != 0) goto switchD_00410ba2_caseD_62;
      if (uVar1 == 0xf) goto switchD_00410ba2_caseD_70;
    }
    if (uVar7 != 0) {
switchD_00410ba2_caseD_68:
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x503382);
    }
    iVar8 = 3;
    local_1c = 5;
    iVar10 = 1;
    bVar4 = true;
    bVar6 = false;
    bVar3 = true;
    bVar5 = false;
    iVar9 = 0;
LAB_00410d8b:
    bVar2 = true;
    goto LAB_00410c64;
  }
  bVar2 = false;
  iVar8 = iVar9;
  iVar10 = iVar9;
LAB_00410c64:
  switch(*(undefined1 *)((int)this + 0xc)) {
  case 1:
  case 2:
  case 3:
  case 4:
    iVar9 = iVar10;
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x5033a6);
    }
    break;
  case 5:
    iVar9 = iVar8;
    if (bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x50370a);
    }
    break;
  case 6:
    iVar9 = local_1c;
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x502f0c);
    }
    break;
  case 7:
  case 8:
  case 9:
    iVar9 = 2;
    if (!bVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x502b78);
    }
    goto LAB_00410cf9;
  case 10:
    iVar9 = 4;
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x5032d2);
    }
    break;
  case 0xb:
  case 0xc:
    iVar9 = 3;
    if (!bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0040ba4e(0x503a03);
    }
  }
  if ((iVar9 - 3U < 0xfffffffe) && (*(char *)((int)this + 0xd) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x503d76);
  }
LAB_00410cf9:
  if (((*(char *)((int)this + 0xe) == '\x01') && (1 < iVar9 - 1U)) && (iVar9 != 4)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x503d34);
  }
  *(char *)(*(int *)this + 8) = (char)param_1;
  return;
}

