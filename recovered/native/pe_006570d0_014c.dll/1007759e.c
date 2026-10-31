/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007759e */

void FUN_1007759e(int *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_5c [36];
  undefined1 local_38 [24];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2c20;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar1 = *param_2;
  uVar3 = param_1[1] - *param_1;
  if ((uVar1 != 0xffffffff) && (bVar2 = uVar3 < uVar1, uVar3 = uVar1, bVar2)) {
    local_20 = local_5c;
    FUN_10001f66("ReadBytesVec: size is larger than buffer size");
    local_14 = 0;
    FUN_1007788e(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_5c,&DAT_10367d38);
  }
  FUN_10077798(*param_1,uVar3);
  *unaff_FS_OFFSET = local_1c;
  return;
}

