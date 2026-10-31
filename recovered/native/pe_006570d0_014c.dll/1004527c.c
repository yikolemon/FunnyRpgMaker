/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004527c */

undefined4 * __thiscall FUN_1004527c(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  switch(*param_1) {
  case 0:
    FUN_10006af4(param_2,*param_3);
    break;
  case 1:
    FUN_10045450(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 2:
    FUN_10045578(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    FUN_10045634(param_2,*param_3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    break;
  case 4:
    FUN_100457b2(param_2,*param_3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    break;
  case 5:
    FUN_10045905(param_2,*param_3,param_1[8]);
    break;
  case 6:
    FUN_1004598d(param_2,*param_3,*(undefined2 *)(param_1 + 8));
    break;
  case 7:
    FUN_100459c7(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 8:
    FUN_10045a83(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 9:
    FUN_10045a83(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 10:
    FUN_10045b40(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 0xb:
    FUN_1004592e(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 0xc:
    FUN_10045c16(param_2,*param_3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xd:
    local_28 = *(code **)(param_1 + 0xc);
    local_24 = *param_3;
    local_20 = param_3[1];
    local_1c = param_3[2];
    local_18 = param_3[3];
    (*local_28)(param_3[4],&local_24,*(undefined4 *)(param_1 + 8));
    *param_2 = local_24;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

