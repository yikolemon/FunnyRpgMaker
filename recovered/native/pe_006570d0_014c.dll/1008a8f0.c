/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008a8f0 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_1008a8f0(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 local_94 [36];
  undefined4 local_70;
  undefined4 local_6c;
  char *local_68;
  char *local_64;
  int local_60;
  int local_5c;
  char *local_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c [7];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_94;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3580;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_40 = FUN_10077b66();
  if (local_40 != 0) {
    FUN_10076b48(&local_60,&local_40);
    local_14 = 2;
    if (DAT_1039cbc8 == '\x01') {
      local_3c[1] = 0;
      local_3c[2] = 0;
      local_3c[3] = 0;
      local_3c[4] = 0;
      local_3c[5] = 0;
      local_3c[6] = 0;
      local_14 = 2;
      FUN_1000254c(local_60,(local_5c - local_60) - (uint)(*(char *)(local_5c + -1) == '\0'));
      local_14 = 3;
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_1039cc78) &&
         (FUN_1022c0d0(&DAT_1039cc78), DAT_1039cc78 == -1)) {
        local_14 = 4;
        FUN_10075be2();
        FUN_1022c3a0(&LAB_1008ada7);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039cc78);
      }
      local_14 = 3;
      FUN_1008adb2();
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    else {
      FUN_1008ac52(param_2,&local_60);
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    *unaff_FS_OFFSET = local_1c;
    return param_2;
  }
  local_3c[0] = *(int *)(param_1 + 0x24) + -4;
  local_70 = 0x121;
  local_6c = 0x5f;
  local_68 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_64 = "tString __thiscall FileCoder::ReadString(void)";
  FUN_10072232(&local_60,&local_70);
  local_14 = 0;
  local_48 = "{}Zero length string encountered at offset {:#010x}.";
  uStack_44 = 0x34;
  FUN_1008abf0(local_3c + 1,0x341033eccc,&local_60,local_3c);
  local_14 = 1;
  FUN_1006f6d8(local_3c + 1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_94,&DAT_10367ca8);
}

