/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023a000 */

void FUN_1023a000(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,short *param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  short sVar7;
  char cVar8;
  char *pcVar9;
  char local_50;
  char *local_4c;
  undefined1 local_48 [4];
  int *local_44;
  short *local_40;
  uint *local_3c;
  char local_35;
  char local_34;
  char local_33 [31];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_6;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288b2d;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_7;
  local_40 = param_8;
  local_44 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*local_44 + 4);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar1)();
  local_8 = 0;
  uVar4 = FUN_1024dbc0(&local_34,&param_2,&param_4,*(undefined4 *)(iVar2 + 0x14),local_48);
  local_8 = 0xffffffff;
  if (local_44 != (int *)0x0) {
    pcVar1 = *(code **)(*local_44 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar5 = (undefined4 *)(*pcVar1)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar5;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  cVar8 = (char)(uVar4 & 0xffff);
  if (cVar8 < '\0') {
    *local_3c = 2;
    *local_40 = 0;
  }
  else {
    local_35 = local_34 == '-';
    pcVar9 = local_33;
    if (!(bool)local_35) {
      pcVar9 = &local_34;
    }
    uVar6 = FUN_10257ae0(pcVar9,&local_4c,(int)cVar8,&local_44);
    *local_40 = (short)uVar6;
    if (((local_4c == pcVar9) || (local_44 != (int *)0x0)) || (0xffff < uVar6)) {
      sVar7 = -1;
      *local_3c = 2;
LAB_1023a134:
      *local_40 = sVar7;
    }
    else if (local_35 != '\0') {
      sVar7 = -(short)uVar6;
      goto LAB_1023a134;
    }
    local_50 = (char)((uVar4 & 0xffff) >> 8);
    if (local_50 != '\0') {
      *local_3c = 2;
    }
  }
  puVar3 = local_3c;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if (param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1023a176;
  }
  else if (param_4 == 0) goto LAB_1023a176;
  *puVar3 = *puVar3 | 1;
LAB_1023a176:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

