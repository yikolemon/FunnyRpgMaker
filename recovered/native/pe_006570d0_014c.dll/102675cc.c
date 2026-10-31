/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102675cc */

/* WARNING: Removing unreachable block (ram,0x102677ad) */
/* WARNING: Removing unreachable block (ram,0x102677c5) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_102675cc(int param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  uint in_stack_00000028;
  byte in_stack_0000002c;
  uint uVar10;
  char local_8;
  
  uVar7 = in_stack_00000028;
  cVar5 = FUN_1026703a();
  iVar4 = in_stack_0000001c;
  iVar3 = in_stack_00000018;
  if (cVar5 == '\0') goto LAB_10267817;
  if ((uVar7 != 0) && (((int)uVar7 < 2 || (0x24 < (int)uVar7)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_1);
    if (in_stack_00000020 == (undefined1 *)0x0) {
      return 0;
    }
    if (in_stack_00000018 != 0 || in_stack_0000001c != 0) {
      return 0;
    }
    *in_stack_00000020 = 0;
    return 0;
  }
  local_8 = FUN_1026705b();
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_1025ec50();
  }
  while (iVar6 = FUN_1026379d(local_8,8,param_1 + 0xc), iVar6 != 0) {
    local_8 = FUN_1026705b();
  }
  bVar1 = in_stack_0000002c | 2;
  if ((local_8 == '-') || (bVar1 = in_stack_0000002c, local_8 == '+')) {
    local_8 = FUN_1026705b();
  }
  if ((uVar7 == 0) || (uVar10 = uVar7, uVar7 == 0x10)) {
    if ((byte)(local_8 - 0x30U) < 10) {
      iVar6 = local_8 + -0x30;
LAB_102676e9:
      if (iVar6 != 0) goto LAB_10267725;
      cVar5 = FUN_1026705b();
      if ((cVar5 == 'x') || (cVar5 == 'X')) {
        local_8 = FUN_1026705b();
        uVar10 = 0x10;
        if (uVar7 != 0) {
          uVar10 = uVar7;
        }
        goto LAB_1026772f;
      }
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *)
            &stack0x00000008,cVar5);
      uVar10 = 8;
    }
    else {
      if ((byte)(local_8 + 0x9fU) < 0x1a) {
        iVar6 = local_8 + -0x57;
        goto LAB_102676e9;
      }
      if ((byte)(local_8 + 0xbfU) < 0x1a) {
        iVar6 = local_8 + -0x37;
        goto LAB_102676e9;
      }
LAB_10267725:
      uVar10 = 10;
    }
    if (uVar7 != 0) {
      uVar10 = uVar7;
    }
  }
LAB_1026772f:
  uVar8 = __aulldiv(0xffffffff,0xffffffff,uVar10,(int)uVar10 >> 0x1f);
  uVar2 = 0;
  while( true ) {
    if ((byte)(local_8 - 0x30U) < 10) {
      uVar7 = (int)local_8 - 0x30;
    }
    else if ((byte)(local_8 + 0x9fU) < 0x1a) {
      uVar7 = (int)local_8 - 0x57;
    }
    else if ((byte)(local_8 + 0xbfU) < 0x1a) {
      uVar7 = (int)local_8 - 0x37;
    }
    else {
      uVar7 = 0xffffffff;
    }
    if (uVar10 <= uVar7) break;
    uVar9 = __allmul(uVar10,(int)uVar10 >> 0x1f,uVar2);
    bVar1 = bVar1 | (uVar9 + uVar7 < uVar9 || uVar8 < uVar2) << 2 | 8U;
    local_8 = FUN_1026705b();
    uVar2 = uVar9 + uVar7;
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *)
        &stack0x00000008,local_8);
  if ((bVar1 & 8) != 0) {
    cVar5 = FUN_10267b2c(bVar1,uVar2);
    if (cVar5 == '\0') {
      if ((bVar1 & 2) != 0) {
        uVar2 = CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0x22;
      if ((bVar1 & 1) != 0) {
        if ((bVar1 & 2) == 0) {
          if ((in_stack_00000020 != (undefined1 *)0x0) &&
             (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
            *in_stack_00000020 = 0;
          }
          return 0x7fffffffffffffff;
        }
        if ((in_stack_00000020 != (undefined1 *)0x0) &&
           (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
          *in_stack_00000020 = 0;
        }
        return 0x8000000000000000;
      }
      uVar2 = 0xffffffffffffffff;
    }
    if (in_stack_00000020 != (undefined1 *)0x0) {
      if (in_stack_00000018 == 0 && in_stack_0000001c == 0) {
        *in_stack_00000020 = 0;
        return uVar2;
      }
      return uVar2;
    }
    return uVar2;
  }
  restore_state(iVar3,iVar4);
LAB_10267817:
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return 0;
}

