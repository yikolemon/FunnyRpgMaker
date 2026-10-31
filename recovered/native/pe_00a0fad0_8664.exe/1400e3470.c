/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e3470 */

void FUN_1400e3470(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4,
                  longlong param_5,uint *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  short sVar4;
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
  
  local_58 = DAT_1401c9640 ^ (ulonglong)auStack_3d8;
  local_388 = *param_4;
  uStack_384 = param_4[1];
  uStack_380 = param_4[2];
  uStack_37c = param_4[3];
  local_3a8 = *param_3;
  uStack_3a0 = (undefined4)param_3[1];
  uStack_39c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_390 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR__guard_dispatch_icall_140178c20)();
  local_3b8 = &local_398;
  uVar3 = FUN_1400f8920(local_378,0x300,&local_3a8,&local_388);
  if ((local_390 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(), lVar5 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar5,1);
  }
  if ((char)uVar3 == '\0') {
    uVar8 = 0;
LAB_1400e3581:
    *param_6 = 2;
  }
  else {
    piVar6 = (int *)FUN_140113dd4();
    iVar1 = *piVar6;
    *piVar6 = 0;
    uVar8 = FUN_140118100(local_378,&local_398);
    iVar2 = *piVar6;
    *piVar6 = iVar1;
    if (((local_398 == local_378) || (iVar2 != 0)) || ((char)((ushort)uVar3 >> 8) != '\0'))
    goto LAB_1400e3581;
  }
  lVar5 = local_3a8;
  if ((char)uStack_3a0 == '\0') {
    if (local_3a8 == 0) {
LAB_1400e35d4:
      lVar5 = 0;
      local_3a8 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(local_3a8 + 0x38) == (short *)0x0) ||
         (**(int **)(local_3a8 + 0x50) < 1)) {
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)(local_3a8);
      }
      else {
        sVar4 = *(short *)**(undefined8 **)(local_3a8 + 0x38);
      }
      if (sVar4 == -1) goto LAB_1400e35d4;
      uStack_3a0 = CONCAT22(sVar4,(undefined2)uStack_3a0);
    }
    uStack_3a0 = CONCAT31(uStack_3a0._1_3_,1);
  }
  lVar7 = CONCAT44(uStack_384,local_388);
  if ((char)uStack_380 == '\0') {
    if (lVar7 != 0) {
      if (((short *)**(undefined8 **)(lVar7 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar7 + 0x50) < 1)) {
        sVar4 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar7);
      }
      else {
        sVar4 = *(short *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (sVar4 != -1) goto LAB_1400e3622;
    }
    lVar7 = 0;
  }
LAB_1400e3622:
  if (lVar5 == 0) {
    if (lVar7 != 0) goto LAB_1400e3637;
  }
  else if (lVar7 == 0) goto LAB_1400e3637;
  *param_6 = *param_6 | 1;
LAB_1400e3637:
  *param_7 = uVar8;
  *param_2 = (undefined4)local_3a8;
  param_2[1] = local_3a8._4_4_;
  param_2[2] = uStack_3a0;
  param_2[3] = uStack_39c;
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_58 ^ (ulonglong)auStack_3d8);
}

