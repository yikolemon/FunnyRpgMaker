/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042222e */

/* WARNING: Type propagation algorithm not settling */

int __fastcall FUN_0042222e(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 local_8c;
  char local_4d;
  char local_42;
  char local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_8c;
  if (param_2 == (int *)0x0) {
    iVar1 = 0x55;
  }
  else {
    iVar1 = FUN_00420696((int)param_2,0);
    if (iVar1 == 0) {
      iVar1 = FUN_004206d1(param_2,&local_8c,0x80);
      if ((((iVar1 == 0) && (iVar1 = 2, (char)local_8c == '\0')) && (local_42 == '\0')) &&
         (((local_3a == '\0' && (0xde < (byte)(local_8c._1_1_ - 0x22))) &&
          ((local_4d == '\0' &&
           (-1 < (char)local_39 && *(char *)((int)&local_8c + (uint)local_8c._1_1_ + 2) == '\0')))))
         ) {
        iVar1 = FUN_0042233a(param_1,param_2,
                             (((uint)local_37 << 8 | (uint)local_38 << 0x10 | (uint)local_39 << 0x18
                              ) + (uint)local_36 + 0x7f & 0xffffff80) + 0x80,param_3,param_4);
      }
    }
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_8c)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_8c);
}

