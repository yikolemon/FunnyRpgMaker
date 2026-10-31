/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100304fe */

undefined4 __thiscall FUN_100304fe(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_18 [3];
  undefined1 uStack_15;
  int *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_18;
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar1 = param_3[1];
    uVar2 = iVar1 + 1;
    if ((uint)param_3[2] < uVar2) {
      (*(code *)param_3[3])(param_3,uVar2);
      iVar1 = param_3[1];
      uVar2 = iVar1 + 1;
    }
    param_3[1] = uVar2;
    *(char *)(*param_3 + iVar1) = (char)(0x202b2d00 >> ((byte)(iVar3 << 3) & 0x1f));
  }
  FUN_10030bc1(&local_14,param_3,param_1[1],param_1[4],1,(int)(char)param_1[5]);
  iVar3 = param_1[6];
  if (0 < iVar3) {
    do {
      iVar1 = local_14[1];
      uVar2 = iVar1 + 1;
      if ((uint)local_14[2] < uVar2) {
        (*(code *)local_14[3])(local_14,uVar2);
        iVar1 = local_14[1];
        uVar2 = iVar1 + 1;
      }
      local_14[1] = uVar2;
      *(undefined1 *)(*local_14 + iVar1) = 0x30;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uStack_15 = (undefined1)param_1[7];
  iVar3 = local_14[1];
  uVar2 = iVar3 + 1;
  if ((uint)local_14[2] < uVar2) {
    (*(code *)local_14[3])(local_14,uVar2);
    iVar3 = local_14[1];
    uVar2 = iVar3 + 1;
  }
  local_14[1] = uVar2;
  *(undefined1 *)(*local_14 + iVar3) = uStack_15;
  FUN_10028c00(param_2,param_1[8],local_14);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_18)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

