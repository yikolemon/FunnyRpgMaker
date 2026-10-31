/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f732 */

int * __thiscall
FUN_1001f732(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar2 = *param_1;
  uVar3 = param_1[3];
  if (uVar3 == 0) {
    uVar9 = 0;
    uVar5 = 0;
    iVar6 = iVar2;
    iVar8 = iVar2;
  }
  else {
    uVar1 = param_4 + (param_3 - iVar2) * 8;
    uVar9 = uVar1 & 0x1f;
    uVar5 = param_6 + (param_5 - iVar2) * 8;
    iVar6 = iVar2 + (uVar5 >> 5) * 4;
    if ((int)uVar5 < 0) {
      iVar6 = iVar6 + -0x20000000;
    }
    uVar5 = uVar5 & 0x1f;
    iVar8 = ((int)uVar1 >> 0x1f & 0xe0000000U) + iVar2 + (uVar1 >> 5) * 4;
  }
  local_20 = param_1;
  if ((iVar8 != iVar6) || (iVar7 = iVar2, uVar9 != uVar5)) {
    local_24 = iVar6;
    FUN_1001fd4d(&local_1c,iVar6,uVar5,((int)uVar3 >> 0x1f & 0xe0000000U) + iVar2 + (uVar3 >> 5) * 4
                 ,uVar3 & 0x1f,iVar8,uVar9);
    piVar4 = local_20;
    FUN_1001fca8(local_18 + (local_1c - *local_20) * 8);
    iVar7 = *piVar4;
  }
  *param_2 = iVar7;
  param_2[1] = 0;
  FUN_1001fd02(uVar9 + (iVar8 - iVar2) * 8);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

