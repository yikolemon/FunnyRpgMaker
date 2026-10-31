/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d94a */

void FUN_14006d94a(longlong *param_1,int param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  int local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_e8;
  if (0 < (int)param_3) {
    iVar5 = 0;
    do {
      uVar4 = 0x10;
      if (param_3 < 0x10) {
        uVar4 = param_3;
      }
      uVar3 = 0;
      do {
        iVar5 = iVar5 + *(int *)(param_4 + uVar3 * 4);
        uVar2 = FUN_140021867(iVar5);
        local_c8[uVar3] = (int)uVar2 >> 0x10;
        uVar3 = uVar3 + 1;
      } while (uVar4 * 2 != uVar3);
      uVar3 = 0;
      do {
        local_c8[uVar3 + 1] = local_c8[uVar3 + 1] - local_c8[uVar3];
        uVar3 = uVar3 + 2;
      } while (uVar3 < uVar4 * 2);
      FUN_14006d397(param_1,param_2,uVar4,(longlong)local_c8);
      uVar2 = param_3 - uVar4;
      bVar1 = (int)uVar4 <= (int)param_3;
      param_3 = uVar2;
    } while (uVar2 != 0 && bVar1);
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_e8);
}

