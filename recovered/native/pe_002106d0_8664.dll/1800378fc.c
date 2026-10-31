/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800378fc */

void FUN_1800378fc(longlong param_1,char param_2,undefined4 *param_3)

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
  uVar4 = FUN_180034cc3();
  lVar5 = (uVar4 & *(ulonglong *)(param_1 + 200)) * 0x10;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 8 + lVar5);
  if (lVar6 != *(longlong *)(param_1 + 0xa0)) {
    if (local_31 != *(char *)(lVar6 + 0x10)) {
      do {
        if (lVar6 == *(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar5))
        goto code_r0x0001800379ea;
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
      FUN_180023884(param_1 + 0x80,&local_28);
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
code_r0x0001800379ea:
  switch(local_31) {
  case '!':
    FUN_18003ee6f(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  default:
    FUN_1800398ff(&local_30);
    if (*(char *)(param_3 + 3) == '\0') {
      FUN_180003bf2(local_30 + 3,0x25);
      FUN_180003bf2(local_30 + 3,local_31);
      local_28 = local_30;
      local_30 = (undefined8 *)0x0;
      FUN_180023884(param_1 + 0x80,&local_28);
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    else {
      *(undefined1 *)(param_3 + 3) = 0;
      FUN_18003ee6f(&local_48,param_3);
      local_28 = local_48;
      local_48 = (undefined8 *)0x0;
      FUN_180023884(param_1 + 0x80,&local_28);
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
      FUN_180039afa(&local_48);
      FUN_180003bf2(local_30 + 3,local_31);
      local_28 = local_30;
      local_30 = (undefined8 *)0x0;
      FUN_180023884(param_1 + 0x80,&local_28);
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    FUN_18003997a(&local_30);
    break;
  case '#':
    FUN_18003edf7(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case '$':
    FUN_18003a7fb(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case '%':
    local_48 = (undefined8 *)CONCAT71(local_48._1_7_,0x25);
    FUN_18003aacb(&local_28);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case '&':
    FUN_18003f0eb(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
    break;
  case '+':
    FUN_180039a09(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180023216(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case '@':
    FUN_18003ec8f(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'A':
    FUN_18003e314(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'B':
    FUN_18003e38c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'C':
    FUN_18003e47c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'D':
  case 'x':
    local_40 = (undefined8 *)FUN_180239630(0x18);
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
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'E':
    FUN_18003e9a4(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'F':
    FUN_18003e92c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'H':
    FUN_18003e65c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'I':
    FUN_18003e6d4(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'L':
    FUN_18003e134(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'M':
    FUN_18003e74c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'O':
    FUN_18003f06a(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'P':
    FUN_18003ec17(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'R':
    FUN_18003eb0c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'S':
    FUN_18003e7c4(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'T':
  case 'X':
    local_40 = (undefined8 *)FUN_180239630(0x18);
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
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'Y':
    FUN_18003e4f4(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case '^':
    FUN_18003a783(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'a':
    FUN_18003e29c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'b':
  case 'h':
    local_40 = (undefined8 *)FUN_180239630(0x18);
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
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'c':
    FUN_18003e404(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'd':
    FUN_18003e5e4(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'e':
    FUN_18003e83c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'f':
    FUN_18003e8b4(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'g':
    FUN_18003ed7f(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'i':
    FUN_18003ef68(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'l':
    FUN_18003e0bc(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'm':
    FUN_18003e56c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'n':
    FUN_18003e044(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'o':
    FUN_18003efe9(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'p':
    FUN_18003ea1c(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'r':
    FUN_18003ea94(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 's':
    FUN_18003ed07(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 't':
    FUN_18003e1ac(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'u':
    FUN_18003eee7(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'v':
    FUN_18003e224(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'z':
    FUN_18003eb84(&local_28,param_3,param_1 + 0x48);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003a6b0(&local_28);
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}

