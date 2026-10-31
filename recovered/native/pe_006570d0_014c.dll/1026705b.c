/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026705b */

undefined1 __fastcall FUN_1026705b(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[4] + 1;
  uVar4 = param_1[5] + (uint)(0xfffffffe < (uint)param_1[4]);
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  if (((param_1[2] != 0 || param_1[3] != 0) && ((uint)param_1[3] <= uVar4)) &&
     (((uint)param_1[3] < uVar4 || ((uint)param_1[2] < uVar3)))) {
    return 0;
  }
  iVar1 = __crt_stdio_input::string_input_adapter<char>::get((string_input_adapter<char> *)*param_1)
  ;
  uVar2 = (undefined1)iVar1;
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  return uVar2;
}

