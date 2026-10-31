/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10046980 */

undefined4 __thiscall FUN_10046980(undefined1 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 local_14 [4];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_14;
  switch(*param_1) {
  case 0:
    FUN_10006af4(param_2,*(undefined4 *)*param_3,local_14[0],param_3[1],((undefined4 *)*param_3)[3])
    ;
    break;
  case 1:
    FUN_10046be8(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1],
                 ((undefined4 *)*param_3)[3]);
    break;
  case 2:
    FUN_100487e3(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1],
                 ((undefined4 *)*param_3)[3]);
    break;
  case 3:
    FUN_10048c00(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),param_3[1],((undefined4 *)*param_3)[3]);
    break;
  case 4:
    FUN_1004933c(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),param_3[1],((undefined4 *)*param_3)[3]);
    break;
  case 5:
    puVar1 = (undefined4 *)param_3[1];
    FUN_10049770(param_2,*(undefined4 *)*param_3,param_1[8],*puVar1,puVar1[1],puVar1[2],puVar1[3],
                 puVar1[4],((undefined4 *)*param_3)[3]);
    break;
  case 6:
    puVar1 = (undefined4 *)param_3[1];
    FUN_10047026(param_2,*(undefined4 *)*param_3,*(undefined2 *)(param_1 + 8),*puVar1,puVar1[1],
                 puVar1[2],puVar1[3],puVar1[4],((undefined4 *)*param_3)[3]);
    break;
  case 7:
    FUN_10049de0(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1],
                 ((undefined4 *)*param_3)[3]);
    break;
  case 8:
    FUN_1004a8d8(param_2,*(undefined4 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1],
                 ((undefined4 *)*param_3)[3]);
    break;
  case 9:
    FUN_1004a8d8(param_2,*(undefined4 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1],
                 ((undefined4 *)*param_3)[3]);
    break;
  case 10:
    FUN_1004b0b4(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1],
                 ((undefined4 *)*param_3)[3]);
    break;
  case 0xb:
    FUN_10049dab(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1],
                 ((undefined4 *)*param_3)[3]);
    break;
  case 0xc:
    FUN_1004782f(param_2,*(undefined4 *)*param_3,*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc),param_3[1],((undefined4 *)*param_3)[3]);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

