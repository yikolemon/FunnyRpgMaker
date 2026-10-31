/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ae0e */

bool FUN_1026ae0e(wchar_t *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_8;
  
  cVar1 = FUN_1026aa67(param_1);
  if (cVar1 == '\0') {
    ___acrt_errno_map_os_error(2);
    return false;
  }
  uVar3 = FUN_1026a899(0x10,param_1);
  local_8 = 0;
  *(undefined2 *)((int)param_2 + 6) = uVar3;
  *(undefined2 *)(param_2 + 2) = 1;
  bVar2 = get_drive_number_from_path(param_1,&local_8);
  if (bVar2) {
    param_2[4] = local_8 + -1;
    *param_2 = local_8 + -1;
    uVar6 = FUN_1027a86f(0x7bc,1,1,0,0,0,0xffffffff);
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    iVar4 = (int)uVar6;
    param_2[8] = iVar4;
    param_2[6] = iVar4;
    param_2[10] = iVar4;
    param_2[9] = iVar5;
    param_2[7] = iVar5;
    param_2[0xb] = iVar5;
  }
  return bVar2;
}

