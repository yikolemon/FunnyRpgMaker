/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140074657 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140074657(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 auStackY_98 [32];
  uint local_54;
  undefined2 local_50;
  ushort local_4e;
  uint local_4c;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x4e8);
  puVar4 = *(undefined8 **)(param_1 + 0xe8);
  lVar5 = *(longlong *)(lVar3 + 8);
  uVar9 = FUN_140077c69((ushort *)(lVar5 + 2),*(ushort *)(lVar3 + 2),param_2,&local_48,&local_4c,
                        &local_4e,&local_50);
  local_44 = (uint)uVar9;
  if (local_44 == 0) {
    uVar11 = (*(int *)(lVar3 + 0x10) - (int)lVar5) + *(int *)(lVar3 + 0x18);
    uVar9 = 8;
    if ((local_48 <= uVar11) && (local_4c <= uVar11 - local_48)) {
      pcVar12 = (char *)(lVar5 + (ulonglong)local_48);
      if ((6 < local_4c) &&
         (((*pcVar12 == '\x1f' && (pcVar12[1] == -0x75)) && (pcVar12[2] == '\b')))) {
        local_54 = (uint)(byte)pcVar12[local_4c - 4] |
                   (uint)(byte)pcVar12[local_4c - 2] << 0x10 |
                   (uint)(byte)pcVar12[local_4c - 1] << 0x18 |
                   (uint)(byte)pcVar12[local_4c - 3] << 8;
        uVar9 = 10;
        if (3 < (byte)pcVar12[local_4c - 1]) goto LAB_140074833;
        pcVar10 = (char *)FUN_14001e961(lVar2,local_54,(int *)&local_44);
        uVar9 = (ulonglong)local_44;
        if (local_44 != 0) goto LAB_140074833;
        local_44 = FUN_14008246c(lVar2,(longlong)pcVar10,&local_54,(longlong)pcVar12,local_4c);
        if (local_44 != 0) {
          FUN_14001c53d(lVar2,(longlong)pcVar10);
          uVar9 = 8;
          goto LAB_140074833;
        }
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
        *puVar1 = *puVar1 | 2;
        pcVar12 = pcVar10;
        local_4c = local_54;
      }
      *puVar4 = pcVar12;
      *(uint *)(puVar4 + 1) = local_4c;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
      uVar7 = *(undefined8 *)(lVar2 + 0x20);
      uVar8 = *(undefined8 *)(lVar2 + 0x2c);
      puVar4[3] = *(undefined8 *)(lVar2 + 0x24);
      puVar4[4] = uVar8;
      *(undefined8 *)((longlong)puVar4 + 0xc) = uVar6;
      *(undefined8 *)((longlong)puVar4 + 0x14) = uVar7;
      *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(*(longlong *)(param_1 + 8) + 0x68);
      *(ushort *)((longlong)puVar4 + 0x2a) = local_4e;
      *(undefined2 *)((longlong)puVar4 + 0x2c) = local_50;
      uVar6 = _UNK_1400e6838;
      puVar4[6] = _DAT_1400e6830;
      puVar4[7] = uVar6;
      puVar4[8] = 0;
      *(undefined8 **)(param_1 + 0xe8) = puVar4;
      uVar9 = 0;
    }
  }
LAB_140074833:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_98);
  }
  return uVar9;
}

