/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180087b9a */

undefined8 * FUN_180087b9a(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  *(undefined1 *)param_1 = uVar1;
  switch(uVar1) {
  case 1:
    uVar2 = FUN_180087f74(*(undefined8 *)(param_2 + 8));
    break;
  case 2:
    uVar2 = FUN_18008826e(*(undefined8 *)(param_2 + 8));
    break;
  case 3:
    uVar2 = FUN_18004477c(*(undefined8 *)(param_2 + 8));
    break;
  case 4:
    uVar2 = (ulonglong)(byte)param_2[8];
    break;
  case 5:
    uVar2 = *(ulonglong *)(param_2 + 8);
    break;
  case 6:
    uVar2 = *(ulonglong *)(param_2 + 8);
    break;
  case 7:
    uVar2 = *(ulonglong *)(param_2 + 8);
    break;
  case 8:
    uVar2 = FUN_1800447f6(*(undefined8 *)(param_2 + 8));
    break;
  default:
    goto switchD_180087bdd_default;
  }
  param_1[1] = uVar2;
switchD_180087bdd_default:
  return param_1;
}

