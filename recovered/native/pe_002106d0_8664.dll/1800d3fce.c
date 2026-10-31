/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d3fce */

undefined8 FUN_1800d3fce(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 in_stack_00000028;
  uint in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  code *in_stack_00000060;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_a8;
  pcVar2 = CreateProcessW;
  if (in_stack_00000060 != (code *)0x0) {
    pcVar2 = in_stack_00000060;
  }
  if (in_stack_00000050 == (undefined8 *)0x0) {
    in_stack_00000050 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  local_80 = in_stack_00000030 | 4;
  local_68 = in_stack_00000048;
  local_70 = in_stack_00000040;
  local_78 = in_stack_00000038;
  local_88 = in_stack_00000028;
  local_60 = in_stack_00000050;
  iVar1 = (*pcVar2)();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    local_50 = in_stack_00000058;
    iVar1 = FUN_1800d252b(*in_stack_00000050,&local_50,1);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1800d3bf7(*(undefined4 *)(in_stack_00000050 + 2),in_stack_00000058,pcVar2),
       iVar1 == 0)) {
      TerminateProcess((HANDLE)*in_stack_00000050,0xffffffff);
      uVar3 = 0;
    }
    else {
      if ((in_stack_00000030 & 4) == 0) {
        ResumeThread((HANDLE)in_stack_00000050[1]);
      }
      uVar3 = 1;
      if (in_stack_00000050 != &local_48) goto LAB_1800d40e8;
    }
    CloseHandle((HANDLE)*in_stack_00000050);
    CloseHandle((HANDLE)in_stack_00000050[1]);
  }
LAB_1800d40e8:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_a8);
  }
  return uVar3;
}

