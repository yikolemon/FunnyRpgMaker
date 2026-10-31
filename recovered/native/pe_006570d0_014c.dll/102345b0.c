/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102345b0 */

void __fastcall FUN_102345b0(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((param_1[0xe] == 0) || (*(char *)((int)param_1 + 0x3e) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  pcVar1 = *(code **)(*param_1 + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)(0xffff);
  sVar2 = (*pcVar1)();
  if (sVar2 != -1) {
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x20);
    (*(code *)PTR_guard_check_icall_1035d810)(param_1 + 0x10,local_28,&local_8,&local_2c);
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      *(undefined1 *)((int)param_1 + 0x3e) = 0;
    }
    else if (iVar3 != 1) {
      if (iVar3 == 3) {
        *(undefined1 *)((int)param_1 + 0x3e) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      goto LAB_1023467e;
    }
    iVar3 = local_2c - (int)local_28;
    if (iVar3 != 0) {
      iVar4 = FUN_1026f01a(local_28,1,iVar3,param_1[0x13]);
      if (iVar3 != iVar4) goto LAB_1023467e;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
LAB_1023467e:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

