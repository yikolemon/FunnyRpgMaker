/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004003f */

int FUN_14004003f(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStackY_68 [32];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  lVar4 = param_2[6];
  local_2c = (**(code **)(param_1 + 0x2a0))(param_1,0x63767420,param_2,&local_30);
  if (local_2c == 0) {
    *(uint *)(param_1 + 0x3d0) = local_30 >> 1;
    lVar4 = FUN_14001f231(lVar4,4,0,local_30 >> 1,0,&local_2c);
    *(longlong *)(param_1 + 0x3d8) = lVar4;
    iVar3 = local_2c;
    if ((local_2c == 0) &&
       (local_2c = FUN_140021063(param_2,*(int *)(param_1 + 0x3d0) * 2), iVar3 = local_2c,
       local_2c == 0)) {
      if ((ulonglong)*(uint *)(param_1 + 0x3d0) != 0) {
        piVar5 = *(int **)(param_1 + 0x3d8);
        piVar1 = piVar5 + *(uint *)(param_1 + 0x3d0);
        do {
          uVar2 = FUN_1400211ce((longlong)param_2);
          *piVar5 = (int)(short)uVar2 << 6;
          piVar5 = piVar5 + 1;
        } while (piVar5 < piVar1);
      }
      FUN_140021187(param_2);
      iVar3 = local_2c;
      if (*(char *)(param_1 + 0x401) != '\0') {
        iVar3 = FUN_14004016b(param_1,param_2);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    iVar3 = 0;
  }
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStackY_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStackY_68);
  }
  return iVar3;
}

