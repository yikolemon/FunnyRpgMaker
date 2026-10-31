/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10015424 */

void __fastcall FUN_10015424(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_14;
  if (*param_1 == '\0') {
    local_14 = *(uint *)(param_1 + 0x48);
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    uVar1 = local_14 >> 3 & 0x3f;
    FUN_100153b2(&DAT_1028f1f0,((uint)(0x37 < uVar1) << 6 | 0x38) - uVar1);
    FUN_100153b2(&local_14,8);
    iVar2 = 0x14;
    do {
      *(undefined4 *)(param_1 + iVar2 * 4 + 0x10) = *(undefined4 *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x18);
    FUN_10015dba(param_1 + 1,0,0x40);
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    *param_1 = '\x01';
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

