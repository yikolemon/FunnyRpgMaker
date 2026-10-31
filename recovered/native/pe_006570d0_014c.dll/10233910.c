/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233910 */

void __fastcall FUN_10233910(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10288e30;
  local_10 = ExceptionList;
  uVar5 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if ((param_1[0x13] != 0) && (*(undefined4 **)param_1[3] == param_1 + 0xf)) {
    iVar1 = param_1[0x15];
    iVar2 = param_1[0x14];
    *(int *)param_1[3] = iVar2;
    *(int *)param_1[7] = iVar2;
    *(int *)param_1[0xb] = iVar1 - iVar2 >> 1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    if (param_1[0x13] != 0) {
      if (*(undefined4 **)param_1[3] == param_1 + 0xf) {
        iVar1 = param_1[0x15];
        iVar2 = param_1[0x14];
        *(int *)param_1[3] = iVar2;
        *(int *)param_1[7] = iVar2;
        *(int *)param_1[0xb] = iVar1 - iVar2 >> 1;
      }
      FUN_102345b0(uVar5);
      FUN_1026d543(param_1[0x13]);
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_1[3] = param_1 + 1;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    param_1[7] = param_1 + 5;
    param_1[4] = param_1 + 2;
    param_1[0xb] = param_1 + 9;
    param_1[0xc] = param_1 + 10;
    param_1[8] = param_1 + 6;
    param_1[2] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    *(undefined4 *)param_1[3] = 0;
    *(undefined4 *)param_1[7] = 0;
    *(undefined4 *)param_1[0xb] = 0;
    param_1[0x13] = 0;
    uVar4 = DAT_1039d748;
    param_1[0x10] = DAT_1039d744;
    param_1[0x11] = uVar4;
    param_1[0xe] = 0;
  }
  iVar1 = param_1[0xd];
  *param_1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)(iVar1 + 4) + 8);
      (*(code *)PTR_guard_check_icall_1035d810)();
      puVar6 = (undefined4 *)(*pcVar3)();
      if (puVar6 != (undefined4 *)0x0) {
        pcVar3 = *(code **)*puVar6;
        (*(code *)PTR_guard_check_icall_1035d810)(1);
        (*pcVar3)();
      }
    }
    FUN_102283a0(iVar1,8);
  }
  ExceptionList = local_10;
  return;
}

