/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10160acf */

void FUN_10160acf(int param_1,int param_2)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  int iStack_38;
  uint uStack_34;
  size_t asStack_30 [4];
  int iStack_20;
  int local_1c;
  uint auStack_18 [4];
  
  auStack_18[3] = DAT_10388d00 ^ (uint)auStack_48;
  uVar1 = param_2 + 0x1f >> 3 & 0xfffffffc;
  iStack_38 = param_2 * 0x74;
  asStack_30[1] = 0;
  asStack_30[2] = 0;
  local_3c = 0;
  asStack_30[0] = 0;
  auStack_18[0] = 0;
  auStack_18[1] = 0;
  auStack_18[2] = 0;
  iStack_20 = param_2 * 2;
  local_1c = param_2 * 8;
  uStack_34 = param_2 * 0x76 + 3U & 0xfffffffc;
  _Size = uStack_34 + param_2 * 8;
  iVar2 = 0;
  do {
    asStack_30[iVar2] = _Size;
    auStack_18[iVar2] = uVar1;
    _Size = _Size + uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  asStack_30[3] = iStack_38;
  _Dst = (void *)FUN_100fa1fa(_Size);
  *(void **)(param_1 + 8) = _Dst;
  _memset(_Dst,0,_Size);
  iVar2 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x10) = iVar2;
  *(size_t *)(param_1 + 0x14) = asStack_30[3] + iVar2;
  *(int *)(param_1 + 0x18) = iStack_38 + iVar2;
  *(int *)(param_1 + 0x1c) = iStack_20 + iStack_38 + iVar2;
  *(uint *)(param_1 + 0x20) = uStack_34 + iVar2;
  *(uint *)(param_1 + 0x24) = local_1c + uStack_34 + iVar2;
  *(size_t *)(param_1 + 0x28) = asStack_30[0] + iVar2;
  *(size_t *)(param_1 + 0x2c) = asStack_30[1] + iVar2;
  *(size_t *)(param_1 + 0x30) = iVar2 + asStack_30[2];
  if (DAT_10388d00 == (auStack_18[3] ^ (uint)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

