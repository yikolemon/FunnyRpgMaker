/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c091d */

int FUN_101c091d(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  *param_3 = 0;
  if (param_1 == (undefined4 *)0x0) {
    iVar3 = 0x21;
    goto LAB_101c0a0e;
  }
  iVar3 = 6;
  if (param_2 == (uint *)0x0) goto LAB_101c0a0e;
  uVar2 = *param_1;
  uVar1 = *param_2 & 7;
  if (uVar1 == 4) {
    local_1c = uVar2;
    uVar1 = FUN_101bff17(uVar2,0x28,&local_18);
    iVar3 = local_18;
    if (local_18 != 0) goto LAB_101c0a0e;
    *(undefined4 *)(uVar1 + 0x1c) = local_1c;
    iVar3 = FUN_101d77ac(uVar1,param_2[3]);
    if (iVar3 != 0) {
      FUN_101c0017(local_1c,uVar1);
      goto LAB_101c0a0e;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar1 = param_2[4];
      if (uVar1 == 0) goto LAB_101c09b7;
    }
    else {
      if (uVar1 != 1) {
LAB_101c09b7:
        if (((*param_2 & 2) != 0) && (param_2[4] != 0)) {
          FUN_101c0a53(param_2[4]);
        }
        goto LAB_101c0a0e;
      }
      local_1c = uVar2;
      uVar1 = FUN_101bff17(uVar2,0x28,&local_18);
      iVar3 = local_18;
      if (local_18 != 0) goto LAB_101c0a0e;
      FUN_101c0a33(uVar1,param_2[1],param_2[2]);
      uVar2 = local_1c;
    }
    *(undefined4 *)(uVar1 + 0x1c) = uVar2;
  }
  *param_3 = uVar1;
  iVar3 = 0;
LAB_101c0a0e:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

