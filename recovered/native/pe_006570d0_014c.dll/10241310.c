/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10241310 */

void FUN_10241310(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 uint *param_7,undefined4 *param_8)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  char local_58;
  undefined1 *local_54;
  undefined1 local_50 [4];
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint *local_38;
  undefined1 local_34 [32];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288b6d;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = param_7;
  local_40 = param_4;
  local_48 = param_2;
  local_3c = param_5;
  local_44 = param_3;
  local_4c = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*local_4c + 4);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar1)();
  local_8 = 0;
  uVar3 = FUN_1024aca0(local_34,&local_48,&local_40,*(undefined4 *)(param_6 + 0x14),local_50);
  local_8 = 0xffffffff;
  if (local_4c != (int *)0x0) {
    pcVar1 = *(code **)(*local_4c + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar4 = (undefined4 *)(*pcVar1)();
    if (puVar4 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar4;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  cVar5 = (char)(uVar3 & 0xffff);
  if (cVar5 < '\0') {
    uVar6 = 0;
    *local_38 = 2;
  }
  else {
    uVar6 = FUN_10257ae0(local_34,&local_54,(int)cVar5,&local_4c);
    if (((local_54 == local_34) || (local_4c != (int *)0x0)) ||
       (local_58 = (char)((uVar3 & 0xffff) >> 8), local_58 != '\0')) {
      *local_38 = 2;
    }
  }
  puVar2 = local_38;
  if ((char)local_44 == '\0') {
    FUN_1023b0c0();
  }
  if ((char)local_3c == '\0') {
    FUN_1023b0c0();
  }
  if (local_48 == 0) {
    if (local_40 != 0) goto LAB_10241466;
  }
  else if (local_40 == 0) goto LAB_10241466;
  *puVar2 = *puVar2 | 1;
LAB_10241466:
  *param_8 = uVar6;
  *param_1 = local_48;
  param_1[1] = local_44;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

