/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800358f8 */

void FUN_1800358f8(longlong param_1,char param_2,undefined4 *param_3)

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
        goto code_r0x0001800359e6;
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
code_r0x0001800359e6:
  switch(local_31) {
  case '!':
    FUN_18003aa53(&local_28,param_3);
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
      FUN_18003aa53(&local_48,param_3);
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
    FUN_18003a9db(&local_28,param_3);
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
    FUN_18003adab(&local_28,param_3);
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
    FUN_18003a873(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'A':
    FUN_180039dad(&local_28,param_3);
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
    FUN_180039e25(&local_28,param_3);
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
    FUN_180039f15(&local_28,param_3);
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
    *local_40 = spdlog::details::D_formatter<spdlog::details::scoped_padder>::vftable;
    local_28 = (undefined8 *)0x0;
    local_30 = local_40;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'E':
    FUN_18003a43d(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'F':
    FUN_18003a3c5(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'H':
    FUN_18003a0f5(&local_28,param_3);
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
    FUN_18003a16d(&local_28,param_3);
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
    FUN_180039bcd(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'M':
    FUN_18003a1e5(&local_28,param_3);
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
    FUN_18003ad2a(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'P':
    FUN_18003a70b(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'R':
    FUN_18003a5a5(&local_28,param_3);
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
    FUN_18003a25d(&local_28,param_3);
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
    *local_40 = spdlog::details::T_formatter<spdlog::details::scoped_padder>::vftable;
    local_28 = (undefined8 *)0x0;
    local_30 = local_40;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'Y':
    FUN_180039f8d(&local_28,param_3);
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
    FUN_180039d35(&local_28,param_3);
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
    *local_40 = spdlog::details::b_formatter<spdlog::details::scoped_padder>::vftable;
    local_28 = (undefined8 *)0x0;
    local_30 = local_40;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
    break;
  case 'c':
    FUN_180039e9d(&local_28,param_3);
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
    FUN_18003a07d(&local_28,param_3);
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
    FUN_18003a2d5(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'f':
    FUN_18003a34d(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'g':
    FUN_18003a963(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'i':
    FUN_18003ac28(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'l':
    FUN_180039b55(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'm':
    FUN_18003a005(&local_28,param_3);
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
    FUN_180039a81(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'o':
    FUN_18003aca9(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'p':
    FUN_18003a4b5(&local_28,param_3);
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
    FUN_18003a52d(&local_28,param_3);
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
    FUN_18003a8eb(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 't':
    FUN_180039c45(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'u':
    FUN_18003aba7(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_18003ab4c(&local_28);
    break;
  case 'v':
    FUN_180039cbd(&local_28,param_3);
    local_30 = local_28;
    local_28 = (undefined8 *)0x0;
    FUN_180023884(param_1 + 0x80,&local_30);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
    FUN_180039afa(&local_28);
    break;
  case 'z':
    FUN_18003a61d(&local_28,param_3,param_1 + 0x48);
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

