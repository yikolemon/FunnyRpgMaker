/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d299 */

int FUN_1000d299(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  iVar2 = *param_3;
  local_2c = param_1 + param_2;
  local_28 = param_1;
  local_20 = 0;
  local_1c = 0;
  local_24 = local_2c;
  if (param_2 != 0) {
    local_20 = FUN_1000b5cf(param_1,local_2c,&local_1c);
  }
  local_18 = 0;
  iVar4 = 0;
  if (local_28 != local_24) {
    iVar3 = 0;
    while( true ) {
      if ((-1 < iVar2) && (iVar4 = iVar2, iVar3 == iVar2)) goto LAB_1000d349;
      uVar1 = FUN_1000d491(local_1c);
      iVar4 = iVar3;
      if ((int)(uVar1 ^ 0x7fffffff) < iVar3) break;
      iVar3 = uVar1 + iVar3;
      if (((-1 < iVar2) && (iVar2 < iVar3)) || (FUN_1000d4fe(), iVar4 = iVar3, local_28 == local_24)
         ) goto LAB_1000d349;
    }
    if (iVar2 < 0) {
      *param_3 = 0x7fffffff;
      iVar2 = local_2c;
      goto LAB_1000d353;
    }
  }
LAB_1000d349:
  *param_3 = iVar4;
  iVar2 = local_28;
LAB_1000d353:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}

