/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180240ea0 */

void FUN_180240ea0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4,
                  longlong param_5,uint *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_3d8 [32];
  undefined1 **local_3b8;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 *local_398;
  longlong local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined1 local_378 [800];
  ulonglong local_58;
  
  local_58 = DAT_180402640 ^ (ulonglong)auStack_3d8;
  local_388 = *param_4;
  uStack_384 = param_4[1];
  uStack_380 = param_4[2];
  uStack_37c = param_4[3];
  local_3a8 = *param_3;
  uStack_3a0 = (int)param_3[1];
  uStack_39c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_390 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  local_3b8 = &local_398;
  uVar3 = FUN_180242210(local_378,0x300,&local_3a8,&local_388);
  if ((local_390 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(), lVar5 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar5,1);
  }
  if ((char)uVar3 == '\0') {
    uVar8 = 0;
LAB_180240fb1:
    *param_6 = 2;
  }
  else {
    piVar6 = (int *)FUN_18027e66c();
    iVar1 = *piVar6;
    *piVar6 = 0;
    uVar8 = FUN_18028b168(local_378,&local_398);
    iVar2 = *piVar6;
    *piVar6 = iVar1;
    if (((local_398 == local_378) || (iVar2 != 0)) || ((char)((ushort)uVar3 >> 8) != '\0'))
    goto LAB_180240fb1;
  }
  lVar5 = local_3a8;
  if ((char)uStack_3a0 == '\0') {
    if (local_3a8 == 0) {
LAB_180240ffe:
      lVar5 = 0;
      local_3a8 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(local_3a8 + 0x38) == (byte *)0x0) ||
         (**(int **)(local_3a8 + 0x50) < 1)) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(local_3a8);
      }
      else {
        uVar4 = (uint)*(byte *)**(undefined8 **)(local_3a8 + 0x38);
      }
      if (uVar4 == 0xffffffff) goto LAB_180240ffe;
      uStack_3a0 = (uint)CONCAT21(uStack_3a0._2_2_,(char)uVar4) << 8;
    }
    uStack_3a0 = CONCAT31(uStack_3a0._1_3_,1);
  }
  lVar7 = CONCAT44(uStack_384,local_388);
  if ((char)uStack_380 == '\0') {
    if (lVar7 != 0) {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar7);
      }
      else {
        uVar4 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar4 != 0xffffffff) goto LAB_18024104c;
    }
    lVar7 = 0;
  }
LAB_18024104c:
  if (lVar5 == 0) {
    if (lVar7 != 0) goto LAB_180241061;
  }
  else if (lVar7 == 0) goto LAB_180241061;
  *param_6 = *param_6 | 1;
LAB_180241061:
  *param_7 = uVar8;
  *param_2 = (undefined4)local_3a8;
  param_2[1] = local_3a8._4_4_;
  param_2[2] = uStack_3a0;
  param_2[3] = uStack_39c;
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_58 ^ (ulonglong)auStack_3d8);
}

