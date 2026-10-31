/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801027d9 */

void FUN_1801027d9(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined4 param_5)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  float local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  lVar4 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  local_98 = param_5;
  local_90 = 0.0;
  local_70 = param_2;
  local_68 = param_1;
  FUN_180192d20(*(undefined8 *)(lVar2 + 800),&local_68,&local_70,param_3);
  uVar6 = DAT_1802ac570;
  if (param_4 != '\0') {
    fVar1 = *(float *)(lVar4 + 0xe00);
    if (0.0 < fVar1) {
      uVar3 = *(undefined8 *)(lVar2 + 800);
      uVar5 = FUN_18010129b(6,DAT_1802ac570);
      local_78 = CONCAT44((float)((ulonglong)local_70 >> 0x20) + DAT_1802dc280._4_4_,
                          (float)local_70 + (float)DAT_1802dc280);
      local_80 = CONCAT44((float)((ulonglong)local_68 >> 0x20) + DAT_1802dc280._4_4_,
                          (float)local_68 + (float)DAT_1802dc280);
      local_88 = 0;
      local_98 = param_5;
      local_90 = fVar1;
      FUN_180192c0a(uVar3,&local_80,&local_78,uVar5);
      uVar3 = *(undefined8 *)(lVar2 + 800);
      uVar6 = FUN_18010129b(5,uVar6);
      local_88 = 0;
      local_98 = param_5;
      local_90 = fVar1;
      FUN_180192c0a(uVar3,&local_68,&local_70,uVar6);
    }
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_b8);
}

