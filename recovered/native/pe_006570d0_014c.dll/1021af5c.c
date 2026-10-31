/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021af5c */

undefined4 __fastcall FUN_1021af5c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  ushort *local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  ushort *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  iVar4 = FUN_10212796(param_1,0x42444620,param_2,&local_18);
  uVar7 = 8;
  if ((ushort *)0x7 < local_18 && iVar4 == 0) {
    iVar4 = FUN_101c4b40(param_2,local_18,param_1 + 0x344);
    if (iVar4 == 0) {
      puVar1 = (undefined4 *)(param_1 + 0x344);
      puVar2 = *(ushort **)(param_1 + 0x344);
      *(int *)(param_1 + 0x348) = (int)puVar2 + (int)local_18;
      local_1c = puVar1;
      if ((ushort)(*puVar2 << 8 | *puVar2 >> 8) == 1) {
        uVar3 = *(uint *)(puVar2 + 2);
        puVar5 = (ushort *)
                 (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
        if ((ushort *)0x7 < puVar5) {
          iVar4 = (uint)(byte)puVar2[1] * 0x100;
          local_28 = (uint)*(byte *)((int)puVar2 + 3);
          local_24 = local_28 + iVar4;
          local_2c = puVar5;
          local_20 = param_2;
          if ((puVar5 <= local_18 && (int)local_18 - (int)puVar5 != 0) &&
              local_24 <= (uint)(puVar5 + -4) >> 2) {
            *(uint *)(param_1 + 0x354) = local_24;
            local_2c = (ushort *)((int)puVar5 + (int)puVar2);
            *(ushort **)(param_1 + 0x34c) = local_2c;
            *(int *)(param_1 + 0x350) = (int)local_18 - (int)puVar5;
            puVar5 = puVar2 + local_24 * 2 + 4;
            if (local_24 != 0) {
              iVar6 = 0;
              do {
                puVar5 = puVar5 + (uint)(ushort)(puVar2[iVar6 * 2 + 5] << 8 |
                                                puVar2[iVar6 * 2 + 5] >> 8) * 5;
                iVar6 = iVar6 + 1;
              } while (iVar4 + local_28 != iVar6);
            }
            if (puVar5 <= local_2c) {
              *(undefined1 *)(param_1 + 0x358) = 1;
              uVar7 = 0;
              goto LAB_1021b0b3;
            }
          }
        }
      }
      uVar7 = 8;
      FUN_101c4c3e(param_2,puVar1);
      *(undefined8 *)(param_1 + 0x354) = 0;
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x348) = 0;
      *(undefined4 *)(param_1 + 0x34c) = 0;
      *(undefined4 *)(param_1 + 0x350) = 0;
    }
  }
LAB_1021b0b3:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

