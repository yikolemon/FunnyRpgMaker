/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10245f40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10245f40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6,double param_7)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *****pppppuVar9;
  undefined4 extraout_var;
  undefined4 *puVar10;
  undefined4 ****local_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_40;
  undefined1 local_3c [40];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289f45;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar3 = param_7 < 0.0;
  if (bVar3) {
    param_7 = (double)CONCAT44((uint)((ulonglong)param_7 >> 0x20) ^ _UNK_1028f734,
                               SUB84(param_7,0) ^ _DAT_1028f730);
  }
  pppppuVar9 = (undefined4 *****)(uint)bVar3;
  for (uVar4 = 0; (DAT_10301940 <= param_7 && (uVar4 < 5000)); uVar4 = uVar4 + 10) {
    param_7 = param_7 / DAT_102945c0;
  }
  puVar10 = param_1;
  puVar7 = param_5;
  iVar5 = FUN_1007c87c(local_3c,0x28,"%.0Lf",param_7,local_14);
  if (iVar5 < 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_4 = extraout_var;
    param_6 = puVar10;
  }
  else {
    piVar1 = *(int **)(param_5[0xc] + 4);
    pcVar2 = *(code **)(*piVar1 + 4);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar2)();
    local_8 = 0;
    piVar6 = (int *)FUN_10240a50();
    local_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      (*(code *)PTR_guard_check_icall_1035d810)();
      puVar7 = (undefined4 *)(*pcVar2)();
      if (puVar7 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar7;
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar2)();
      }
    }
    pcVar2 = *(code **)(*piVar6 + 0x30);
    (*(code *)PTR_guard_check_icall_1035d810)();
    uVar8 = (*pcVar2)();
    FUN_102471b0(iVar5,0);
    local_8 = 1;
    pppppuVar9 = &local_54;
    if (7 < local_40) {
      pppppuVar9 = (undefined4 *****)local_54;
    }
    pcVar2 = *(code **)(*piVar6 + 0x2c);
    (*(code *)PTR_guard_check_icall_1035d810)(local_3c,local_3c + iVar5,pppppuVar9);
    (*pcVar2)();
    local_54 = (undefined4 *****)0x102460c4;
    uStack_50 = uVar4;
    uStack_4c = uVar8 & 0xffff;
    FUN_10247420();
    pppppuVar9 = &local_54;
    uStack_4c = uVar8 & 0xffff;
    FUN_102470a0(pppppuVar9);
    puVar7 = param_6;
    FUN_102464e0(puVar10,param_2,param_3,param_4,param_6,param_6,pppppuVar9);
    FUN_102363f0();
  }
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0(param_4,param_6,puVar7,pppppuVar9);
}

