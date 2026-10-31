/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180227b7b */

void FUN_180227b7b(longlong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_1e8 [36];
  uint local_1c4;
  undefined *local_1c0;
  undefined4 local_1b4;
  undefined1 *local_1b0;
  undefined **local_1a8;
  uint local_19c;
  undefined1 *local_198;
  longlong local_190;
  longlong local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined2 local_17a;
  undefined1 local_178 [16];
  undefined1 local_168 [260];
  int local_64;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)local_168;
  puVar3 = *(undefined1 **)(param_1 + 0x290);
  local_198 = puVar3;
  if ((puVar3 != (undefined1 *)0x0) && (3 < *(uint *)(param_1 + 0x298))) {
    local_198 = puVar3 + 4;
    local_19c = (uint)CONCAT11(puVar3[2],puVar3[3]);
    uVar2 = *(uint *)(param_1 + 0x298);
    if (local_19c != 0) {
      do {
        if (puVar3 + uVar2 < local_198 + 8) break;
        local_17c = CONCAT11(*local_198,local_198[1]);
        local_17a = CONCAT11(local_198[2],local_198[3]);
        local_180 = 0;
        puVar1 = local_198 + 8;
        uVar4 = (uint)(byte)local_198[7] |
                (uint)(byte)local_198[6] << 8 |
                (uint)(byte)local_198[5] << 0x10 | (uint)(byte)local_198[4] << 0x18;
        local_198 = puVar1;
        local_188 = param_1;
        if ((uVar4 != 0) && (uVar4 <= *(int *)(param_1 + 0x298) - 2U)) {
          local_1b0 = puVar3 + uVar4;
          local_1c4 = (uint)CONCAT11(*local_1b0,local_1b0[1]);
          for (local_1a8 = &PTR_DAT_18034cb30; *local_1a8 != (undefined *)0x0;
              local_1a8 = local_1a8 + 1) {
            local_1c0 = *local_1a8;
            if (*(uint *)(local_1c0 + 0x50) == local_1c4) {
              local_1b4 = 0;
              FUN_1801ca4f9(local_178,local_1b0,puVar3 + uVar2,0);
              local_58 = (uint)*(ushort *)(param_1 + 0x174);
              iVar5 = FUN_1802a7f90(local_178,local_1e8);
              if (iVar5 == 0) {
                local_1b4 = (**(code **)(local_1c0 + 0x58))(local_1b0,local_178);
              }
              if ((local_64 == 0) &&
                 (iVar5 = FUN_1801cc9a6(local_1c0,local_1b0,&local_188,&local_190), iVar5 == 0)) {
                *(undefined4 *)(local_190 + 0x20) = local_1b4;
              }
              break;
            }
          }
        }
        local_19c = local_19c - 1;
      } while (local_19c != 0);
    }
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)local_168)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)local_168);
  }
  return;
}

