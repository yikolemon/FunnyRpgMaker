/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c05ee */

int __fastcall
FUN_101c05ee(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  piVar1 = (int *)FUN_101c5a0d(param_3);
  if (*piVar1 == 0) {
    puVar2 = (undefined4 *)FUN_101c21f6(param_4,8,&local_18);
    if (local_18 == 0) {
      *piVar1 = (int)puVar2;
      *puVar2 = param_3;
      puVar2[1] = param_1;
      uVar3 = param_2[2];
      if (*param_2 <= uVar3) {
        local_18 = FUN_101c5a5d();
        if (local_18 != 0) goto LAB_101c066f;
        uVar3 = param_2[2];
      }
      param_2[2] = uVar3 + 1;
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
    if (param_5 != '\0') {
      *(undefined4 *)(*piVar1 + 4) = param_1;
    }
  }
LAB_101c066f:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

