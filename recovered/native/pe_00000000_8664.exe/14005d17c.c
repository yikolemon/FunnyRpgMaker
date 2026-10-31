/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005d17c */

undefined8 *
FUN_14005d17c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = 0;
  FUN_14000bb72();
  FUN_14005d374(param_1 + 7,param_2,param_5);
  param_1[0xb] = param_2;
  *(uint *)(param_1 + 0xd) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_5 = param_5 & 0x3f;
  uVar2 = 0x43baefb;
  if (1 < param_5) {
    if ((param_5 & param_5 - 1) == 0) {
      iVar1 = 0;
      if (param_5 != 0) {
        for (; (param_5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      if (iVar1 - 1U < 5) {
        param_1[0xc] = *(undefined8 *)(&DAT_1401d2dc0 + (ulonglong)(iVar1 - 1U) * 8);
        FUN_14005d412(param_1 + 7);
        goto LAB_14005d21b;
      }
    }
    uVar2 = 0;
  }
  param_1[0xc] = uVar2;
LAB_14005d21b:
  FUN_14005d41a(param_1);
  return param_1;
}

