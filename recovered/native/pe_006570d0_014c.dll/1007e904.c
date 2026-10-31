/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e904 */

bool __thiscall FUN_1007e904(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2f50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = param_1[1] - *param_1;
  iVar1 = FUN_102595e0(*param_1,*param_2,iVar2);
  if (iVar1 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (param_1[3] != -1) {
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      FUN_10044618(iVar2,param_1,param_1 + 1);
      *(undefined1 *)(local_2c + param_1[3]) = 0x55;
      local_14 = 0xffffffff;
      iVar1 = FUN_102595e0(local_2c,*param_2,local_28 - local_2c);
      bVar3 = iVar1 == 0;
      FUN_10004eae();
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return bVar3;
}

