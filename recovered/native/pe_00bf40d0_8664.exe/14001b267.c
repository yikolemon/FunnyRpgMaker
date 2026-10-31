/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b267 */

undefined8 FUN_14001b267(void)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  code *pcVar3;
  undefined8 uVar4;
  uint in_stack_00000030;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  code *in_stack_00000060;
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined8 *local_60;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_a8;
  pcVar3 = CreateProcessW;
  if (in_stack_00000060 != (code *)0x0) {
    pcVar3 = in_stack_00000060;
  }
  if (in_stack_00000050 == (undefined8 *)0x0) {
    in_stack_00000050 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  local_80 = in_stack_00000030 | 4;
  local_60 = in_stack_00000050;
  iVar2 = (*pcVar3)();
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    bVar1 = FUN_140019923((HANDLE)*in_stack_00000050,(longlong)local_50,1);
    if (((int)CONCAT71(extraout_var,bVar1) == 0) &&
       (iVar2 = FUN_14001ae90(*(int *)(in_stack_00000050 + 2),in_stack_00000058,pcVar3), iVar2 == 0)
       ) {
      TerminateProcess((HANDLE)*in_stack_00000050,0xffffffff);
      uVar4 = 0;
    }
    else {
      if ((in_stack_00000030 & 4) == 0) {
        ResumeThread((HANDLE)in_stack_00000050[1]);
      }
      uVar4 = 1;
      if (in_stack_00000050 != &local_48) goto LAB_14001b381;
    }
    CloseHandle((HANDLE)*in_stack_00000050);
    CloseHandle((HANDLE)in_stack_00000050[1]);
  }
LAB_14001b381:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_a8);
  }
  return uVar4;
}

