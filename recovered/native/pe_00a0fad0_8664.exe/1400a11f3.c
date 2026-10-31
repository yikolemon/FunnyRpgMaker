/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a11f3 */

void FUN_1400a11f3(undefined8 *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  for (; (param_2 != param_3 &&
         (((uVar1 = *param_2, 0x1f < uVar1 || (uVar1 == 0xd)) || (uVar1 == 10))));
      param_2 = param_2 + 1) {
  }
  puVar2 = param_2;
  if (param_2 != param_3) {
    while (puVar2 = puVar2 + 1, puVar2 != param_3) {
      uVar1 = *puVar2;
      if (((0x1f < uVar1) || (uVar1 == 0xd)) || (uVar1 == 10)) {
        *param_2 = uVar1;
        param_2 = param_2 + 1;
      }
    }
  }
  *param_1 = param_2;
  return;
}

