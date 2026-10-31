/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ab4d6 */

void __fastcall FUN_100ab4d6(int param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 local_8c [36];
  undefined4 local_68;
  undefined4 local_64;
  char *local_60;
  char *local_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  wchar_t *local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_8c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c44e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(char *)(param_1 + 0x200) != '\0') {
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  local_68 = 0x9a;
  local_64 = 0x44;
  local_60 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG/WolfRPG.hpp"
  ;
  local_5c = "void __thiscall WolfRPG::checkValid(void) const";
  FUN_10080602();
  local_14 = 0;
  local_28 = L"{}Invalid WolfRPG object";
  uStack_24 = 0x18;
  FUN_1007dd49(local_40,0x1810356532,local_58);
  local_14 = 1;
  FUN_1008069c(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

