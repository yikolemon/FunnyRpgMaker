/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480c40 */

void __fastcall FUN_00480c40(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_2c;
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if ((param_1[0xe] == 0) || (*(char *)((int)param_1 + 0x3e) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_00508898)(0xffff);
  sVar2 = (*pcVar1)();
  if (sVar2 != -1) {
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x20);
    (*(code *)PTR_guard_check_icall_00508898)(param_1 + 0x10,local_28,&local_8,&local_2c);
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
    }
    else if (iVar3 != 1) {
      if (iVar3 == 3) {
        *(undefined1 *)((int)param_1 + 0x3e) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
      }
      goto LAB_00480d0e;
    }
    uVar5 = local_2c - (int)local_28;
    if (uVar5 != 0) {
      uVar4 = FUN_00492048(local_28,1,uVar5,param_1[0x13]);
      if (uVar5 != uVar4) goto LAB_00480d0e;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
  }
LAB_00480d0e:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

