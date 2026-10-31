/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049e260 */

void __cdecl FUN_0049e260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  undefined4 local_24;
  char *local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  if (DAT_00521f20 == 0) {
    pcVar1 = FUN_00488d50;
  }
  else {
    pcVar1 = DecodePointer(DAT_00521f24);
  }
  if (1000 < param_4) {
    if (param_4 != 0x3e9) {
      return;
    }
LAB_0049e468:
    *param_3 = *param_1;
    return;
  }
  if (param_4 == 1000) goto LAB_0049e468;
  switch(param_4) {
  case 2:
    local_24 = 2;
    local_20 = "log";
    goto LAB_0049e38a;
  case 3:
    local_20 = "log";
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3c:
    return;
  case 8:
    local_24 = 2;
    local_20 = "log10";
    goto LAB_0049e38a;
  case 9:
    local_20 = "log10";
    break;
  case 0xe:
    local_24 = 3;
    local_20 = "exp";
    goto LAB_0049e38a;
  case 0xf:
    local_20 = "exp";
    goto LAB_0049e331;
  case 0x18:
    local_24 = 3;
    goto LAB_0049e383;
  case 0x19:
    local_20 = "pow";
LAB_0049e331:
    local_24 = 4;
    local_1c = *param_1;
    local_14 = *param_2;
    local_c = *param_3;
    (*(code *)PTR_guard_check_icall_00508898)(&local_24);
    (*pcVar1)();
    *param_3 = local_c;
    return;
  case 0x1a:
    *param_3 = DAT_004a88f8;
    return;
  case 0x1b:
    local_24 = 2;
LAB_0049e383:
    local_20 = "pow";
LAB_0049e38a:
    local_1c = *param_1;
    local_14 = *param_2;
    local_c = *param_3;
    (*(code *)PTR_guard_check_icall_00508898)(&local_24);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      p_Var3 = FUN_0048f66d();
      *(undefined4 *)p_Var3 = 0x22;
      *param_3 = local_c;
      return;
    }
    goto LAB_0049e44e;
  case 0x1c:
    local_20 = "pow";
    break;
  case 0x31:
    local_20 = "sqrt";
    break;
  case 0x3a:
    local_20 = "acos";
    break;
  case 0x3d:
    local_20 = "asin";
    break;
  default:
    return;
  }
  local_24 = 1;
  local_1c = *param_1;
  local_14 = *param_2;
  local_c = *param_3;
  (*(code *)PTR_guard_check_icall_00508898)(&local_24);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    p_Var3 = FUN_0048f66d();
    *(undefined4 *)p_Var3 = 0x21;
  }
LAB_0049e44e:
  *param_3 = local_c;
  return;
}

