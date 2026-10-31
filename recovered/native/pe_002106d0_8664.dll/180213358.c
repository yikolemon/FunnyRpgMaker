/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213358 */

void FUN_180213358(ulonglong *param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  *param_4 = -1;
  FUN_1802131d5(param_1,&local_60);
  if (local_50 == 3) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    *param_1 = local_60 + 1U;
    param_1[2] = local_58 - 1U;
    puVar3 = param_2;
    if (local_60 + 1U < local_58 - 1U) {
      do {
        FUN_1802131d5(param_1,&local_78);
        if (local_68 == 0) break;
        if (puVar3 < param_2 + (ulonglong)param_3 * 6 && param_2 != (undefined4 *)0x0) {
          *(ulonglong *)(puVar3 + 4) = CONCAT44(uStack_64,local_68);
          *puVar3 = local_78;
          puVar3[1] = uStack_74;
          puVar3[2] = uStack_70;
          puVar3[3] = uStack_6c;
        }
        puVar3 = puVar3 + 6;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = (int)((ulonglong)((longlong)puVar3 - (longlong)param_2) >> 3) * -0x55555555;
    *param_1 = uVar1;
    param_1[2] = uVar2;
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
}

