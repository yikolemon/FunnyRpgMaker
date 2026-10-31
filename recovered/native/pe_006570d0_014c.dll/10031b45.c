/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10031b45 */

undefined4
FUN_10031b45(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 *local_230;
  uint local_22c;
  uint local_228;
  code *local_224;
  undefined1 local_220 [504];
  undefined1 local_28 [4];
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_230;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059a60;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(int *)(param_7 + 0x28) == 0) {
    FUN_10025550(&local_230,param_2,param_3,param_4,param_5);
    puVar1 = local_230;
    local_230 = (undefined1 *)CONCAT31(local_230._1_3_,0x30);
    FUN_10029039(param_1,puVar1,param_6,&local_230);
  }
  else {
    local_230 = local_220;
    local_22c = 0;
    local_224 = FUN_1002747c;
    local_228 = 500;
    local_14 = 0;
    local_20 = (undefined1 *)&local_230;
    FUN_10025550(local_28,&local_230,param_3,param_4,param_5);
    if (0 < param_6) {
      iVar3 = 0;
      do {
        uVar2 = local_22c + 1;
        local_24 = iVar3;
        if (local_228 < uVar2) {
          local_14 = 0;
          (*local_224)(&local_230,uVar2);
          uVar2 = local_22c + 1;
        }
        local_230[local_22c] = 0x30;
        iVar3 = local_24 + 1;
        local_22c = uVar2;
      } while (iVar3 != param_6);
    }
    local_14 = 0;
    FUN_10027d30(param_1,param_2,local_230,local_22c);
    local_14 = 0xffffffff;
    if (local_230 != local_220) {
      thunk_FUN_10274120(local_230);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

