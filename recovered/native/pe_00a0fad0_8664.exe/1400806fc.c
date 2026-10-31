/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400806fc */

undefined8 * FUN_1400806fc(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 extraout_XMM0_Da;
  undefined1 local_60 [36];
  undefined1 local_3c [4];
  longlong local_38 [4];
  
  local_38[3] = 0xfffffffffffffffe;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  cVar1 = FUN_140082ca4(0,param_3,local_38,local_3c);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    goto LAB_14008080c;
  }
  if (*(char *)(local_38[0] + 1) == 'P') {
    if (*(byte *)(local_38[0] + 5) == 0x55) {
      *(undefined4 *)(param_1 + 0xa4) = 2;
      FUN_140083508(extraout_XMM0_Da,param_2,local_38);
      goto LAB_14008080c;
    }
    if (0x56 < *(byte *)(local_38[0] + 5)) {
      *(undefined4 *)(param_1 + 0xa4) = 3;
      FUN_14000169c(local_60,"NOT POSSIBLE FOR WolfRPG v3.5");
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      FUN_14005872a(param_2);
      FUN_1400017de(local_60);
      goto LAB_14008080c;
    }
  }
  *(undefined4 *)(param_1 + 0xa4) = 1;
  FUN_14008362e(param_1,param_2,local_38);
LAB_14008080c:
  FUN_140016e5c(local_38);
  return param_2;
}

