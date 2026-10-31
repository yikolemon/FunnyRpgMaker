/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4ecd */

undefined4 FUN_101c4ecd(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  uint local_14;
  
  puVar4 = &local_18;
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  iVar1 = param_1[2];
  uVar3 = 0;
  uVar2 = 0x55;
  if ((uint)param_1[1] <= iVar1 + 3U) goto LAB_101c4f30;
  if ((code *)param_1[5] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar4 = (undefined4 *)(*param_1 + iVar1);
      goto LAB_101c4f22;
    }
    uVar3 = 0;
  }
  else {
    iVar1 = (*(code *)param_1[5])(param_1,iVar1,&local_18,4);
    if (iVar1 != 4) goto LAB_101c4f30;
    iVar1 = param_1[2];
LAB_101c4f22:
    uVar3 = *puVar4;
  }
  param_1[2] = iVar1 + 4;
  uVar2 = 0;
LAB_101c4f30:
  *param_2 = uVar2;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

