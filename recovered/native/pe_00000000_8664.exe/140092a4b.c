/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092a4b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140092a4b(void)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  ulonglong local_20;
  
  lVar2 = DAT_140f2a910;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14008ac08("##Tooltip_Error");
  if ((lVar4 == 0) || (*(char *)(lVar2 + 0x138) == '\0')) {
    fStack_30 = (_UNK_1402115e8 - *(float *)(lVar2 + 0xf30)) * _UNK_1402115f8 +
                *(float *)(lVar2 + 0xf30);
    fStack_2c = (_UNK_1402115ec - *(float *)(lVar2 + 0xf34)) * _UNK_1402115fc +
                *(float *)(lVar2 + 0xf34);
    local_38 = CONCAT44((_UNK_1402115e4 - *(float *)(lVar2 + 0xf2c)) * _UNK_1402115f4 +
                        *(float *)(lVar2 + 0xf2c),
                        (_DAT_1402115e0 - *(float *)(lVar2 + 0xf28)) * _DAT_1402115f0 +
                        *(float *)(lVar2 + 0xf28));
    FUN_14007a7b5(4);
  }
  else {
    cVar1 = *(char *)(lVar4 + 0x10a);
    fStack_30 = (_UNK_1402115e8 - *(float *)(lVar2 + 0xf30)) * _UNK_1402115f8 +
                *(float *)(lVar2 + 0xf30);
    fStack_2c = (_UNK_1402115ec - *(float *)(lVar2 + 0xf34)) * _UNK_1402115fc +
                *(float *)(lVar2 + 0xf34);
    local_38 = CONCAT44((_UNK_1402115e4 - *(float *)(lVar2 + 0xf2c)) * _UNK_1402115f4 +
                        *(float *)(lVar2 + 0xf2c),
                        (_DAT_1402115e0 - *(float *)(lVar2 + 0xf28)) * _DAT_1402115f0 +
                        *(float *)(lVar2 + 0xf28));
    FUN_14007a7b5(4);
    if (cVar1 == '\x01') {
      local_38 = 0;
      FUN_14008fda3(lVar2 + 0x2a98,0);
    }
  }
  uVar3 = FUN_140085d7e("##Tooltip_Error",0,0x200016f);
  FUN_14007a8e1(1);
  if ((char)uVar3 == '\0') {
    FUN_140088c18();
  }
  else if (*(short *)(*(longlong *)(lVar2 + 0x1608) + 0x118) == 1) {
    FUN_1400b1021("MESSAGE FROM DEAR IMGUI");
    FUN_140092c65(*(undefined8 *)(lVar2 + 0x1608));
    FUN_140092cee(*(undefined8 *)(lVar2 + 0x1608));
    FUN_14008fce3(&local_38);
    *(undefined8 *)(lVar2 + 0x2a98) = local_38;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

