/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002d480 */

void FUN_14002d480(longlong param_1,char param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *local_48;
  undefined8 *local_40;
  char local_31;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_31 = param_2;
  uVar4 = FUN_14002a847();
  lVar5 = (uVar4 & *(ulonglong *)(param_1 + 200)) * 0x10;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 8 + lVar5);
  if (lVar6 != *(longlong *)(param_1 + 0xa0)) {
    if (local_31 != *(char *)(lVar6 + 0x10)) {
      do {
        if (lVar6 == *(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar5))
        goto code_r0x00014002d56e;
        lVar6 = *(longlong *)(lVar6 + 8);
      } while (local_31 != *(char *)(lVar6 + 0x10));
    }
    if (lVar6 != *(longlong *)(param_1 + 0xa0)) {
      (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x10))(*(longlong **)(lVar6 + 0x18),&local_30);
      local_28 = local_30;
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *(undefined4 *)(local_30 + 1) = *param_3;
      *(undefined4 *)((longlong)local_30 + 0xc) = uVar1;
      *(undefined4 *)(local_30 + 2) = uVar2;
      *(undefined4 *)((longlong)local_30 + 0x14) = uVar3;
      local_30 = (undefined8 *)0x0;
      FUN_140018cfc(param_1 + 0x80,&local_28);
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
      if (local_30 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*local_30)(local_30,1);
      return;
    }
  }
code_r0x00014002d56e:
  switch(local_31) {
  case '!':
    FUN_140034ac3(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  default:
    FUN_14002f483(&local_30);
    if (*(char *)(param_3 + 3) == '\0') {
      FUN_140004108(local_30 + 3,0x25);
      FUN_140004108(local_30 + 3,local_31);
      local_28 = local_30;
      local_30 = (undefined8 *)0x0;
      FUN_140018cfc(param_1 + 0x80,&local_28);
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    else {
      *(undefined1 *)(param_3 + 3) = 0;
      FUN_140034ac3(&local_48,param_3);
      local_28 = local_48;
      local_48 = (undefined8 *)0x0;
      FUN_140018cfc(param_1 + 0x80,&local_28);
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
      FUN_14002f67e(&local_48);
      FUN_140004108(local_30 + 3,local_31);
      local_28 = local_30;
      local_30 = (undefined8 *)0x0;
      FUN_140018cfc(param_1 + 0x80,&local_28);
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    FUN_14002f4fe(&local_30);
    break;
  case '#':
    FUN_140034a4b(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case '$':
    FUN_14003037f(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case '%':
    local_48 = (undefined8 *)CONCAT71(local_48._1_7_,0x25);
    FUN_14003064f(&local_28);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_1400306d0(&local_28);
    break;
  case '&':
    FUN_140034d3f(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
    break;
  case '+':
    FUN_14002f58d(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14001868e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case '@':
    FUN_1400348e3(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'A':
    FUN_140033f68(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'B':
    FUN_140033fe0(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'C':
    FUN_1400340d0(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'D':
  case 'x':
    local_40 = (undefined8 *)FUN_1401887b0(0x18);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(local_40 + 1) = *param_3;
    *(undefined4 *)((longlong)local_40 + 0xc) = uVar1;
    *(undefined4 *)(local_40 + 2) = uVar2;
    *(undefined4 *)((longlong)local_40 + 0x14) = uVar3;
    *local_40 = spdlog::details::D_formatter<spdlog::details::null_scoped_padder>::vftable;
    local_28 = (undefined8 *)0x0;
    local_30 = local_40;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'E':
    FUN_1400345f8(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'F':
    FUN_140034580(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'H':
    FUN_1400342b0(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'I':
    FUN_140034328(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'L':
    FUN_140033d88(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'M':
    FUN_1400343a0(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'O':
    FUN_140034cbe(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_1400306d0(&local_28);
    break;
  case 'P':
    FUN_14003486b(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'R':
    FUN_140034760(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'S':
    FUN_140034418(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'T':
  case 'X':
    local_40 = (undefined8 *)FUN_1401887b0(0x18);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(local_40 + 1) = *param_3;
    *(undefined4 *)((longlong)local_40 + 0xc) = uVar1;
    *(undefined4 *)(local_40 + 2) = uVar2;
    *(undefined4 *)((longlong)local_40 + 0x14) = uVar3;
    *local_40 = spdlog::details::T_formatter<spdlog::details::null_scoped_padder>::vftable;
    local_28 = (undefined8 *)0x0;
    local_30 = local_40;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'Y':
    FUN_140034148(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case '^':
    FUN_140030307(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'a':
    FUN_140033ef0(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'b':
  case 'h':
    local_40 = (undefined8 *)FUN_1401887b0(0x18);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(local_40 + 1) = *param_3;
    *(undefined4 *)((longlong)local_40 + 0xc) = uVar1;
    *(undefined4 *)(local_40 + 2) = uVar2;
    *(undefined4 *)((longlong)local_40 + 0x14) = uVar3;
    *local_40 = spdlog::details::b_formatter<spdlog::details::null_scoped_padder>::vftable;
    local_28 = (undefined8 *)0x0;
    local_30 = local_40;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'c':
    FUN_140034058(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'd':
    FUN_140034238(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'e':
    FUN_140034490(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'f':
    FUN_140034508(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'g':
    FUN_1400349d3(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'i':
    FUN_140034bbc(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_1400306d0(&local_28);
    break;
  case 'l':
    FUN_140033d10(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'm':
    FUN_1400341c0(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'n':
    FUN_140033c98(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'o':
    FUN_140034c3d(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_1400306d0(&local_28);
    break;
  case 'p':
    FUN_140034670(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'r':
    FUN_1400346e8(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 's':
    FUN_14003495b(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 't':
    FUN_140033e00(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'u':
    FUN_140034b3b(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_1400306d0(&local_28);
    break;
  case 'v':
    FUN_140033e78(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_14002f67e(&local_28);
    break;
  case 'z':
    FUN_1400347d8(&local_28,param_3,param_1 + 0x48);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_140018cfc(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_140030234(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}

