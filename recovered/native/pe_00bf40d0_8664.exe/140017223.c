/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017223 */

undefined8 * FUN_140017223(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,int *param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStackY_f8 [32];
  byte local_c5;
  int local_c4;
  byte **local_c0;
  undefined4 local_b8;
  undefined2 local_aa;
  undefined8 *local_a8;
  byte local_9c [4];
  byte *local_98 [4];
  int *local_78;
  int *local_70;
  byte **local_68;
  byte ***local_60;
  char acStack_49 [9];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_f8;
  lVar5 = 0;
  do {
    lVar2 = lVar5;
    acStack_49[lVar2] = "0123456789abcdefghijklmnopqrstuvwxyz"[(uint)param_3 & 0xf];
    param_3 = param_3 >> 4;
    lVar5 = lVar2 + -1;
  } while (param_3 != 0);
  uVar6 = -lVar5;
  if (lVar5 == -0x10 || (longlong)uVar6 < 0x10) {
    thunk_FUN_14000c12d((undefined8 *)(acStack_49 + lVar2),uVar6,local_98);
    local_c0 = (byte **)((longlong)local_98 - lVar5);
    local_b8 = 0;
  }
  else {
    local_c0 = local_98 + 2;
    local_b8 = 0x84;
  }
  local_c4 = ((int)local_c0 - (int)local_98) + 2;
  local_9c[0] = 0x30;
  local_9c[1] = 0;
  local_9c[2] = 0x78;
  local_9c[3] = 0;
  if (((char)param_4[2] == 'P') &&
     (local_9c[0] = 0x30, local_9c[1] = 0, local_9c[2] = 0x58, local_9c[3] = 0, local_98 != local_c0
     )) {
    uVar3 = 0x10;
    if ((longlong)uVar6 < 0x10) {
      uVar3 = uVar6;
    }
    uVar6 = 0;
    do {
      if ((byte)(*(char *)((longlong)local_98 + uVar6) + 0x9fU) < 0x1a) {
        *(char *)((longlong)local_98 + uVar6) = *(char *)((longlong)local_98 + uVar6) + -0x20;
      }
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  local_c5 = *(char *)((longlong)param_4 + 9) == '\0' & *(byte *)((longlong)param_4 + 0xd);
  local_98[2] = local_9c;
  local_98[3] = &local_c5;
  local_78 = &local_c4;
  local_70 = param_4;
  local_68 = local_98;
  local_60 = &local_c0;
  if (local_c5 == 1) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined2 *)((longlong)local_98 + lVar5 + -4);
      lVar2 = param_2[2];
      uVar6 = lVar2 + 1;
      if ((ulonglong)param_2[3] < uVar6) {
        (**(code **)*param_2)(param_2);
        lVar2 = param_2[2];
        uVar6 = lVar2 + 1;
      }
      param_2[2] = uVar6;
      *(undefined2 *)(param_2[1] + lVar2 * 2) = uVar1;
      lVar5 = lVar5 + 2;
    } while (lVar5 != 4);
    if ((local_c5 == 1) && (uVar4 = *param_4 - local_c4, uVar4 != 0 && local_c4 <= *param_4)) {
      local_aa = 0x30;
      FUN_140011848(&local_a8,param_2,(ulonglong)uVar4,&local_aa);
      param_2 = local_a8;
    }
    FUN_14000beb2(param_1,(char *)local_98,(char *)local_c0,param_2);
  }
  else {
    FUN_140017444(param_1,param_2,local_c4,param_4,'\x02',(longlong *)(local_98 + 2));
  }
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_f8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_f8);
}

