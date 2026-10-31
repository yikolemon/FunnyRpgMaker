/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c61a6 */

int __fastcall FUN_101c61a6(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char local_8c;
  byte local_8b;
  char acStack_8a [61];
  char local_4d;
  char local_42;
  char local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_8c;
  if (param_2 == 0) {
    iVar1 = 0x55;
  }
  else {
    iVar1 = FUN_101c461e(param_2,0);
    if (iVar1 == 0) {
      iVar1 = FUN_101c4659(param_2,&local_8c,0x80);
      if ((((iVar1 == 0) && (iVar1 = 2, local_8c == '\0')) && (local_42 == '\0')) &&
         (((local_3a == '\0' && (0xde < (byte)(local_8b - 0x22))) &&
          ((local_4d == '\0' && (-1 < (char)local_39 && acStack_8a[local_8b] == '\0')))))) {
        iVar1 = FUN_101c62b2((((uint)local_37 << 8 | (uint)local_38 << 0x10 | (uint)local_39 << 0x18
                              ) + (uint)local_36 + 0x7f & 0xffffff80) + 0x80,param_3,param_4);
      }
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_8c)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

