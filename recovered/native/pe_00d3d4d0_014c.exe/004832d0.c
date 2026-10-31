/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004832d0 */

void __fastcall FUN_004832d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if ((param_1[0xe] == 0) || (*(char *)((int)param_1 + 0x3d) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_00508898)(0xffffffff);
  iVar2 = (*pcVar1)();
  if (iVar2 != -1) {
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x20);
    (*(code *)PTR_guard_check_icall_00508898)(param_1 + 0x10,local_28,&local_8,&local_2c);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      *(undefined1 *)((int)param_1 + 0x3d) = 0;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 3) {
        *(undefined1 *)((int)param_1 + 0x3d) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
      }
      goto LAB_00483396;
    }
    uVar4 = local_2c - (int)local_28;
    if (uVar4 != 0) {
      uVar3 = FUN_00492048(local_28,1,uVar4,param_1[0x13]);
      if (uVar4 != uVar3) goto LAB_00483396;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
LAB_00483396:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

