/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046ee6d */

void __fastcall FUN_0046ee6d(int param_1)

{
  int iVar1;
  size_t *psVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  uint local_84;
  undefined4 local_80;
  int local_78;
  int local_74 [2];
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68 [19];
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffff6c;
  iVar1 = *(int *)(param_1 + 0x1fc);
  if ((iVar1 != 0) && (3 < *(uint *)(param_1 + 0x200))) {
    local_84 = (uint)CONCAT11(*(undefined1 *)(iVar1 + 2),*(undefined1 *)(iVar1 + 3));
    puVar6 = (undefined1 *)(*(int *)(param_1 + 0x200) + iVar1);
    puVar4 = (undefined1 *)(iVar1 + 4);
    while ((local_84 != 0 && (puVar4 + 8 <= puVar6))) {
      local_6c = CONCAT11(*puVar4,puVar4[1]);
      local_6a = CONCAT11(puVar4[2],puVar4[3]);
      local_74[1] = 0;
      puVar7 = puVar4 + 8;
      uVar3 = (uint)(byte)puVar4[7] |
              (uint)(byte)puVar4[6] << 8 |
              (uint)(byte)puVar4[5] << 0x10 | (uint)(byte)puVar4[4] << 0x18;
      local_74[0] = param_1;
      if ((uVar3 != 0) && (uVar3 <= *(int *)(param_1 + 0x200) - 2U)) {
        puVar4 = (undefined1 *)(uVar3 + iVar1);
        for (ppuVar8 = &PTR_DAT_004f651c; *ppuVar8 != (undefined *)0x0; ppuVar8 = ppuVar8 + 1) {
          psVar2 = (size_t *)*ppuVar8;
          if (psVar2[10] == (uint)CONCAT11(*puVar4,puVar4[1])) {
            local_80 = 0;
            FUN_0041ced7((int)local_68,puVar4,puVar6,0);
            local_18 = (uint)*(ushort *)(param_1 + 0x108);
            iVar5 = FUN_00485a60(local_68,0,puVar7,ppuVar8);
            if (iVar5 == 0) {
              local_80 = (*(code *)psVar2[0xb])(puVar4,local_68);
            }
            if ((local_1c == 0) &&
               (iVar5 = FUN_0041f08c(psVar2,puVar4,local_74,&local_78), iVar5 == 0)) {
              *(undefined4 *)(local_78 + 0x14) = local_80;
            }
            break;
          }
        }
      }
      local_84 = local_84 - 1;
      puVar4 = puVar7;
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&stack0xffffff6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&stack0xffffff6c);
  }
  return;
}

