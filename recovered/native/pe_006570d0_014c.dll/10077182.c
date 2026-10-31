/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10077182 */

void __thiscall FUN_10077182(int param_1,char *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_dc [36];
  undefined1 local_b8 [36];
  undefined4 local_94;
  undefined4 local_90;
  char *local_8c;
  char *local_88;
  undefined1 local_84 [24];
  uint local_6c [6];
  char *local_54;
  undefined4 uStack_50;
  char *local_4c;
  undefined4 uStack_48;
  int local_44;
  int local_40;
  uint local_3c [4];
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_dc;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2c00;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = *(int *)(param_1 + 0x24);
  local_44 = iVar1;
  local_40 = FUN_10077b66();
  local_2c = param_1 + 0x10;
  local_24 = local_40;
  local_28 = FUN_10077b66();
  local_3c[0] = *(int *)(param_1 + 0x28) - iVar1;
  if (local_3c[0] < local_28) {
    local_94 = 0xab;
    local_90 = 0x6e;
    local_8c = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
    ;
    local_88 = "void __thiscall FileCoder::Unpack(const bool &)";
    FUN_10072232(local_84,&local_94);
    local_14 = 0;
    local_54 = "{}LZ4 decompression failed. Compressed size: {}, Remaining size: {}";
    uStack_50 = 0x43;
    FUN_1007d8ca(local_6c,0x431032f9b8,local_84,&local_28,local_3c);
    local_14 = 1;
    FUN_1006f6d8(local_6c);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_dc,&DAT_10367ca8);
  }
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = iVar1;
  FUN_1007d974(local_24 + iVar1,local_6c);
  local_14 = 2;
  local_24 = param_1;
  iVar1 = FUN_100f6f12();
  if (-1 < iVar1) {
    local_6c[0] = 0;
    FUN_100770a2(local_6c);
    FUN_1025b2d0(local_3c[0],*(int *)(local_24 + 0x20) + *(int *)(local_24 + 0x24),local_3c[3]);
    FUN_10076c34(local_3c);
    if (*param_2 == '\x01') {
      FUN_100770a2(&local_44);
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  local_94 = 0xb3;
  local_90 = 0x71;
  local_8c = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_88 = "void __thiscall FileCoder::Unpack(const bool &)";
  FUN_10072232(local_84,&local_94);
  local_14 = 3;
  local_4c = "{}LZ4 decompression failed. Compressed size: {}, Decompressed size: {}";
  uStack_48 = 0x46;
  FUN_1007d8ca(local_6c,0x461032fa15,local_84,&local_28,&local_40);
  local_14 = 4;
  FUN_1006f6d8(local_6c);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_b8,&DAT_10367ca8);
}

