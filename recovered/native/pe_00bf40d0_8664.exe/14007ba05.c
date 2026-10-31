/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ba05 */

undefined8 FUN_14007ba05(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  undefined4 local_70;
  code *local_68;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  longlong local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_a8;
  puVar4 = *(undefined8 **)(param_2 + 8);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = puVar4 + *(ushort *)(param_2 + 2);
  }
  uVar2 = 0x62;
  if ((param_3[1] & 0x3fffe000U) == 0) {
    local_70 = 3;
    local_68 = FUN_14007be87;
    local_48 = &local_30;
    local_40 = 0;
    local_38 = param_3[1] << 2;
    local_34 = *param_3 * 4;
    local_28 = param_3[2];
    uVar6 = 0;
    if (-1 < local_28) {
      uVar6 = (ulonglong)(uint)((*param_3 + -1) * local_28);
    }
    local_30 = uVar6 + *(longlong *)(param_3 + 4);
    puVar3 = puVar4;
    local_78 = param_2;
    if (puVar4 < puVar5) {
      do {
        *puVar3 = CONCAT44((int)((ulonglong)*puVar3 >> 0x20) << 2,(int)*puVar3 << 2);
        puVar3 = puVar3 + 1;
      } while (puVar3 < puVar5);
      uVar2 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_80);
      do {
        iVar7 = (int)*puVar4;
        iVar1 = (int)((ulonglong)*puVar4 >> 0x20);
        *puVar4 = CONCAT44((int)(((uint)(iVar1 >> 0x1f) >> 0x1e) + iVar1) >> 2,
                           (int)(((uint)(iVar7 >> 0x1f) >> 0x1e) + iVar7) >> 2);
        puVar4 = puVar4 + 1;
      } while (puVar4 < puVar5);
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),local_80);
    }
  }
  if (DAT_14012ea80 != (local_18 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_18 ^ (ulonglong)auStack_a8);
  }
  return uVar2;
}

