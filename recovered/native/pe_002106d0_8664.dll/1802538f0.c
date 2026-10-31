/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802538f0 */

void FUN_1802538f0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4,
                  longlong param_5,uint *param_6,undefined4 *param_7)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98 [2];
  undefined1 *local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_a8 = *param_3;
  uStack_a0 = (undefined4)param_3[1];
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_88 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  local_b8 = &local_90;
  uVar1 = FUN_18025e540(local_68,&local_a8,&local_78,*(undefined4 *)(param_5 + 0x18));
  if ((local_88 != 0) && (lVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(), lVar4 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,1);
  }
  if ((char)uVar1 < '\0') {
    uVar3 = 0;
LAB_1802539dc:
    *param_6 = 2;
  }
  else {
    uVar3 = FUN_18026ca30(local_68,&local_90,(int)(char)uVar1,local_98);
    if (((local_90 == local_68) || (local_98[0] != 0)) || ((char)((ushort)uVar1 >> 8) != '\0'))
    goto LAB_1802539dc;
  }
  lVar4 = local_a8;
  if ((char)uStack_a0 == '\0') {
    if (local_a8 == 0) {
LAB_180253a2b:
      lVar4 = 0;
      local_a8 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(local_a8 + 0x38) == (short *)0x0) ||
         (**(int **)(local_a8 + 0x50) < 1)) {
        sVar2 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(local_a8);
      }
      else {
        sVar2 = *(short *)**(undefined8 **)(local_a8 + 0x38);
      }
      if (sVar2 == -1) goto LAB_180253a2b;
      uStack_a0 = CONCAT22(sVar2,(undefined2)uStack_a0);
    }
    uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
  }
  lVar5 = CONCAT44(uStack_74,local_78);
  if ((char)uStack_70 == '\0') {
    if (lVar5 != 0) {
      if (((short *)**(undefined8 **)(lVar5 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar5 + 0x50) < 1)) {
        sVar2 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar5);
      }
      else {
        sVar2 = *(short *)**(undefined8 **)(lVar5 + 0x38);
      }
      if (sVar2 != -1) goto LAB_180253a7a;
    }
    lVar5 = 0;
  }
LAB_180253a7a:
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_180253a8e;
  }
  else if (lVar5 == 0) goto LAB_180253a8e;
  *param_6 = *param_6 | 1;
LAB_180253a8e:
  *param_7 = uVar3;
  *param_2 = (undefined4)local_a8;
  param_2[1] = local_a8._4_4_;
  param_2[2] = uStack_a0;
  param_2[3] = uStack_9c;
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
}

