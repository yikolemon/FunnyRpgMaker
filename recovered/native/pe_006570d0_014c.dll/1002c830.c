/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c830 */

/* WARNING: Removing unreachable block (ram,0x1002ca97) */

undefined4 *
FUN_1002c830(undefined4 *param_1,int *param_2,float param_3,uint param_4,undefined4 param_5,
            int param_6,int param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_268 [7];
  undefined1 local_261;
  uint local_260;
  int local_25c;
  double local_258;
  undefined1 *local_24c;
  uint local_248;
  undefined4 local_244;
  float local_240;
  undefined4 uStack_238;
  undefined8 local_230;
  undefined4 local_228;
  code *local_224;
  undefined1 local_220 [504];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_268;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059940;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  puVar1 = &stack0xfffffffc;
  puVar2 = auStack_268;
  if ((param_4 & 0x4000) != 0) {
    local_240 = param_3;
    uStack_238 = 9;
    cVar3 = FUN_100259b2(param_2,param_3);
    puVar1 = local_28;
    puVar2 = local_24;
    if (cVar3 != '\0') {
      *param_1 = param_2;
      ExceptionList = local_20;
      return param_1;
    }
  }
  local_24 = puVar2;
  local_28 = puVar1;
  local_258 = (double)param_3;
  iVar4 = FUN_10268ff0(local_258);
  local_260 = 1;
  if (iVar4 == 0) {
    local_260 = param_4 >> 10 & 3;
  }
  if (0x7f7fffff < (uint)ABS(param_3)) {
    FUN_10028621(param_1,param_2,NAN(param_3),param_4,param_5,param_6,param_7,local_260);
    ExceptionList = local_20;
    return param_1;
  }
  if (local_260 != 0 && (param_4 & 0x38) == 0x20) {
    iVar4 = param_2[1];
    uVar5 = iVar4 + 1;
    if ((uint)param_2[2] < uVar5) {
      (*(code *)param_2[3])(param_2,uVar5);
      iVar4 = param_2[1];
      uVar5 = iVar4 + 1;
    }
    param_2[1] = uVar5;
    *(char *)(*param_2 + iVar4) = (char)(0x202b2d00 >> (sbyte)(local_260 << 3));
    local_260 = 0;
    if (param_6 != 0) {
      param_6 = param_6 + -1;
    }
  }
  iVar4 = param_7;
  if ((param_7 < 0) && (iVar4 = 6, (param_4 & 7) == 0)) {
    local_230 = FUN_100286cd();
    FUN_1002d6cd(param_1,param_2,&local_230,&param_4,local_260,7,param_8);
    ExceptionList = local_20;
    return param_1;
  }
  local_230._0_4_ = local_220;
  local_230._4_4_ = 0;
  local_224 = FUN_1002747c;
  local_228 = 500;
  local_18 = 0;
  uVar6 = (undefined4)((ulonglong)local_258 >> 0x20);
  if (((byte)param_4 & 7) == 1) {
    if (iVar4 == 0x7fffffff) {
      local_261 = 1;
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(&local_24c,&DAT_103607ac);
    }
    iVar4 = iVar4 + 1;
    if (param_7 != 0) {
      param_4 = param_4 | 0x2000;
    }
  }
  else if ((param_4 & 7) == 2) {
    if (param_7 != 0) {
      param_4 = param_4 | 0x2000;
    }
  }
  else {
    if ((param_4 & 7) == 4) {
      if (local_260 != 0) {
        local_220[0] = (undefined1)(0x202b2d00 >> (sbyte)(local_260 << 3));
      }
      local_230._4_4_ = (uint)(local_260 != 0);
      FUN_1002cbde(SUB84(local_258,0),uVar6,param_4,param_5,param_6,param_7,&local_230);
      local_24c = (undefined1 *)local_230;
      local_248 = local_230._4_4_;
      FUN_1002ea78(param_1,param_2,&param_4,local_230._4_4_,local_230._4_4_,&local_24c);
      goto code_r0x1002cb5b;
    }
    iVar4 = iVar4 + (uint)(iVar4 == 0);
  }
  local_25c = iVar4;
  local_244 = FUN_1002cea3(SUB84(local_258,0),uVar6,iVar4,&param_4,1,&local_230);
  param_7 = local_25c;
  local_24c = (undefined1 *)local_230;
  local_248 = local_230._4_4_;
  FUN_1002ffc5(param_1,param_2,&local_24c,&param_4,local_260,7,param_8);
code_r0x1002cb5b:
  local_18 = 0xffffffff;
  if ((undefined1 *)local_230 != local_220) {
    thunk_FUN_10274120();
  }
  ExceptionList = local_20;
  return param_1;
}

