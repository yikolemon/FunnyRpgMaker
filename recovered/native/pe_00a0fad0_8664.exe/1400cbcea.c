/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cbcea */

void FUN_1400cbcea(longlong *param_1)

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
        (**(code **)*puVar3)(puVar3,0);
        puVar3 = puVar3 + 0x19;
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
    thunk_FUN_1400ddcd0(puVar4,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

