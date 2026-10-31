/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482470 */

void __fastcall FUN_00482470(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_004a7100;
  local_10 = ExceptionList;
  uVar5 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = (int)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x13] != 0) && (*(int **)param_1[3] == param_1 + 0xf)) {
    iVar1 = param_1[0x15];
    iVar2 = param_1[0x14];
    *(int *)param_1[3] = iVar2;
    *(int *)param_1[7] = iVar2;
    *(int *)param_1[0xb] = iVar1 - iVar2;
  }
  if ((char)param_1[0x12] != '\0') {
    if (param_1[0x13] != 0) {
      if (*(int **)param_1[3] == param_1 + 0xf) {
        iVar1 = param_1[0x15];
        iVar2 = param_1[0x14];
        *(int *)param_1[3] = iVar2;
        *(int *)param_1[7] = iVar2;
        *(int *)param_1[0xb] = iVar1 - iVar2;
      }
      FUN_004832d0(param_1);
      FUN_00490653((FILE *)param_1[0x13]);
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    param_1[3] = (int)(param_1 + 1);
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
    param_1[7] = (int)(param_1 + 5);
    param_1[4] = (int)(param_1 + 2);
    param_1[0xb] = (int)(param_1 + 9);
    param_1[0xc] = (int)(param_1 + 10);
    param_1[8] = (int)(param_1 + 6);
    param_1[2] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    *(undefined4 *)param_1[3] = 0;
    *(undefined4 *)param_1[7] = 0;
    *(undefined4 *)param_1[0xb] = 0;
    param_1[0x13] = 0;
    iVar1 = DAT_0051bc70;
    param_1[0x10] = DAT_0051bc6c;
    param_1[0x11] = iVar1;
    param_1[0xe] = 0;
  }
  pvVar3 = (LPVOID)param_1[0xd];
  *param_1 = (int)std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (pvVar3 != (LPVOID)0x0) {
    if (*(int **)((int)pvVar3 + 4) != (int *)0x0) {
      pcVar4 = *(code **)(**(int **)((int)pvVar3 + 4) + 8);
      (*(code *)PTR_guard_check_icall_00508898)(uVar5);
      puVar6 = (undefined4 *)(*pcVar4)();
      if (puVar6 != (undefined4 *)0x0) {
        pcVar4 = *(code **)*puVar6;
        (*(code *)PTR_guard_check_icall_00508898)(1);
        (*pcVar4)();
      }
    }
    FUN_0047f280(pvVar3);
  }
  ExceptionList = local_10;
  return;
}

