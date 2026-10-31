/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023a4c0 */

void FUN_1023a4c0(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,undefined4 *param_8)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char cVar7;
  char local_4c;
  undefined1 *local_48;
  undefined1 local_44 [4];
  int *local_40;
  undefined4 *local_3c;
  uint *local_38;
  undefined1 local_34 [32];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_6;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288bad;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = param_7;
  local_3c = param_8;
  local_40 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*local_40 + 4);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar1)();
  local_8 = 0;
  uVar4 = FUN_1024dbc0(local_34,&param_2,&param_4,*(undefined4 *)(iVar2 + 0x14),local_44);
  local_8 = 0xffffffff;
  if (local_40 != (int *)0x0) {
    pcVar1 = *(code **)(*local_40 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar5 = (undefined4 *)(*pcVar1)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar5;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  cVar7 = (char)(uVar4 & 0xffff);
  if (cVar7 < '\0') {
    *local_38 = 2;
    *local_3c = 0;
  }
  else {
    uVar6 = FUN_10257ae0(local_34,&local_48,(int)cVar7,&local_40);
    *local_3c = uVar6;
    if (((local_48 == local_34) || (local_40 != (int *)0x0)) ||
       (local_4c = (char)((uVar4 & 0xffff) >> 8), local_4c != '\0')) {
      *local_38 = 2;
    }
  }
  puVar3 = local_38;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if (param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1023a608;
  }
  else if (param_4 == 0) goto LAB_1023a608;
  *puVar3 = *puVar3 | 1;
LAB_1023a608:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

