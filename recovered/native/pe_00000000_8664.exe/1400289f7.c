/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400289f7 */

/* WARNING: Removing unreachable block (ram,0x000140028c2c) */

undefined8 *
FUN_1400289f7(undefined8 *param_1,longlong *param_2,double param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 in_stack_fffffffffffffd18;
  undefined8 in_stack_fffffffffffffd20;
  undefined4 uVar10;
  undefined1 *local_2c8;
  ulonglong local_2c0;
  undefined8 local_2b8;
  code *local_2b0;
  undefined1 local_2a8 [504];
  double local_b0 [2];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_70;
  ulonglong local_68;
  undefined1 local_51;
  undefined8 local_50;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffd20 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd18 >> 0x20);
  local_50 = 0xfffffffffffffffe;
  if ((*param_4 & 0x4000) != 0) {
    local_a0 = 0xb;
    local_b0[0] = param_3;
    cVar2 = FUN_14001b4bd(param_2,local_b0,param_4,param_5);
    if (cVar2 != '\0') {
      *param_1 = param_2;
      return param_1;
    }
  }
  iVar3 = FUN_14019e8c0();
  uVar8 = 1;
  if (iVar3 == 0) {
    uVar8 = *param_4 >> 10 & 3;
  }
  if (0x7fefffffffffffff < (ulonglong)ABS(param_3)) {
    local_98 = *(undefined8 *)param_4;
    uStack_90 = *(undefined8 *)(param_4 + 2);
    FUN_14001e874(param_1,param_2,NAN(param_3),&local_98,CONCAT44(uVar4,uVar8));
    return param_1;
  }
  if ((uVar8 != 0) && ((*param_4 & 0x38) == 0x20)) {
    lVar5 = param_2[1];
    uVar6 = lVar5 + 1;
    if ((ulonglong)param_2[2] < uVar6) {
      (*(code *)param_2[3])(param_2);
      lVar5 = param_2[1];
      uVar6 = lVar5 + 1;
    }
    param_2[1] = uVar6;
    *(char *)(*param_2 + lVar5) = (char)(0x202b2d00 >> (sbyte)(uVar8 << 3));
    uVar8 = 0;
    if (param_4[2] != 0) {
      param_4[2] = param_4[2] - 1;
    }
  }
  uVar1 = param_4[3];
  uVar7 = uVar1;
  if (((int)uVar1 < 0) && (uVar7 = 6, (*param_4 & 7) == 0)) {
    FUN_14001fcb7(&local_2c8);
    FUN_140027809(param_1,param_2,&local_2c8,param_4,CONCAT44(uVar4,uVar8),CONCAT44(uVar10,0x10),
                  param_5);
    return param_1;
  }
  local_2c8 = local_2a8;
  local_2c0 = 0;
  local_2b0 = FUN_14001d464;
  local_2b8 = 500;
  uVar9 = *param_4;
  if (((byte)uVar9 & 7) == 1) {
    if (uVar7 == 0x7fffffff) {
      local_51 = 1;
      FUN_14001b296(&local_70,"number is too big");
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(&local_70,&DAT_140ee3c60);
    }
    uVar7 = uVar7 + 1;
    if (uVar1 != 0) {
      *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 0x20;
    }
  }
  else if ((uVar9 & 7) == 2) {
    if (uVar1 != 0) {
      uVar9 = uVar9 | 0x2000;
      *param_4 = uVar9;
    }
  }
  else {
    if ((uVar9 & 7) == 4) {
      if (uVar8 != 0) {
        uVar9 = uVar8 << 3;
        local_2a8[0] = (undefined1)(0x202b2d00 >> (sbyte)uVar9);
      }
      local_2c0 = (ulonglong)(uVar8 != 0);
      local_88 = *(undefined8 *)param_4;
      uStack_80 = *(undefined8 *)(param_4 + 2);
      FUN_140022c2f(uVar9,&local_88,&local_2c8);
      local_70 = local_2c8;
      local_68 = local_2c0;
      FUN_140024bf5(param_1,param_2,param_4,local_2c0,local_2c0,&local_70);
      goto code_r0x000140028ce0;
    }
    uVar7 = uVar7 + (uVar7 == 0);
  }
  uVar4 = FUN_140022f13(uVar9,uVar7,param_4,0,&local_2c8);
  param_4[3] = uVar7;
  local_70 = local_2c8;
  local_68 = CONCAT44(uVar4,(int)local_2c0);
  FUN_140026292(param_1,param_2,&local_70,param_4,uVar8,CONCAT44(uVar10,0x10),param_5);
code_r0x000140028ce0:
  if (local_2c8 != local_2a8) {
    thunk_FUN_1401aea30();
  }
  return param_1;
}

