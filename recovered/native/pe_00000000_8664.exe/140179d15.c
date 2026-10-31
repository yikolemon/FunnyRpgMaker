/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140179d15 */

undefined8
FUN_140179d15(longlong param_1,ushort param_2,undefined4 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined4 *local_80;
  ulonglong local_78;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    uVar6 = 8;
  }
  else {
    uVar9 = (ulonglong)(param_2 - 1);
    FUN_140179e95(local_54,param_1);
    FUN_140179e95(local_60,(ulonglong)((param_2 - 1) * 0xc) + param_1);
    iVar5 = FUN_140179ebf(local_54,param_3);
    uVar6 = 0x10;
    if (iVar5 != -1) {
      iVar5 = FUN_140179ebf(local_60,param_3);
      if (iVar5 != 1) {
        uVar8 = 0;
        local_84 = param_3;
        local_80 = param_4;
        do {
          uVar7 = (int)uVar9 + uVar8 >> 1;
          local_78 = uVar9;
          FUN_140179e95(&local_6c,(ulonglong)(uVar7 * 0xc) + param_1);
          uVar4 = local_64;
          uVar3 = local_68;
          uVar2 = local_6a;
          uVar1 = local_6c;
          iVar5 = FUN_140179ebf(&local_6c,local_84);
          if (iVar5 == -1) {
            uVar9 = (ulonglong)(uVar7 - 1);
          }
          else {
            if (iVar5 != 1) {
              *local_80 = uVar3;
              *param_5 = uVar4;
              *param_6 = uVar1;
              *param_7 = uVar2;
              uVar6 = 0;
              goto LAB_140179e35;
            }
            uVar8 = uVar7 + 1;
            uVar9 = local_78;
          }
        } while (uVar8 <= (uint)uVar9);
        uVar6 = 0x10;
      }
    }
  }
LAB_140179e35:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_a8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
}

