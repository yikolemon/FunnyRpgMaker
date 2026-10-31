/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000bc02 */

undefined8 * FUN_14000bc02(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  switch(*param_1) {
  case 0:
    FUN_14000bdb2(param_2,*param_3);
    break;
  case 1:
    FUN_14000bdb9(param_2,(undefined8 *)*param_3,*(uint *)(param_1 + 8));
    break;
  case 2:
    FUN_14000c15f(param_2,(undefined8 *)*param_3,(ulonglong)*(uint *)(param_1 + 8));
    break;
  case 3:
    FUN_14000c42b(param_2,(undefined8 *)*param_3,*(ulonglong *)(param_1 + 8));
    break;
  case 4:
    FUN_14000c76d(param_2,(undefined8 *)*param_3,*(ulonglong *)(param_1 + 8));
    break;
  case 5:
    FUN_14000ca70(param_2,(undefined8 *)*param_3,param_1[8]);
    break;
  case 6:
    FUN_14000cb02(param_2,(undefined8 *)*param_3,*(undefined2 *)(param_1 + 8));
    break;
  case 7:
    FUN_14000cb4a(param_2,(undefined8 *)*param_3,*(float *)(param_1 + 8));
    break;
  case 8:
    FUN_14000db12(param_2,(undefined8 *)*param_3,*(double *)(param_1 + 8));
    break;
  case 9:
    FUN_14000db12(param_2,(undefined8 *)*param_3,*(double *)(param_1 + 8));
    break;
  case 10:
    FUN_14000f266(param_2,(undefined8 *)*param_3,*(ulonglong *)(param_1 + 8));
    break;
  case 0xb:
    FUN_14000ca8d(param_2,(undefined8 *)*param_3,*(short **)(param_1 + 8));
    break;
  case 0xc:
    local_38 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined8 *)(param_1 + 0x10);
    FUN_14000f37f(param_2,(undefined8 *)*param_3,&local_38);
    break;
  case 0xd:
    uStack_30 = param_3[1];
    uStack_28 = *(undefined4 *)(param_3 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_38 = *param_3;
    local_20 = param_3[3];
    (**(code **)(param_1 + 0x10))(param_3[4],&local_38,*(undefined8 *)(param_1 + 8));
    *param_2 = local_38;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14012ea80 != (local_18 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_18 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

