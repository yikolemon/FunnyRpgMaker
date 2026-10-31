/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb9e6 */

void __thiscall FUN_100fb9e6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_18 = param_3;
  iVar2 = FUN_100fa534(0,0,param_2,param_3);
  if (iVar2 < 1) goto LAB_100fbab5;
  iVar1 = param_1[1];
  iVar5 = *param_1 + (uint)(*param_1 == 0);
  iVar3 = iVar2 + iVar5;
  if (iVar3 < iVar1) {
LAB_100fba3b:
    if (iVar1 < iVar3) {
      if (iVar1 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar1 / 2 + iVar1;
      }
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
      }
      goto LAB_100fba63;
    }
    iVar3 = param_1[2];
  }
  else {
    iVar4 = iVar1 * 2;
    if (iVar1 * 2 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar4 <= iVar1) goto LAB_100fba3b;
LAB_100fba63:
    local_1c = FUN_100fa1fa(iVar4);
    if (param_1[2] != 0) {
      FUN_1025b2d0(local_1c,param_1[2],*param_1);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = local_1c;
    param_1[1] = iVar4;
    iVar3 = local_1c;
  }
  *param_1 = iVar2 + iVar5;
  FUN_100fa534(iVar3 + iVar5 + -1,iVar2 + 1,param_2,local_18);
LAB_100fbab5:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

