/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10032730 */

void FUN_10032730(undefined4 *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piStack_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&piStack_24;
  iVar1 = param_2[1];
  uVar2 = iVar1 + 1;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar1 = param_2[1];
    uVar2 = iVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + iVar1) = 0x22;
  param_4 = param_4 + param_3;
  do {
    local_1c = 0;
    local_18 = 0;
    local_20 = param_4;
    FUN_10032bef(param_3,param_4 - param_3,&local_20);
    FUN_1001909c(param_3,local_20);
    param_3 = local_1c;
    if (local_1c == 0) break;
    FUN_100277c8(&piStack_24,param_2,&local_20);
    param_2 = piStack_24;
  } while (param_3 != param_4);
  iVar1 = param_2[1];
  uVar2 = iVar1 + 1;
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar1 = param_2[1];
    uVar2 = iVar1 + 1;
  }
  param_2[1] = uVar2;
  *(undefined1 *)(*param_2 + iVar1) = 0x22;
  *param_1 = param_2;
  if (DAT_10388d00 == (local_14 ^ (uint)&piStack_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

