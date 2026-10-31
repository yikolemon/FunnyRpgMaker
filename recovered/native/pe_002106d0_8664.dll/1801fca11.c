/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fca11 */

int FUN_1801fca11(longlong param_1,uint param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_718 [32];
  undefined1 *local_6f8;
  int local_6f0 [3];
  int iStack_6e4;
  undefined1 local_428 [808];
  int *local_100;
  ulonglong local_48;
  
  uVar7 = (ulonglong)param_2;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_718;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x2a0);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  uVar5 = *(undefined8 *)(lVar1 + 0x26c);
  *(undefined8 *)(param_1 + 0x690) = *(undefined8 *)(lVar1 + 0x264);
  *(undefined8 *)(param_1 + 0x698) = uVar5;
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar1 + 0x274);
  local_6f8 = param_4;
  if (plVar4 == (longlong *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x250) + uVar7 * 8);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(longlong *)(lVar1 + 600) + uVar7 * 4);
LAB_1801fcac0:
    if (*(char *)(param_1 + 0x5e) == '\0') {
      (**(code **)(lVar2 + 0x30))(local_428,param_1,1);
      (**(code **)(lVar2 + 0x38))(lVar1,lVar1 + 0x114,local_6f0);
      local_100 = local_6f0;
      iVar6 = (**(code **)(lVar3 + 0x18))(local_428,*param_3,*(undefined4 *)(param_3 + 1));
      if ((char)iVar6 == -0x5c) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
        *local_6f8 = 1;
        iVar6 = (**(code **)(lVar3 + 0x18))(local_428,*param_3,*(undefined4 *)(param_3 + 1));
      }
    }
    else {
      iVar6 = (**(code **)(lVar3 + 0x10))(param_1,*param_3,*(undefined4 *)(param_3 + 1));
    }
    if ((plVar4 != (longlong *)0x0) && (iVar6 == 0)) {
      if (*(longlong *)(*plVar4 + 0x10) == 0) {
        iVar6 = 0;
        goto LAB_1801fcbe4;
      }
      local_6f0[0] = FUN_1801cf464(*(undefined4 *)(param_1 + 0x38));
      local_6f0[0] = local_6f0[0] >> 0x10;
      local_6f0[1] = 0;
      local_6f0[2] = FUN_1801cf464(*(undefined4 *)(param_1 + 0x40));
      local_6f0[2] = local_6f0[2] >> 0x10;
      iStack_6e4 = FUN_1801cf464(*(undefined4 *)(param_1 + 0x44));
      iStack_6e4 = iStack_6e4 >> 0x10;
      iVar6 = (**(code **)(*plVar4 + 0x10))(plVar4[1],uVar7,0,local_6f0);
      *(int *)(param_1 + 0x38) = local_6f0[0] << 0x10;
      *(ulonglong *)(param_1 + 0x40) = CONCAT44(iStack_6e4 << 0x10,local_6f0[2] << 0x10);
    }
  }
  else {
    *param_3 = 0;
    iVar6 = (**(code **)*plVar4)(plVar4[1],uVar7,param_3);
    if (iVar6 == 0) goto LAB_1801fcac0;
  }
  if ((plVar4 != (longlong *)0x0) && (iVar6 != 0)) {
    (**(code **)(*plVar4 + 8))(plVar4[1],param_3);
  }
LAB_1801fcbe4:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_718)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_718);
  }
  return iVar6;
}

