/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4692 */

ushort FUN_101c4692(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined1 auStack_18 [2];
  ushort local_16;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_18;
  iVar2 = param_1[2];
  uVar3 = 0x55;
  if ((uint)param_1[1] <= iVar2 + 1U) {
LAB_101c46db:
    uVar1 = 0;
    goto LAB_101c46fb;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar4 = (ushort *)(*param_1 + iVar2);
      goto LAB_101c46e7;
    }
    uVar1 = 0;
  }
  else {
    puVar4 = &local_16;
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,puVar4,2);
    if (iVar2 != 2) goto LAB_101c46db;
    iVar2 = param_1[2];
LAB_101c46e7:
    uVar1 = *puVar4 << 8 | *puVar4 >> 8;
  }
  param_1[2] = iVar2 + 2;
  uVar3 = 0;
LAB_101c46fb:
  *param_2 = uVar3;
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_18)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

