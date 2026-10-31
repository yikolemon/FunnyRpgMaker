/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401632db */

void FUN_1401632db(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  longlong lVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar1 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FUN_140128a9c();
    param_1[0xd] = **(undefined8 **)(param_3 + 0x38);
    param_1[0xc] = 0;
    if (param_5 != '\0') {
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = PTR_FUN_140ea0ba0;
  param_1[0xe] = PTR_FUN_140ea0b98;
  param_1[0xf] = puVar2;
  puVar2 = PTR_FUN_140ea0bb0;
  param_1[0x10] = PTR_FUN_140ea0ba8;
  param_1[0x11] = puVar2;
  puVar2 = PTR_FUN_140ea0bc0;
  param_1[0x12] = PTR_FUN_140ea0bb8;
  param_1[0x13] = puVar2;
  puVar2 = PTR_FUN_140ea0bd0;
  param_1[0x14] = PTR_FUN_140ea0bc8;
  param_1[0x15] = puVar2;
  return;
}

