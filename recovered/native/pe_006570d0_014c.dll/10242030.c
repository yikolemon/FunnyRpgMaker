/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10242030 */

void FUN_10242030(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,undefined4 *param_8)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char local_48;
  undefined1 local_44 [4];
  int *local_40;
  undefined4 *local_3c;
  undefined1 *local_38;
  undefined1 local_34 [32];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_7;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288c6d;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_8;
  local_40 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*local_40 + 4);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar1)();
  local_8 = 0;
  uVar3 = FUN_1024aca0(local_34,&param_2,&param_4,0x800,local_44);
  puVar4 = (undefined1 *)(uVar3 & 0xffff);
  local_8 = 0xffffffff;
  local_38 = puVar4;
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
  if ((char)local_38 < '\0') {
    *puVar2 = 2;
    *local_3c = 0;
  }
  else {
    uVar6 = FUN_10257ae0(local_34,&local_38,(int)(char)local_38,&local_40);
    *local_3c = uVar6;
    if ((local_38 == local_34) || (local_40 != (int *)0x0)) {
      *puVar2 = 2;
      *local_3c = 0;
    }
    local_48 = (char)((uint)puVar4 >> 8);
    if (local_48 != '\0') {
      *puVar2 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if (param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1024217e;
  }
  else if (param_4 == 0) goto LAB_1024217e;
  *puVar2 = *puVar2 | 1;
LAB_1024217e:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

