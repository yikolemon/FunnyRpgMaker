/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100321a6 */

/* WARNING: Removing unreachable block (ram,0x100323fc) */

undefined4 *
FUN_100321a6(undefined4 *param_1,int *param_2,double param_3,uint param_4,undefined4 param_5,
            int param_6,int param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_260 [3];
  undefined1 local_25d;
  uint local_25c;
  int local_258;
  undefined1 *local_254;
  uint local_250;
  undefined4 local_24c;
  undefined8 local_248;
  double local_240;
  undefined4 uStack_238;
  undefined1 *local_230;
  uint local_22c;
  undefined4 local_228;
  code *local_224;
  undefined1 local_220 [504];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_260;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059a80;
  local_20 = *unaff_FS_OFFSET;
  uVar6 = SUB84(param_3,0);
  uVar7 = (undefined4)((ulonglong)param_3 >> 0x20);
  *unaff_FS_OFFSET = (int)&local_20;
  puVar1 = &stack0xfffffffc;
  puVar2 = auStack_260;
  if ((param_4 & 0x4000) != 0) {
    local_240 = param_3;
    uStack_238 = 0xb;
    cVar3 = FUN_100259b2(param_2,uVar6,uVar7,0xb);
    puVar1 = local_28;
    puVar2 = local_24;
    if (cVar3 != '\0') {
      *param_1 = param_2;
      goto code_r0x100324e3;
    }
  }
  local_24 = puVar2;
  local_28 = puVar1;
  local_248 = param_3;
  iVar4 = FUN_10268ff0(param_3);
  local_25c = 1;
  if (iVar4 == 0) {
    local_25c = param_4 >> 10 & 3;
  }
  if (0x7fefffff < (local_248._4_4_ & 0x7fffffff)) {
    FUN_10028621(param_1,param_2,NAN(param_3),param_4,param_5,param_6,param_7,local_25c);
    goto code_r0x100324e3;
  }
  if (local_25c != 0 && (param_4 & 0x38) == 0x20) {
    iVar4 = param_2[1];
    uVar5 = iVar4 + 1;
    if ((uint)param_2[2] < uVar5) {
      (*(code *)param_2[3])(param_2,uVar5);
      iVar4 = param_2[1];
      uVar5 = iVar4 + 1;
    }
    param_2[1] = uVar5;
    *(char *)(*param_2 + iVar4) = (char)(0x202b2d00 >> (sbyte)(local_25c << 3));
    local_25c = 0;
    if (param_6 != 0) {
      param_6 = param_6 + -1;
    }
  }
  iVar4 = param_7;
  if ((param_7 < 0) && (iVar4 = 6, (param_4 & 7) == 0)) {
    FUN_1002984f(&local_230,param_3);
    FUN_10031265(param_1,param_2,&local_230,&param_4,local_25c,0x10,param_8);
    goto code_r0x100324e3;
  }
  local_230 = local_220;
  local_22c = 0;
  local_224 = FUN_1002747c;
  local_228 = 500;
  local_18 = 0;
  if (((byte)param_4 & 7) == 1) {
    if (iVar4 == 0x7fffffff) {
      local_25d = 1;
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(&local_254,&DAT_103607ac);
    }
    iVar4 = iVar4 + 1;
    if (param_7 != 0) {
      param_4 = param_4 | 0x2000;
    }
code_r0x1003245d:
    local_258 = iVar4;
    local_24c = FUN_1002cea3(uVar6,uVar7,iVar4,&param_4,0,&local_230);
    param_7 = local_258;
    local_254 = local_230;
    local_250 = local_22c;
    FUN_1002ffc5(param_1,param_2,&local_254,&param_4,local_25c,0x10,param_8);
  }
  else {
    if ((param_4 & 7) == 2) {
      if (param_7 != 0) {
        param_4 = param_4 | 0x2000;
      }
      goto code_r0x1003245d;
    }
    if ((param_4 & 7) != 4) {
      iVar4 = iVar4 + (uint)(iVar4 == 0);
      goto code_r0x1003245d;
    }
    if (local_25c != 0) {
      local_220[0] = (undefined1)(0x202b2d00 >> (sbyte)(local_25c << 3));
    }
    local_22c = (uint)(local_25c != 0);
    FUN_1002cbde(uVar6,uVar7,param_4,param_5,param_6,param_7,&local_230);
    local_254 = local_230;
    local_250 = local_22c;
    FUN_1002ea78(param_1,param_2,&param_4,local_22c,local_22c,&local_254);
  }
  local_18 = 0xffffffff;
  if (local_230 != local_220) {
    thunk_FUN_10274120();
  }
code_r0x100324e3:
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

