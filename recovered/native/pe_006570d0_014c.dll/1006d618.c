/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006d618 */

void __thiscall FUN_1006d618(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2670;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1006cfe6(&local_30,param_3);
  uVar1 = local_2c;
  local_24 = local_30;
  if (*(char *)(local_28 + 0xd) == '\0') {
    if (*(uint *)(local_28 + 0x24) < 8) {
      iVar3 = local_28 + 0x10;
    }
    else {
      iVar3 = *(int *)(local_28 + 0x10);
    }
    iVar3 = FUN_1006d1a8(iVar3,*(undefined4 *)(local_28 + 0x20));
    if (-1 < iVar3) {
      uVar4 = 0;
      goto code_r0x1006d6d7;
    }
  }
  if (param_1[1] == 0x6666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  FUN_1006d70c(param_1,*param_1,param_3);
  uVar2 = local_2c;
  local_2c = 0;
  local_14 = 0xffffffff;
  FUN_1006d104();
  local_28 = FUN_1005271c(local_24,uVar1,uVar2);
  uVar4 = 1;
code_r0x1006d6d7:
  *param_2 = local_28;
  *(undefined1 *)(param_2 + 1) = uVar4;
  *unaff_FS_OFFSET = local_1c;
  return;
}

