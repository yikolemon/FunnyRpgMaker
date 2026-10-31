/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043044 */

undefined1 **
FUN_10043044(undefined1 **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 **local_248;
  undefined1 **local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 *local_228;
  undefined4 local_224;
  undefined4 local_220;
  code *local_21c;
  undefined4 local_218 [126];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_248;
  local_18 = &LAB_1005a500;
  local_1c = ExceptionList;
  local_228 = local_218;
  local_224 = 0;
  local_21c = FUN_1002747c;
  local_220 = 500;
  local_14 = 0;
  local_23c = param_4;
  uStack_238 = param_5;
  uStack_234 = param_6;
  uStack_230 = param_7;
  local_240 = param_3;
  local_244 = (undefined1 **)param_2;
  local_248 = (undefined1 **)&local_228;
  local_22c = 0;
  ExceptionList = &local_1c;
  FUN_100247f8();
  local_244 = (undefined1 **)&local_228;
  local_248 = param_1;
  FUN_10043137();
  local_14 = 0xffffffff;
  if (local_228 != local_218) {
    local_248 = (undefined1 **)local_228;
    thunk_FUN_10274120();
  }
  ExceptionList = local_1c;
  return param_1;
}

