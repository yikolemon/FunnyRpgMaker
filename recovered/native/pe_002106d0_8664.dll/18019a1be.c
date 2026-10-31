/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a1be */

void FUN_18019a1be(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_5 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulonglong)(param_5 - 1);
    uVar3 = uVar2;
    lVar1 = param_4;
    do {
      *(longlong *)(lVar1 + 8) = lVar1 + 0x10;
      uVar3 = uVar3 - 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar3 != 0);
  }
  *(undefined8 *)(param_4 + 8 + uVar2 * 0x10) = 0;
  *(undefined8 *)(param_1 + 3) = 1;
  *(longlong *)(param_1 + 8) = param_4;
  *(undefined4 **)(param_1 + 6) = param_1 + 10;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  FUN_18019ce46(param_1);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 0xc) = param_1 + 0xe;
  param_1[0xe] = param_2;
  param_1[0xf] = 0x40000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

