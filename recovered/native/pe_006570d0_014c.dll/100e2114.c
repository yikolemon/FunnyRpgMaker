/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e2114 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e2114(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ea9c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
    uVar2 = *(uint *)(param_1 + 8);
  }
  else if (cVar1 == '\a') {
    uVar2 = (uint)*(double *)(param_1 + 8);
    uVar2 = (int)(*(double *)(param_1 + 8) - _DAT_102945c8) & (int)uVar2 >> 0x1f | uVar2;
  }
  else {
    if (cVar1 != '\x06') {
      local_24 = FUN_1001776c();
      FUN_10017682(local_3c,"type must be number, but is ",&local_24);
      local_14 = 0;
      FUN_10017546(local_58,0x12e,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_58,&DAT_1036074c);
    }
    uVar2 = *(uint *)(param_1 + 8);
  }
  *param_2 = uVar2;
  *unaff_FS_OFFSET = local_1c;
  return;
}

