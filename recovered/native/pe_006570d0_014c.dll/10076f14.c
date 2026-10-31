/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10076f14 */

void __fastcall FUN_10076f14(int param_1)

{
  char cVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_a4 [36];
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  char *local_74;
  undefined1 local_70 [24];
  undefined4 local_58 [6];
  undefined1 local_40 [12];
  char *local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_a4;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2be0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1 + 0x10;
  local_58[0] = 0;
  FUN_100770a2(local_58);
  local_58[0] = 0xffffffff;
  FUN_10076b48(local_40,local_58);
  local_14 = 0;
  local_28 = (undefined4 *)(param_1 + 0xc);
  cVar1 = FUN_1007939d(local_40,local_28);
  if (cVar1 != '\0') {
    DAT_1039cbc8 = 1;
    FUN_10076c34(local_40);
    DAT_10388110 = 0;
    local_14 = 0xffffffff;
    FUN_10004eae();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  local_2c = *local_28;
  local_80 = 0x28d;
  local_7c = 0x5c;
  local_78 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_74 = "void __thiscall FileCoder::decryptV3_5(void)";
  FUN_10072232(local_70,&local_80);
  local_14 = 1;
  local_34 = "{}Failed to decrypt ProV3.5 data for file type {}";
  uStack_30 = 0x31;
  FUN_10079bbc(local_58,0x311032f810,local_70,&local_2c);
  local_14 = 2;
  FUN_1006f6d8(local_58);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_a4,&DAT_10367ca8);
}

