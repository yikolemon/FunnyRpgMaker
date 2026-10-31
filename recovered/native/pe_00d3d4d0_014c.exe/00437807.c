/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00437807 */

int __fastcall FUN_00437807(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  piVar1 = (int *)FUN_0041e773(*(int *)(param_1 + 100),*(int *)(param_1 + 0x10) * 2 + 0x19c,
                               &local_18);
  if (local_18 == 0) {
    _memset(piVar1 + 9,0,0x15c);
    *piVar1 = param_1;
    piVar1[1] = *(int *)(param_1 + 0x10);
    piVar1[2] = (int)(piVar1 + 0x67);
    piVar1[0x66] = param_3;
    *(undefined2 *)(piVar1 + 0x60) = 0;
    piVar1[0x65] = 0;
    piVar1[0x61] = 0;
    piVar1[0x62] = 0;
    piVar1[99] = 0;
    piVar1[100] = 0;
    uVar2 = FUN_0042fab9((int)piVar1);
    if ((char)uVar2 == '\0') {
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[7] = 0;
    }
    else {
      iVar3 = FUN_004379b4(piVar1);
      piVar1[3] = iVar3;
      iVar3 = (**(code **)(*(int *)(piVar1[0x66] + 0x38) + 0x10))();
      piVar1[4] = iVar3;
      FUN_004379e8(piVar1);
    }
    FUN_00437b9b(piVar1);
    piVar1[8] = 0;
  }
  *param_2 = piVar1;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

