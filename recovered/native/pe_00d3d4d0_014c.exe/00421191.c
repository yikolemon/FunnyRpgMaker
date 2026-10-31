/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421191 */

void __fastcall FUN_00421191(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  
  iVar5 = *param_1;
  iVar2 = param_1[1];
  iVar7 = -iVar5;
  if (iVar5 < iVar2) {
    iVar3 = 0x5a0000;
    iVar8 = iVar7;
    local_1c = iVar2;
    if (iVar2 <= iVar7) {
      iVar3 = -0xb40000;
      if (0 < iVar2) {
        iVar3 = 0xb40000;
      }
      iVar8 = -iVar2;
      local_1c = iVar7;
    }
  }
  else {
    iVar3 = 0;
    iVar8 = iVar2;
    local_1c = iVar5;
    if (iVar2 < iVar7) {
      local_1c = -iVar2;
      iVar3 = -0x5a0000;
      iVar8 = iVar5;
    }
  }
  iVar2 = 1;
  iVar5 = iVar2;
  do {
    iVar6 = iVar5 + iVar8 >> ((byte)iVar2 & 0x1f);
    iVar1 = iVar5 + local_1c >> ((byte)iVar2 & 0x1f);
    iVar7 = *(int *)(&UNK_004d7358 + iVar2 * 4);
    if (iVar8 < 1) {
      iVar6 = -iVar6;
      iVar7 = -iVar7;
    }
    else {
      iVar1 = -iVar1;
    }
    local_1c = local_1c + iVar6;
    iVar3 = iVar3 + iVar7;
    iVar8 = iVar8 + iVar1;
    iVar5 = iVar5 * 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x17);
  if (iVar3 < 0) {
    uVar4 = -(8U - iVar3 & 0xfffffff0);
  }
  else {
    uVar4 = iVar3 + 8U & 0x7ffffff0;
  }
  *param_1 = local_1c;
  param_1[1] = uVar4;
  return;
}

