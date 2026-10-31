/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a809 */

void FUN_18019a809(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ushort *param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  int local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_a0 = *(int *)(lVar1 + 0x24) * *(int *)(lVar1 + 0x1c);
  local_a8 = *(undefined4 *)(lVar1 + 0x18);
  local_90 = (uint)param_5[3];
  local_98 = (uint)param_5[2];
  FUN_180196358(param_6,param_7,param_8,
                (longlong)
                (int)(((uint)param_5[1] * *(int *)(lVar1 + 0x1c) + (uint)*param_5) *
                     *(int *)(lVar1 + 0x24)) + *(longlong *)(lVar1 + 0x28));
  local_80 = *(undefined8 *)(param_2 + 0x58);
  local_60 = (longlong)
             (int)(((uint)param_5[1] * *(int *)(lVar1 + 0x1c) + (uint)*param_5) *
                  *(int *)(lVar1 + 0x24)) + *(longlong *)(lVar1 + 0x28);
  local_58 = *(undefined4 *)(lVar1 + 0x18);
  local_54 = *(int *)(lVar1 + 0x24) * *(int *)(lVar1 + 0x1c);
  local_50 = (ulonglong)
             (CONCAT24((short)((uint)*(undefined4 *)(param_5 + 2) >> 0x10),
                       *(undefined4 *)(param_5 + 2)) & 0xffff0000ffff);
  local_88 = param_1;
  local_78 = param_3;
  local_70 = param_2;
  local_68 = param_4;
  FUN_180196471();
  local_a0 = (uint)param_5[3];
  local_a8 = (uint)param_5[2];
  FUN_180196606(param_1,lVar1,*param_5,param_5[1]);
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_c8);
}

