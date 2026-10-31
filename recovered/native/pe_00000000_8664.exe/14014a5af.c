/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014a5af */

int FUN_14014a5af(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [36];
  int local_64;
  undefined1 local_60 [16];
  longlong local_50;
  code *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_64 = 2;
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_14014bda1(uVar1);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  lVar6 = FUN_140128a1f(uVar1,0x40,&local_64);
  if (local_64 != 0) goto LAB_14014a77c;
  local_64 = FUN_14012dc34(param_2,*(undefined4 *)(param_2 + 8));
  if (local_64 != 0) goto LAB_14014a77c;
  uVar3 = *(undefined4 *)(param_1 + 0x280);
  uVar4 = *(undefined4 *)(param_1 + 0x284);
  uVar5 = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(lVar6 + 8) = uVar3;
  *(undefined4 *)(lVar6 + 0xc) = uVar4;
  *(undefined4 *)(lVar6 + 0x10) = uVar5;
  *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_1 + 0x280);
  lVar2 = *(longlong *)(param_1 + 0x2a0);
  if (*(undefined8 **)(lVar2 + 0x48) == (undefined8 *)0x0) {
LAB_14014a6ff:
    uVar3 = *(undefined4 *)(lVar6 + 8);
    uVar4 = *(undefined4 *)(lVar6 + 0xc);
    uVar5 = *(undefined4 *)(lVar6 + 0x10);
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar6 + 4);
    *(undefined4 *)(param_1 + 0x280) = uVar3;
    *(undefined4 *)(param_1 + 0x284) = uVar4;
    *(undefined4 *)(param_1 + 0x288) = uVar5;
    *(int *)(param_1 + 0x58) = (int)*(short *)(lVar6 + 6);
    *(int *)(param_1 + 0x5c) = (int)*(short *)(lVar6 + 10);
    *(int *)(param_1 + 0x60) = *(int *)(lVar6 + 0xc) + 0xffff >> 0x10;
    *(int *)(param_1 + 100) = *(int *)(lVar6 + 0x10) + 0xffff >> 0x10;
    if (*(int *)(lVar6 + 0x18) < *(int *)(lVar6 + 0x14)) {
      *(short *)(param_1 + 0x6a) = (short)((uint)(*(int *)(lVar6 + 0x14) + 0x8000) >> 0x10);
      *(short *)(param_1 + 0x6c) = (short)((uint)(*(int *)(lVar6 + 0x18) + 0x8000) >> 0x10);
    }
    if (*(int *)(lVar6 + 0x38) != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x40;
      *(longlong *)(param_1 + 0x2a8) = lVar6;
      lVar6 = 0;
    }
  }
  else {
    local_64 = (*(code *)**(undefined8 **)(lVar2 + 0x48))
                         (local_60,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                          *(undefined8 *)(param_2 + 0x40));
    if (local_64 == 0) {
      local_40 = param_1 + 0xd8;
      local_48 = FUN_14014bde5;
      local_50 = lVar6;
      local_64 = (**(code **)(*(longlong *)(lVar2 + 0x48) + 0x10))(local_60);
      (**(code **)(*(longlong *)(lVar2 + 0x48) + 8))(local_60);
    }
    if ((char)local_64 == '\x02') {
      if (((6 < *(uint *)(param_2 + 8)) && (*(byte *)(*(longlong *)(param_2 + 0x38) + 1) < 4)) &&
         (*(uint *)(*(longlong *)(param_2 + 0x38) + 2) == *(uint *)(param_2 + 8))) {
        local_64 = FUN_14014be61(param_1,param_2,lVar6);
        goto LAB_14014a6fb;
      }
    }
    else {
LAB_14014a6fb:
      if (local_64 == 0) goto LAB_14014a6ff;
    }
  }
  FUN_14012dd58(param_2);
LAB_14014a77c:
  if (lVar6 != 0) {
    FUN_14014bda1(uVar1,lVar6);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_88)) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_88);
}

