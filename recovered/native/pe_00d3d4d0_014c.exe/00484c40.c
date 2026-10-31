/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484c40 */

UINT FUN_00484c40(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  UINT UVar8;
  uint uVar9;
  UINT local_24;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_004858c0;
  local_14 = ExceptionList;
  local_c = DAT_0050e8c0 ^ 0x50cb80;
  ExceptionList = &local_14;
  uVar3 = FUN_00483fc0(1);
  if ((char)uVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00484a80();
  }
  bVar2 = false;
  local_8 = 0;
  uVar3 = FUN_00483f60();
  if (DAT_0051beec == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00484a80();
  }
  if (DAT_0051beec == 0) {
    DAT_0051beec = 1;
    iVar4 = __initterm_e((undefined4 *)&DAT_00508910,(undefined4 *)&DAT_00508930);
    if (iVar4 != 0) {
      ExceptionList = local_14;
      return 0xff;
    }
    FUN_0048fdf1((undefined4 *)&DAT_005088a0,(undefined4 *)&DAT_0050890c);
    DAT_0051beec = 2;
  }
  else {
    bVar2 = true;
  }
  ___scrt_release_startup_lock((char)uVar3);
  piVar5 = (int *)FUN_00484f70();
  if (*piVar5 != 0) {
    uVar3 = FUN_00483e80((int)piVar5);
    if ((char)uVar3 != '\0') {
      pcVar1 = (code *)*piVar5;
      (*(code *)PTR_guard_check_icall_00508898)(0,2,0);
      (*pcVar1)();
    }
  }
  ppuVar6 = FUN_00484f80();
  if (*ppuVar6 != (undefined *)0x0) {
    uVar3 = FUN_00483e80((int)ppuVar6);
    if ((char)uVar3 != '\0') {
      __register_thread_local_exe_atexit_callback((_func_void_void_ptr_ulong_void_ptr *)*ppuVar6);
    }
  }
  FUN_0048fafd();
  puVar7 = (undefined4 *)FUN_00488ca7();
  puVar7 = (undefined4 *)*puVar7;
  piVar5 = (int *)FUN_00488ca1();
  UVar8 = FUN_00401000(*piVar5,puVar7);
  uVar9 = FUN_00484a10();
  if ((char)uVar9 != '\0') {
    if (!bVar2) {
      FUN_0048d3c7();
    }
    FUN_00484000('\x01','\0');
    ExceptionList = local_14;
    return UVar8;
  }
  FUN_0048d39b(UVar8);
                    /* WARNING: Subroutine does not return */
  FUN_0048d3b1(local_24);
}

