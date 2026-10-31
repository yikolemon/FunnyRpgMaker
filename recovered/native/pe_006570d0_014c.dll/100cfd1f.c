/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cfd1f */

void FUN_100cfd1f(void)

{
  int iVar1;
  int *piVar2;
  HANDLE *ppvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  UINT uExitCode;
  HANDLE local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
                    /* 0xcfd1f  1   */
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100d0700;
  local_1c = ExceptionList;
  uExitCode = 0x26b1;
  ExceptionList = &local_1c;
  ppvVar3 = &local_30;
  if (DAT_1039cce8 != (int *)0x0) {
    local_30 = OpenProcess(0x1fffff,0,DAT_1039cce8[1]);
    piVar2 = DAT_1039cce8;
    uExitCode = 0x26ad;
    if (local_30 != (HANDLE)0x0) {
      local_28 = DAT_1039cce8[2];
      local_2c = -1;
      if (local_28 < 0x40000000) {
        local_2c = local_28 * 4;
      }
      local_24 = FUN_102332c0(local_2c);
      if (local_28 != 0) {
        iVar4 = *piVar2 + -0x10;
        uVar5 = 0;
        iVar6 = 0;
        do {
          uExitCode = 0x26ae;
          if (iVar4 == iVar6 || iVar4 - iVar6 < 0) goto code_r0x100cfdff;
          iVar1 = iVar6 + 0xc;
          while (*(char *)((int)piVar2 + iVar6 + 0xc) != '\0') {
            iVar6 = iVar6 + 1;
            if (iVar4 == iVar6) goto code_r0x100cfdff;
          }
          *(int *)(local_24 + uVar5 * 4) = (int)piVar2 + iVar1;
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_28);
      }
      local_14 = 0xffffffff;
      iVar4 = FUN_100cf0d1(local_30,local_24,local_28);
      uExitCode = 0x26af;
      if (iVar4 != 0) {
        uExitCode = 0;
      }
code_r0x100cfdff:
      local_14 = 0xffffffff;
      thunk_FUN_10274120(local_24);
    }
    ppvVar3 = (HANDLE *)local_20;
    if (DAT_1039cce8 != (int *)0x0) {
      FUN_100cedb5(DAT_1039cce8);
      DAT_1039cce8 = (int *)0x0;
      ppvVar3 = (HANDLE *)local_20;
    }
  }
  local_20 = (undefined1 *)ppvVar3;
                    /* WARNING: Subroutine does not return */
  ExitProcess(uExitCode);
}

