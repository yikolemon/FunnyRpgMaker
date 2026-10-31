/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002289f */

/* WARNING: Removing unreachable block (ram,0x000140022acf) */

undefined8 *
FUN_14002289f(undefined8 *param_1,longlong *param_2,float param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 in_stack_fffffffffffffd08;
  undefined8 in_stack_fffffffffffffd10;
  undefined4 uVar11;
  undefined1 *local_2d8;
  ulonglong local_2d0;
  undefined8 local_2c8;
  code *local_2c0;
  undefined1 local_2b8 [504];
  float local_c0 [4];
  undefined4 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_80;
  ulonglong local_78;
  undefined1 local_61;
  undefined8 local_60;
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffd10 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  if ((*param_4 & 0x4000) != 0) {
    local_b0 = 9;
    local_c0[0] = param_3;
    cVar3 = FUN_14001b4bd(param_2,local_c0,param_4,param_5);
    if (cVar3 != '\0') {
      *param_1 = param_2;
      return param_1;
    }
  }
  uVar10 = SUB84((double)param_3,0);
  iVar4 = FUN_14019e8c0(uVar10);
  uVar9 = 1;
  if (iVar4 == 0) {
    uVar9 = *param_4 >> 10 & 3;
  }
  if (0x7f7fffff < (uint)ABS(param_3)) {
    local_a8 = *param_4;
    uStack_a4 = param_4[1];
    uStack_a0 = param_4[2];
    uStack_9c = param_4[3];
    FUN_14001e874(param_1,param_2,NAN(param_3),&local_a8,CONCAT44(uVar5,uVar9));
    return param_1;
  }
  if ((uVar9 != 0) && ((*param_4 & 0x38) == 0x20)) {
    lVar6 = param_2[1];
    uVar7 = lVar6 + 1;
    if ((ulonglong)param_2[2] < uVar7) {
      (*(code *)param_2[3])(param_2);
      lVar6 = param_2[1];
      uVar7 = lVar6 + 1;
    }
    param_2[1] = uVar7;
    *(char *)(*param_2 + lVar6) = (char)(0x202b2d00 >> (sbyte)(uVar9 << 3));
    uVar9 = 0;
    if (param_4[2] != 0) {
      param_4[2] = param_4[2] - 1;
    }
  }
  uVar1 = param_4[3];
  uVar8 = uVar1;
  if (((int)uVar1 < 0) && (uVar8 = 6, (*param_4 & 7) == 0)) {
    local_2d8 = (undefined1 *)FUN_14001e941(param_3);
    FUN_1400235eb(param_1,param_2,&local_2d8,param_4,CONCAT44(uVar5,uVar9),CONCAT44(uVar11,7),
                  param_5);
    return param_1;
  }
  local_2d8 = local_2b8;
  local_2d0 = 0;
  local_2c0 = FUN_14001d464;
  local_2c8 = 500;
  uVar2 = *param_4;
  if (((byte)uVar2 & 7) == 1) {
    if (uVar8 == 0x7fffffff) {
      local_61 = 1;
      FUN_14001b296(&local_80,"number is too big");
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(&local_80,&DAT_140ee3c60);
    }
    uVar8 = uVar8 + 1;
    if (uVar1 != 0) {
      *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 0x20;
    }
  }
  else if ((uVar2 & 7) == 2) {
    if (uVar1 != 0) {
      *param_4 = uVar2 | 0x2000;
    }
  }
  else {
    if ((uVar2 & 7) == 4) {
      if (uVar9 != 0) {
        local_2b8[0] = (undefined1)(0x202b2d00 >> (sbyte)(uVar9 << 3));
      }
      local_2d0 = (ulonglong)(uVar9 != 0);
      local_98 = *(undefined8 *)param_4;
      uStack_90 = *(undefined8 *)(param_4 + 2);
      FUN_140022c2f(uVar10,&local_98,&local_2d8);
      local_80 = local_2d8;
      local_78 = local_2d0;
      FUN_140024bf5(param_1,param_2,param_4,local_2d0,local_2d0,&local_80);
      goto code_r0x000140022b7e;
    }
    uVar8 = uVar8 + (uVar8 == 0);
  }
  uVar5 = FUN_140022f13(uVar10,uVar8,param_4,1,&local_2d8);
  param_4[3] = uVar8;
  local_80 = local_2d8;
  local_78 = CONCAT44(uVar5,(int)local_2d0);
  FUN_140026292(param_1,param_2,&local_80,param_4,uVar9,CONCAT44(uVar11,7),param_5);
code_r0x000140022b7e:
  if (local_2d8 != local_2b8) {
    thunk_FUN_1401aea30();
  }
  return param_1;
}

