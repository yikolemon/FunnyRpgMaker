/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402be5e2 */

void FUN_1402be5e2(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[1];
    if (puVar3 != puVar4) {
      do {
        FUN_14044b700(*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar4);
      puVar3 = (undefined8 *)*param_1;
    }
    uVar2 = param_1[2] - (longlong)puVar3;
    puVar4 = puVar3;
    if (0xfff < uVar2) {
      puVar4 = (undefined8 *)puVar3[-1];
      if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar4))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1404a2310(puVar4,uVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}

