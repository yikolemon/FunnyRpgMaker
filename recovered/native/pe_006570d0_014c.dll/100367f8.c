/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100367f8 */

void __thiscall FUN_100367f8(int param_1,char param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059b70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar1 = FUN_10033e6b(&param_2);
  uVar1 = uVar1 & *(uint *)(param_1 + 0x8c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 4 + uVar1 * 8);
  local_2c = param_1;
  if (iVar2 != *(int *)(param_1 + 0x78)) {
    if (param_2 != *(char *)(iVar2 + 8)) {
      do {
        if (iVar2 == *(int *)(*(int *)(param_1 + 0x80) + uVar1 * 8)) goto code_r0x10036904;
        iVar2 = *(int *)(iVar2 + 4);
      } while (param_2 != *(char *)(iVar2 + 8));
    }
    if (iVar2 != *(int *)(param_1 + 0x78)) {
      local_14 = 0xffffffff;
      (**(code **)(**(int **)(iVar2 + 0xc) + 8))(&local_28);
      local_24 = local_28;
      local_28[3] = param_4;
      *(undefined8 *)(local_28 + 1) = param_3;
      local_28 = (undefined4 *)0x0;
      local_14 = 1;
      FUN_1002349a(&local_24);
      local_14 = 0xffffffff;
      if (local_24 != (undefined4 *)0x0) {
        (**(code **)*local_24)(1);
      }
      if (local_28 == (undefined4 *)0x0) {
        ExceptionList = local_1c;
        return;
      }
      (**(code **)*local_28)(1);
      ExceptionList = local_1c;
      return;
    }
  }
code_r0x10036904:
  local_14 = 0xffffffff;
  switch(param_2) {
  case '!':
    FUN_1003e8a9(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x4e;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  default:
    FUN_100385a8(&local_28);
    local_14 = 0x5b;
    if ((char)param_4 == '\0') {
      FUN_10003d9a(0x25);
      FUN_10003d9a((int)param_2);
      local_24 = local_28;
      local_28 = (undefined4 *)0x0;
      local_14 = 0x5f;
      FUN_1002349a(&local_24);
      local_14 = 0xffffffff;
      if (local_24 != (undefined4 *)0x0) {
        (**(code **)*local_24)(1);
      }
    }
    else {
      param_4 = param_4 & 0xffffff00;
      FUN_1003e8a9(&local_34,&param_3);
      local_24 = local_34;
      local_34 = (undefined4 *)0x0;
      local_14 = 0x5d;
      local_2c = local_2c + 0x68;
      FUN_1002349a(&local_24);
      local_14 = 0xffffffff;
      if (local_24 != (undefined4 *)0x0) {
        (**(code **)*local_24)(1);
      }
      FUN_10038822();
      local_14 = 0x5b;
      FUN_10003d9a((int)param_2);
      local_24 = local_28;
      local_28 = (undefined4 *)0x0;
      local_14 = 0x5e;
      FUN_1002349a(&local_24);
      local_14 = 0xffffffff;
      if (local_24 != (undefined4 *)0x0) {
        (**(code **)*local_24)(1);
      }
    }
    FUN_1003863a();
    break;
  case '#':
    FUN_1003e815(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x4c;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case '$':
    FUN_10039846(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x44;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case '%':
    local_34 = (undefined4 *)CONCAT31(local_34._1_3_,0x25);
    FUN_10039bbe(&local_24,&local_34);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x50;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10039c56();
    break;
  case '&':
    FUN_1003ebb9(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x5a;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    if (local_24 != (undefined4 *)0x0) {
      (**(code **)*local_24)(1);
    }
    break;
  case '+':
    FUN_100386ea(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 3;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10022de8();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case '@':
    FUN_1003e659(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x46;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'A':
    FUN_1003dab6(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x11;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    if (local_24 != (undefined4 *)0x0) {
      (**(code **)*local_24)(1);
    }
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'B':
    FUN_1003db4a(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x16;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'C':
    FUN_1003dc72(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x1a;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'D':
  case 'x':
    local_30 = (undefined4 *)FUN_10228350(0x10);
    local_30[3] = param_4;
    *(undefined8 *)(local_30 + 1) = param_3;
    *local_30 = spdlog::details::D_formatter<spdlog::details::null_scoped_padder>::vftable;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x1f;
    local_28 = local_30;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'E':
    FUN_1003e2ce(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x33;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'F':
    FUN_1003e23a(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x31;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'H':
    FUN_1003dec2(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x25;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'I':
    FUN_1003df56(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x27;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'L':
    FUN_1003d866(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 9;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'M':
    FUN_1003dfea(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x29;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'O':
    FUN_1003eb1a(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x58;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10039d7a();
    break;
  case 'P':
    FUN_1003e5c5(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x40;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'R':
    FUN_1003e48a(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x39;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'S':
    FUN_1003e07e(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x2b;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'T':
  case 'X':
    local_30 = (undefined4 *)FUN_10228350(0x10);
    local_30[3] = param_4;
    *(undefined8 *)(local_30 + 1) = param_3;
    *local_30 = spdlog::details::T_formatter<spdlog::details::null_scoped_padder>::vftable;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x3c;
    local_28 = local_30;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'Y':
    FUN_1003dd06(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x1c;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case '^':
    FUN_100397b2(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x42;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'a':
    FUN_1003da22(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0xf;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'b':
  case 'h':
    local_30 = (undefined4 *)FUN_10228350(0x10);
    local_30[3] = param_4;
    *(undefined8 *)(local_30 + 1) = param_3;
    *local_30 = spdlog::details::b_formatter<spdlog::details::null_scoped_padder>::vftable;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x14;
    local_28 = local_30;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'c':
    FUN_1003dbde(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x18;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'd':
    FUN_1003de2e(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x23;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'e':
    FUN_1003e112(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x2d;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'f':
    FUN_1003e1a6(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x2f;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'g':
    FUN_1003e781(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x4a;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'i':
    FUN_1003e9dc(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x54;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10039d7a();
    break;
  case 'l':
    FUN_1003d7d2(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 7;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'm':
    FUN_1003dd9a(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x21;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'n':
    FUN_1003d73e(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 5;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'o':
    FUN_1003ea7b(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x56;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10039d7a();
    break;
  case 'p':
    FUN_1003e362(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x35;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 'r':
    FUN_1003e3f6(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x37;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    *(undefined1 *)(local_2c + 0x38) = 1;
    break;
  case 's':
    FUN_1003e6ed(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x48;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 't':
    FUN_1003d8fa(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0xb;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'u':
    FUN_1003e93d(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x52;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10039d7a();
    break;
  case 'v':
    FUN_1003d98e(&local_24,&param_3);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0xd;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_10038822();
    break;
  case 'z':
    FUN_1003e51e(&local_24,&param_3,param_1 + 0x34);
    local_28 = local_24;
    local_24 = (undefined4 *)0x0;
    local_14 = 0x3e;
    FUN_1002349a(&local_28);
    local_14 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      (**(code **)*local_28)(1);
    }
    FUN_1003969a();
    *(undefined1 *)(local_2c + 0x38) = 1;
  }
  ExceptionList = local_1c;
  return;
}

