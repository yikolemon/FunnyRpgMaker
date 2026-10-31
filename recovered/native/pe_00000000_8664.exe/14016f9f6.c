/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f9f6 */

void FUN_14016f9f6(undefined8 param_1,undefined4 param_2,uint param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_e8 [32];
  int local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  if (0 < (int)param_3) {
    iVar6 = 0;
    do {
      uVar5 = 0x10;
      if (param_3 < 0x10) {
        uVar5 = param_3;
      }
      uVar4 = 0;
      do {
        iVar6 = iVar6 + *(int *)(param_4 + uVar4 * 4);
        iVar2 = FUN_14012e438(iVar6);
        local_c8[uVar4] = iVar2 >> 0x10;
        uVar4 = uVar4 + 1;
      } while (uVar5 * 2 != uVar4);
      uVar4 = 0;
      do {
        local_c8[uVar4 + 1] = local_c8[uVar4 + 1] - local_c8[uVar4];
        uVar4 = uVar4 + 2;
      } while (uVar4 < uVar5 * 2);
      FUN_14016f443(param_1,param_2,uVar5,local_c8);
      uVar3 = param_3 - uVar5;
      bVar1 = (int)uVar5 <= (int)param_3;
      param_3 = uVar3;
    } while (uVar3 != 0 && bVar1);
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_e8);
}

