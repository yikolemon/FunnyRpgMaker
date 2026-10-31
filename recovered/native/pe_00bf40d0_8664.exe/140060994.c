/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140060994 */

void FUN_140060994(ulonglong *param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  *param_4 = -1;
  FUN_140060811(param_1,&local_60);
  if (local_50 == 3) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    *param_1 = local_60 + 1U;
    param_1[2] = local_58 - 1U;
    puVar3 = param_2;
    if (local_60 + 1U < local_58 - 1U) {
      do {
        FUN_140060811(param_1,&local_78);
        if (local_68 == 0) break;
        if (puVar3 < param_2 + (ulonglong)param_3 * 3 && param_2 != (undefined8 *)0x0) {
          puVar3[2] = CONCAT44(uStack_64,local_68);
          *puVar3 = local_78;
          puVar3[1] = uStack_70;
        }
        puVar3 = puVar3 + 3;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = (int)((ulonglong)((longlong)puVar3 - (longlong)param_2) >> 3) * -0x55555555;
    *param_1 = uVar1;
    param_1[2] = uVar2;
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_98);
}

