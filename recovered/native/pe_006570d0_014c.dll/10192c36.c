/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192c36 */

void FUN_10192c36(int param_1,int param_2,undefined4 param_3,undefined4 param_4,ushort *param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  ulonglong local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_1018eb89(param_6,param_7,param_8,
               ((uint)param_5[1] * *(int *)(iVar1 + 0x1c) + (uint)*param_5) * *(int *)(iVar1 + 0x24)
               + *(int *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x18),
               *(int *)(iVar1 + 0x24) * *(int *)(iVar1 + 0x1c),param_5[2],param_5[3]);
  local_3c = param_1;
  local_38 = *(undefined4 *)(param_2 + 0x48);
  local_34 = param_3;
  local_30 = param_2;
  local_2c = param_4;
  local_28 = ((uint)param_5[1] * *(int *)(iVar1 + 0x1c) + (uint)*param_5) * *(int *)(iVar1 + 0x24) +
             *(int *)(iVar1 + 0x28);
  local_24 = *(undefined4 *)(iVar1 + 0x18);
  local_20 = *(int *)(iVar1 + 0x24) * *(int *)(iVar1 + 0x1c);
  local_1c = (ulonglong)
             (CONCAT24((short)((uint)*(undefined4 *)(param_5 + 2) >> 0x10),
                       *(undefined4 *)(param_5 + 2)) & 0xffff0000ffff);
  FUN_1018ec7c(&local_3c);
  FUN_1018ee1a(param_1,iVar1,*param_5,param_5[1],param_5[2],param_5[3]);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

