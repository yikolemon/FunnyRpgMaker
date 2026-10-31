/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400df1a0 */

void FUN_1400df1a0(longlong param_1,longlong param_2,float param_3,undefined8 param_4,uint param_5,
                  char *param_6,char *param_7,undefined4 param_8,undefined4 *param_9)

{
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 *local_a0;
  char *local_98;
  char *local_90;
  undefined4 local_88;
  uint local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  if ((param_6 != param_7 && 0xffffff < param_5) && (*param_6 != '\0')) {
    if (param_2 == 0) {
      param_2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    }
    if ((param_3 == 0.0) && (!NAN(param_3))) {
      param_3 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    local_78 = *(undefined4 *)(param_1 + 0x60);
    uStack_74 = *(undefined4 *)(param_1 + 100);
    uStack_70 = *(undefined4 *)(param_1 + 0x68);
    uStack_6c = *(undefined4 *)(param_1 + 0x6c);
    if (param_9 != (undefined4 *)0x0) {
      local_78 = FUN_14007b71f(local_78,*param_9);
      uStack_74 = FUN_14007b71f(uStack_74,param_9[1]);
      uStack_70 = FUN_14004863e(uStack_70,param_9[2]);
      uStack_6c = FUN_14004863e(uStack_6c,param_9[3]);
    }
    local_88 = param_8;
    local_90 = param_7;
    local_98 = param_6;
    local_a0 = &local_78;
    local_a8 = param_5;
    local_80 = (uint)(param_9 != (undefined4 *)0x0);
    FUN_1400df32c(param_2,param_1,param_3,param_4);
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_c8);
}

