/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10034a48 */

void __thiscall FUN_10034a48(int param_1,char param_2,undefined8 param_3,uint param_4)

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
  local_18 = &LAB_10059b60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar1 = FUN_10033e6b(&param_2);
  uVar1 = uVar1 & *(uint *)(param_1 + 0x8c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 4 + uVar1 * 8);
  local_2c = param_1;
  if (iVar2 != *(int *)(param_1 + 0x78)) {
    if (param_2 != *(char *)(iVar2 + 8)) {
      do {
        if (iVar2 == *(int *)(*(int *)(param_1 + 0x80) + uVar1 * 8)) goto code_r0x10034b54;
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
code_r0x10034b54:
  local_14 = 0xffffffff;
  switch(param_2) {
  case '!':
    FUN_10039b2a(&local_24,&param_3);
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
      FUN_10039b2a(&local_34,&param_3);
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
    FUN_10039a96(&local_24,&param_3);
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
    FUN_10039fdb(&local_24,&param_3);
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
    FUN_100398da(&local_24,&param_3);
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
    FUN_10038b8a(&local_24,&param_3);
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
    FUN_10038c1e(&local_24,&param_3);
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
    FUN_10038d46(&local_24,&param_3);
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
    *local_30 = spdlog::details::D_formatter<spdlog::details::scoped_padder>::vftable;
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
    FUN_100393a2(&local_24,&param_3);
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
    FUN_1003930e(&local_24,&param_3);
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
    FUN_10038f96(&local_24,&param_3);
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
    FUN_1003902a(&local_24,&param_3);
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
    FUN_1003893a(&local_24,&param_3);
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
    FUN_100390be(&local_24,&param_3);
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
    FUN_10039f3c(&local_24,&param_3);
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
    FUN_1003971e(&local_24,&param_3);
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
    FUN_1003955e(&local_24,&param_3);
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
    FUN_10039152(&local_24,&param_3);
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
    *local_30 = spdlog::details::T_formatter<spdlog::details::scoped_padder>::vftable;
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
    FUN_10038dda(&local_24,&param_3);
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
    FUN_10038af6(&local_24,&param_3);
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
    *local_30 = spdlog::details::b_formatter<spdlog::details::scoped_padder>::vftable;
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
    FUN_10038cb2(&local_24,&param_3);
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
    FUN_10038f02(&local_24,&param_3);
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
    FUN_100391e6(&local_24,&param_3);
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
    FUN_1003927a(&local_24,&param_3);
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
    FUN_10039a02(&local_24,&param_3);
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
    FUN_10039dfe(&local_24,&param_3);
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
    FUN_100388a6(&local_24,&param_3);
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
    FUN_10038e6e(&local_24,&param_3);
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
    FUN_1003878e(&local_24,&param_3);
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
    FUN_10039e9d(&local_24,&param_3);
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
    FUN_10039436(&local_24,&param_3);
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
    FUN_100394ca(&local_24,&param_3);
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
    FUN_1003996e(&local_24,&param_3);
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
    FUN_100389ce(&local_24,&param_3);
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
    FUN_10039cda(&local_24,&param_3);
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
    FUN_10038a62(&local_24,&param_3);
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
    FUN_100395f2(&local_24,&param_3,param_1 + 0x34);
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

