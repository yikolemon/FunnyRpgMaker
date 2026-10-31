/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100276af */

undefined4 * FUN_100276af(undefined4 *param_1,int *param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbStack_24;
  uint *puStack_20;
  int iStack_1c;
  int *piStack_18;
  byte local_11;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&pbStack_24;
  local_11 = param_3;
  iVar3 = param_2[1];
  uVar2 = iVar3 + 1;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar3 = param_2[1];
    uVar2 = iVar3 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + iVar3) = 0x27;
  iVar3 = (int)(char)param_3;
  bVar1 = 1;
  if ((((0x1f < param_3) && (iVar3 != 0x22)) && (iVar3 != 0x5c)) && (iVar3 != 0x7f)) {
    bVar1 = FUN_10027959(iVar3);
    bVar1 = bVar1 ^ 1;
  }
  if ((param_3 == 0x27) || ((param_3 != 0x22 & bVar1) != 0)) {
    pbStack_24 = &local_11;
    puStack_20 = &local_10;
    iStack_1c = iVar3;
    FUN_100277c8(&piStack_18,param_2,&pbStack_24);
    param_2 = piStack_18;
  }
  else {
    iVar3 = param_2[1];
    uVar2 = iVar3 + 1;
    if ((uint)param_2[2] < uVar2) {
      (*(code *)param_2[3])(param_2,uVar2);
      iVar3 = param_2[1];
      uVar2 = iVar3 + 1;
    }
    param_2[1] = uVar2;
    *(byte *)(*param_2 + iVar3) = param_3;
  }
  iVar3 = param_2[1];
  uVar2 = iVar3 + 1;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar3 = param_2[1];
    uVar2 = iVar3 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + iVar3) = 0x27;
  *param_1 = param_2;
  if (DAT_10388d00 == (local_10 ^ (uint)&pbStack_24)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

