/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102176ed */

void __fastcall FUN_102176ed(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *local_94;
  undefined **local_90;
  undefined1 *local_8c;
  undefined *local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  int local_78;
  int local_74 [2];
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 local_68 [76];
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_94;
  puVar2 = *(undefined1 **)(param_1 + 0x1fc);
  local_94 = puVar2;
  if ((puVar2 != (undefined1 *)0x0) && (3 < *(uint *)(param_1 + 0x200))) {
    local_94 = puVar2 + 4;
    local_84 = (uint)CONCAT11(puVar2[2],puVar2[3]);
    iVar3 = *(int *)(param_1 + 0x200);
    while ((local_84 != 0 && (local_94 + 8 <= puVar2 + iVar3))) {
      local_6c = CONCAT11(*local_94,local_94[1]);
      local_6a = CONCAT11(local_94[2],local_94[3]);
      local_74[1] = 0;
      puVar1 = local_94 + 8;
      uVar4 = (uint)(byte)local_94[7] |
              (uint)(byte)local_94[6] << 8 |
              (uint)(byte)local_94[5] << 0x10 | (uint)(byte)local_94[4] << 0x18;
      local_94 = puVar1;
      local_74[0] = param_1;
      if ((uVar4 != 0) && (uVar4 <= *(int *)(param_1 + 0x200) - 2U)) {
        local_8c = puVar2 + uVar4;
        local_7c = (uint)CONCAT11(*local_8c,local_8c[1]);
        for (local_90 = &PTR_DAT_10321f7c; *local_90 != (undefined *)0x0; local_90 = local_90 + 1) {
          local_88 = *local_90;
          if (*(uint *)(local_88 + 0x28) == local_7c) {
            local_80 = 0;
            FUN_101c08e7(local_68,local_8c,puVar2 + iVar3,0);
            local_18 = (uint)*(ushort *)(param_1 + 0x108);
            iVar5 = FUN_10259470(local_68,0);
            if (iVar5 == 0) {
              local_80 = (**(code **)(local_88 + 0x2c))(local_8c,local_68);
            }
            if ((local_1c == 0) &&
               (iVar5 = FUN_101c2b0f(local_88,local_8c,local_74,&local_78), iVar5 == 0)) {
              *(undefined4 *)(local_78 + 0x14) = local_80;
            }
            break;
          }
        }
      }
      local_84 = local_84 - 1;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_94)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

