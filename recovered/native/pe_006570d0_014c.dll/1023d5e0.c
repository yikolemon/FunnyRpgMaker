/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023d5e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d5e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,double param_7)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *****pppppuVar9;
  undefined4 extraout_var;
  undefined4 uVar10;
  undefined4 ****local_54 [5];
  uint local_40;
  undefined1 local_3c [40];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289fc5;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar3 = param_7 < 0.0;
  if (bVar3) {
    param_7 = (double)CONCAT44((uint)((ulonglong)param_7 >> 0x20) ^ _UNK_1028f734,
                               SUB84(param_7,0) ^ _DAT_1028f730);
  }
  for (uVar5 = 0; (DAT_10301940 <= param_7 && (uVar5 < 5000)); uVar5 = uVar5 + 10) {
    param_7 = param_7 / DAT_102945c0;
  }
  iVar6 = FUN_1007c87c(local_3c,0x28,"%.0Lf",param_7,local_14);
  uVar10 = extraout_var;
  if (iVar6 < 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_5 + 0x30) + 4);
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar2)();
    local_8 = 0;
    piVar7 = (int *)FUN_10091ec2();
    local_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_1035d810)();
      puVar8 = (undefined4 *)(*pcVar2)();
      if (puVar8 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar8;
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar2)();
      }
    }
    pcVar2 = *(code **)(*piVar7 + 0x30);
    (*(code *)PTR_guard_check_icall_1035d810)();
    uVar4 = (*pcVar2)();
    FUN_102361f0(iVar6,0);
    local_8 = 1;
    pppppuVar9 = local_54;
    if (7 < local_40) {
      pppppuVar9 = (undefined4 *****)local_54[0];
    }
    pcVar2 = *(code **)(*piVar7 + 0x2c);
    (*(code *)PTR_guard_check_icall_1035d810)(local_3c,local_3c + iVar6,pppppuVar9);
    (*pcVar2)();
    FUN_10004c70(uVar5,uVar4);
    FUN_10003728(local_54);
    FUN_1023db80(param_1,param_2,param_3,param_4,param_5,param_6,bVar3);
    FUN_102363f0();
  }
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0(uVar10);
}

