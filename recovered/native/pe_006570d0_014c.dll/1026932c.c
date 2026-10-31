/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026932c */

undefined4
FUN_1026932c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = CONCAT44(param_3,param_2);
  if (((uint)param_1[3] >> 0xd & 1) == 0) {
    *(undefined1 *)(param_5 + 0x1c) = 1;
    *(undefined4 *)(param_5 + 0x18) = 0x16;
    return 0xffffffff;
  }
  LOCK();
  param_1[3] = param_1[3] & 0xfffffff7;
  UNLOCK();
  bVar1 = common_fseek_binary_mode_read_only_fast_track_nolock(param_1,param_2,param_3,param_4);
  if (!bVar1) {
    if (param_4 == 1) {
      lVar2 = FUN_1026e92f(param_1,param_5);
      lVar3 = lVar2 + lVar3;
      param_4 = 0;
    }
    FUN_1026d759(param_1,param_5);
    param_1[2] = 0;
    *param_1 = param_1[1];
    if (((uint)param_1[3] >> 2 & 1) == 0) {
      if ((((byte)param_1[3] & 0x41) == 0x41) && (((uint)param_1[3] >> 8 & 1) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      LOCK();
      param_1[3] = param_1[3] & 0xfffffffc;
      UNLOCK();
    }
    lVar3 = FUN_102793ca(param_1[4],lVar3,param_4,param_5);
    if (lVar3 == -1) {
      return 0xffffffff;
    }
  }
  return 0;
}

