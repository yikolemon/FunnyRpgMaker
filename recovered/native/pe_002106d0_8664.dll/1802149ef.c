/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802149ef */

void FUN_1802149ef(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  undefined *puVar2;
  
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar1 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FUN_1801c9ac8();
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if ((param_3 != 0 && param_5 != '\0') &&
       ((undefined8 *)**(longlong **)(param_3 + 0x38) != (undefined8 *)0x0)) {
      param_1[0xd] = *(undefined8 *)**(longlong **)(param_3 + 0x38);
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = PTR_FUN_18033c8c8;
  param_1[0xe] = PTR_FUN_18033c8c0;
  param_1[0xf] = puVar2;
  puVar2 = PTR_FUN_18033c8d8;
  param_1[0x10] = PTR_FUN_18033c8d0;
  param_1[0x11] = puVar2;
  puVar2 = PTR_FUN_18033c8e8;
  param_1[0x12] = PTR_FUN_18033c8e0;
  param_1[0x13] = puVar2;
  puVar2 = PTR_FUN_18033c8f8;
  param_1[0x14] = PTR_FUN_18033c8f0;
  param_1[0x15] = puVar2;
  return;
}

