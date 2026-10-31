/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802725c4 */

void FUN_1802725c4(ulonglong param_1,undefined2 *param_2,ulonglong param_3,longlong param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  longlong *local_520;
  undefined2 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_480;
  undefined2 local_47e;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    uVar3 = PTR_PTR_180415ff8._0_4_;
    uVar4 = PTR_PTR_180415ff8._4_4_;
    uVar5 = PTR_DAT_180416000._0_4_;
    uVar6 = PTR_DAT_180416000._4_4_;
    if (DAT_18042116c == 0) goto LAB_180272633;
  }
  else {
    uVar3 = *param_5;
    uVar4 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
LAB_180272633:
    local_4d0 = '\x01';
    local_4e0 = uVar3;
    uStack_4dc = uVar4;
    uStack_4d8 = uVar5;
    uStack_4d4 = uVar6;
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined2 *)0x0)))) {
    local_520 = local_4f8;
    local_4c8 = '\x01';
    local_528 = 0;
    local_4cc = 0x16;
    FUN_180290c30(0,0,0,0);
    goto LAB_1802727ba;
  }
  local_4ff = 0;
  local_4fb = 0;
  local_4f9 = 0;
  local_508 = 0;
  if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined2 *)0x0)) {
    local_500 = 1;
  }
  local_4b0 = local_4f8;
  local_498 = 0;
  local_58 = &local_518;
  local_494 = 0;
  local_4a0 = param_6;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_47e = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_518 = param_2;
  local_510 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_180274b18(&local_4b8);
  if (param_2 == (undefined2 *)0x0) {
LAB_1802727ae:
    FUN_180290e40(uStack_60);
  }
  else {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar1 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_1802727a9;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_1802727ae;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_180290e40(uStack_60);
          goto LAB_1802727ba;
        }
        goto LAB_1802727a9;
      }
    }
    else if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_508 != param_3) {
LAB_1802727a9:
        param_2[local_508] = 0;
        goto LAB_1802727ae;
      }
      if ((iVar1 < 0) || ((ulonglong)(longlong)iVar1 <= param_3)) goto LAB_1802727ae;
    }
    FUN_180290e40(uStack_60);
  }
LAB_1802727ba:
  uVar3 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar2 = FUN_180272d50(local_4f8);
    *(undefined4 *)(lVar2 + 0x20) = uVar3;
  }
  if (local_4c0 != '\0') {
    lVar2 = FUN_180272d50(local_4f8);
    *(undefined4 *)(lVar2 + 0x24) = local_4c4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_548);
}

