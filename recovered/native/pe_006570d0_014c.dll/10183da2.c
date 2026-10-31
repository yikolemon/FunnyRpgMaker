/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10183da2 */

void __thiscall FUN_10183da2(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_10186100;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (0xccccccc < *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  iVar5 = param_1[1];
  iVar1 = *param_1;
  local_20 = (undefined1 *)&local_38;
  iVar3 = FUN_10001426(*param_2 * 0x14);
  uVar4 = *param_2;
  local_2c = (iVar5 - iVar1 >> 2) * -0x33333333;
  iVar5 = *param_1;
  iVar1 = param_1[1];
  local_14 = 0xffffffff;
  local_38 = param_1;
  local_34 = iVar3;
  local_30 = uVar4;
  piVar2 = param_1;
  local_24 = iVar3;
  if (iVar5 != iVar1) {
    do {
      local_28 = piVar2;
      FUN_10183f12(iVar3,iVar5);
      iVar3 = iVar3 + 0x14;
      iVar5 = iVar5 + 0x14;
      piVar2 = local_28;
    } while (iVar5 != iVar1);
    uVar4 = *param_2;
  }
  local_14 = 0xffffffff;
  local_34 = 0;
  FUN_10183e9e(local_24,local_2c,uVar4);
  FUN_1001bce2();
  *unaff_FS_OFFSET = local_1c;
  return;
}

