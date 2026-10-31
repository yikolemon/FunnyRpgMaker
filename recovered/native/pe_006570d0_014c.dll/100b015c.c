/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b015c */

void __thiscall FUN_100b015c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c47a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10052556(&local_34,param_3);
  local_28 = local_34;
  local_24 = local_30;
  if (*(char *)(local_2c + 0xd) == '\0') {
    iVar2 = FUN_1001baf4(local_2c + 0x10);
    if (-1 < iVar2) {
      uVar3 = 0;
      goto code_r0x100b020e;
    }
  }
  if (param_1[1] == 0x30c30c3) {
                    /* WARNING: Subroutine does not return */
    FUN_1005283a();
  }
  FUN_100b0244(param_1,*param_1,param_3,param_4);
  uVar1 = local_30;
  local_30 = 0;
  local_14 = 0xffffffff;
  FUN_100b0302();
  local_2c = FUN_1005271c(local_28,local_24,uVar1);
  uVar3 = 1;
code_r0x100b020e:
  *param_2 = local_2c;
  *(undefined1 *)(param_2 + 1) = uVar3;
  *unaff_FS_OFFSET = local_1c;
  return;
}

