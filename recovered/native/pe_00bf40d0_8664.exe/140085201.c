/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085201 */

ulonglong FUN_140085201(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  param_1[0x220] = param_1 + 0x21e;
  param_1[0x21f] = param_1 + 0x21e;
  *(undefined4 *)(param_1 + 0x21e) = 0;
  uVar1 = FUN_140085189(param_3);
  if ((int)uVar1 == 0) {
    FUN_1400852c6((undefined1 (*) [32])(param_1 + 3),(longlong)param_3);
  }
  return uVar1 & 0xffffffff;
}

