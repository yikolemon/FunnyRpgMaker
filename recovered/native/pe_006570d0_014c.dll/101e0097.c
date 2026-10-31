/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e0097 */

int __fastcall FUN_101e0097(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  piVar2 = (int *)FUN_101c21f6(*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x10) * 2 + 0x19c,
                               &local_18);
  if (local_18 == 0) {
    _memset(piVar2 + 9,0,0x15c);
    *piVar2 = param_1;
    piVar2[1] = *(int *)(param_1 + 0x10);
    piVar2[2] = (int)(piVar2 + 0x67);
    piVar2[0x66] = param_3;
    *(undefined2 *)(piVar2 + 0x60) = 0;
    piVar2[0x65] = 0;
    piVar2[0x61] = 0;
    piVar2[0x62] = 0;
    piVar2[99] = 0;
    piVar2[100] = 0;
    cVar1 = FUN_101d8349();
    if (cVar1 == '\0') {
      piVar2[3] = 0;
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[7] = 0;
    }
    else {
      iVar3 = FUN_101e0244();
      piVar2[3] = iVar3;
      iVar3 = (**(code **)(*(int *)(piVar2[0x66] + 0x38) + 0x10))();
      piVar2[4] = iVar3;
      FUN_101e0278();
    }
    FUN_101e042b();
    piVar2[8] = 0;
  }
  *param_2 = (int)piVar2;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

