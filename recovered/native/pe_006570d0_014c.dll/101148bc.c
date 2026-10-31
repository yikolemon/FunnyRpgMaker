/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101148bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101148bc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_20;
  float fStack_18;
  float fStack_14;
  uint local_10;
  
  iVar2 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_20;
  iVar3 = FUN_1010cbda("##Tooltip_Error");
  if ((iVar3 == 0) || (*(char *)(iVar2 + 0x104) == '\0')) {
    fStack_18 = (_UNK_102b8dd8 - *(float *)(iVar2 + 0xe48)) * _UNK_102b8de8 +
                *(float *)(iVar2 + 0xe48);
    fStack_14 = (_UNK_102b8ddc - *(float *)(iVar2 + 0xe4c)) * _UNK_102b8dec +
                *(float *)(iVar2 + 0xe4c);
    local_20 = CONCAT44((_UNK_102b8dd4 - *(float *)(iVar2 + 0xe44)) * _UNK_102b8de4 +
                        *(float *)(iVar2 + 0xe44),
                        (_DAT_102b8dd0 - *(float *)(iVar2 + 0xe40)) * _DAT_102b8de0 +
                        *(float *)(iVar2 + 0xe40));
    FUN_100fcd80(4,&local_20);
  }
  else {
    cVar1 = *(char *)(iVar3 + 0xfa);
    fStack_18 = (_UNK_102b8dd8 - *(float *)(iVar2 + 0xe48)) * _UNK_102b8de8 +
                *(float *)(iVar2 + 0xe48);
    fStack_14 = (_UNK_102b8ddc - *(float *)(iVar2 + 0xe4c)) * _UNK_102b8dec +
                *(float *)(iVar2 + 0xe4c);
    local_20 = CONCAT44((_UNK_102b8dd4 - *(float *)(iVar2 + 0xe44)) * _UNK_102b8de4 +
                        *(float *)(iVar2 + 0xe44),
                        (_DAT_102b8dd0 - *(float *)(iVar2 + 0xe40)) * _DAT_102b8de0 +
                        *(float *)(iVar2 + 0xe40));
    FUN_100fcd80(4,&local_20);
    if (cVar1 == '\x01') {
      local_20 = 0;
      FUN_10111d56(iVar2 + 0x2784,0,&local_20);
    }
  }
  uVar4 = FUN_10107d2b("##Tooltip_Error",0,0x200016f);
  FUN_100fce8e(1);
  if ((char)uVar4 == '\0') {
    FUN_1010ad44();
  }
  else if (*(short *)(*(int *)(iVar2 + 0x14cc) + 0x108) == 1) {
    FUN_10132656("MESSAGE FROM DEAR IMGUI");
    FUN_10114ada(*(undefined4 *)(iVar2 + 0x14cc));
    FUN_10114b4c(*(undefined4 *)(iVar2 + 0x14cc));
    FUN_10111c87(&local_20);
    *(undefined8 *)(iVar2 + 0x2784) = local_20;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

