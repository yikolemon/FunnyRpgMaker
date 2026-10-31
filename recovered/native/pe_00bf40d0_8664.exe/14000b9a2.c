/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b9a2 */

ushort * FUN_14000b9a2(longlong *param_1,ulonglong param_2,ushort *param_3,ushort *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 *local_b0;
  byte local_a8 [8];
  undefined8 uStack_a0;
  code *local_98;
  longlong local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  undefined2 local_67;
  char local_60 [8];
  undefined8 uStack_58;
  code *local_50;
  undefined8 local_44;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  *param_1 = (longlong)param_3;
  param_1[1] = param_1[1] - ((longlong)param_3 - lVar2 >> 1);
  plVar1 = param_1 + 4;
  FUN_14000baf8(local_60,(longlong)plVar1,param_2);
  if (local_60[0] == '\r') {
    (*local_50)(param_1,plVar1,uStack_58);
    puVar3 = (ushort *)*param_1;
  }
  else {
    local_44 = 0xffffffff00000000;
    local_38 = 0;
    local_3c = 0;
    local_36 = 1;
    local_34 = 0x20;
    local_68 = local_60[0];
    local_67 = 0;
    local_80 = &local_44;
    local_78 = param_1;
    local_70 = plVar1;
    puVar3 = FUN_14000f449(param_3,param_4,(longlong *)&local_80);
    if ((puVar3 == param_4) || (*puVar3 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b455(0x14011bf29);
    }
    local_98 = local_50;
    uStack_a0 = uStack_58;
    local_b8 = plVar1;
    local_b0 = &local_44;
    FUN_14000f5c4(&local_88,(longlong *)&local_b8,local_a8);
    *plVar1 = local_88;
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_d8)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_d8);
}

