/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100307a4 */

undefined4
FUN_100307a4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 *local_22c;
  uint local_228;
  uint local_224;
  code *local_220;
  undefined1 local_21c [504];
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_22c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059a10;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_6 + 0x28) == 0) {
    FUN_1001909c(param_3,param_4 + param_3);
    local_22c = (undefined1 *)CONCAT31(local_22c._1_3_,0x30);
    FUN_10029039(param_1,param_2,param_5,&local_22c);
  }
  else {
    local_22c = local_21c;
    local_228 = 0;
    local_220 = FUN_1002747c;
    local_224 = 500;
    local_14 = 0;
    local_20 = (undefined1 *)&local_22c;
    FUN_1001909c(param_3,param_4 + param_3);
    if (0 < param_5) {
      iVar2 = 0;
      do {
        uVar1 = local_228 + 1;
        local_24 = iVar2;
        if (local_224 < uVar1) {
          local_14 = 0;
          (*local_220)(&local_22c,uVar1);
          uVar1 = local_228 + 1;
        }
        local_22c[local_228] = 0x30;
        iVar2 = local_24 + 1;
        local_228 = uVar1;
      } while (iVar2 != param_5);
    }
    local_14 = 0;
    FUN_10027d30(param_1,param_2,local_22c,local_228);
    local_14 = 0xffffffff;
    if (local_22c != local_21c) {
      thunk_FUN_10274120(local_22c);
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

