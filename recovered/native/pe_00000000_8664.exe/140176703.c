/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140176703 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140176703(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  uint local_54;
  undefined2 local_50;
  undefined2 local_4e;
  uint local_4c;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x4e8);
  puVar4 = *(undefined8 **)(param_1 + 0xe8);
  lVar5 = *(longlong *)(lVar3 + 8);
  local_68 = &local_50;
  local_70 = &local_4e;
  local_78 = &local_4c;
  uVar11 = FUN_140179d15(lVar5 + 2,*(undefined2 *)(lVar3 + 2),param_2,&local_48);
  local_44 = (uint)uVar11;
  if (local_44 == 0) {
    uVar13 = (*(int *)(lVar3 + 0x10) - (int)lVar5) + *(int *)(lVar3 + 0x18);
    uVar11 = 8;
    if ((local_48 <= uVar13) && (local_4c <= uVar13 - local_48)) {
      pcVar14 = (char *)(lVar5 + (ulonglong)local_48);
      if ((6 < local_4c) &&
         (((*pcVar14 == '\x1f' && (pcVar14[1] == -0x75)) && (pcVar14[2] == '\b')))) {
        local_54 = (uint)(byte)pcVar14[local_4c - 4] |
                   (uint)(byte)pcVar14[local_4c - 2] << 0x10 |
                   (uint)(byte)pcVar14[local_4c - 1] << 0x18 |
                   (uint)(byte)pcVar14[local_4c - 3] << 8;
        uVar11 = 10;
        if (3 < (byte)pcVar14[local_4c - 1]) goto LAB_1401768df;
        pcVar12 = (char *)FUN_14012afda(uVar2,local_54,&local_44);
        uVar11 = (ulonglong)local_44;
        if (local_44 != 0) goto LAB_1401768df;
        local_78 = (uint *)CONCAT44(local_78._4_4_,local_4c);
        local_44 = FUN_14018487c(uVar2,pcVar12,&local_54,pcVar14);
        if (local_44 != 0) {
          FUN_140128b39(uVar2,pcVar12);
          uVar11 = 8;
          goto LAB_1401768df;
        }
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
        *puVar1 = *puVar1 | 2;
        pcVar14 = pcVar12;
        local_4c = local_54;
      }
      *puVar4 = pcVar14;
      *(uint *)(puVar4 + 1) = local_4c;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      uVar7 = *(undefined8 *)(lVar3 + 0x2c);
      puVar4[3] = *(undefined8 *)(lVar3 + 0x24);
      puVar4[4] = uVar7;
      *(undefined8 *)((longlong)puVar4 + 0xc) = uVar2;
      *(undefined8 *)((longlong)puVar4 + 0x14) = uVar6;
      *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(*(longlong *)(param_1 + 8) + 0x68);
      *(undefined2 *)((longlong)puVar4 + 0x2a) = local_4e;
      *(undefined2 *)((longlong)puVar4 + 0x2c) = local_50;
      uVar10 = _UNK_140e94eec;
      uVar9 = _UNK_140e94ee8;
      uVar8 = _UNK_140e94ee4;
      *(undefined4 *)(puVar4 + 6) = _DAT_140e94ee0;
      *(undefined4 *)((longlong)puVar4 + 0x34) = uVar8;
      *(undefined4 *)(puVar4 + 7) = uVar9;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar10;
      puVar4[8] = 0;
      *(undefined8 **)(param_1 + 0xe8) = puVar4;
      uVar11 = 0;
    }
  }
LAB_1401768df:
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_98);
  }
  return uVar11;
}

