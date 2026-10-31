/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140077c69 */

undefined8
FUN_140077c69(ushort *param_1,ushort param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
             ushort *param_6,undefined2 *param_7)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_a8 [36];
  uint local_84;
  undefined4 *local_80;
  ulonglong local_78;
  ushort local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  ushort local_60 [6];
  ushort local_54 [6];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar7 = 8;
  }
  else {
    uVar6 = (ulonglong)(param_2 - 1);
    FUN_140077de9(local_54,param_1);
    FUN_140077de9(local_60,(ushort *)((ulonglong)((param_2 - 1) * 0xc) + (longlong)param_1));
    uVar5 = FUN_140077e13(local_54,param_3);
    uVar7 = 0x10;
    if ((int)uVar5 != -1) {
      uVar5 = FUN_140077e13(local_60,param_3);
      if ((int)uVar5 != 1) {
        uVar9 = 0;
        local_84 = param_3;
        local_80 = param_4;
        do {
          uVar8 = (int)uVar6 + uVar9 >> 1;
          local_78 = uVar6;
          FUN_140077de9(&local_6c,(ushort *)((ulonglong)(uVar8 * 0xc) + (longlong)param_1));
          uVar4 = local_64;
          uVar3 = local_68;
          uVar2 = local_6a;
          uVar1 = local_6c;
          uVar6 = FUN_140077e13(&local_6c,local_84);
          if ((int)uVar6 == -1) {
            uVar6 = (ulonglong)(uVar8 - 1);
          }
          else {
            if ((int)uVar6 != 1) {
              *local_80 = uVar3;
              *param_5 = uVar4;
              *param_6 = uVar1;
              *param_7 = uVar2;
              uVar7 = 0;
              goto LAB_140077d89;
            }
            uVar9 = uVar8 + 1;
            uVar6 = local_78;
          }
        } while (uVar9 <= (uint)uVar6);
        uVar7 = 0x10;
      }
    }
  }
LAB_140077d89:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_a8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_a8);
}

