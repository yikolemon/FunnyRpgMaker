/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002897e */

longlong * FUN_14002897e(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = (undefined4 *)(param_3 + 0x20);
  if (puVar2 != puVar1) {
    do {
      FUN_1400065bc(puVar2 + -8);
      puVar2[-4] = puVar2[4];
      puVar2[-3] = puVar2[5];
      puVar2[-2] = puVar2[6];
      puVar2[-1] = puVar2[7];
      puVar2[-8] = *puVar2;
      puVar2[-7] = puVar2[1];
      puVar2[-6] = puVar2[2];
      puVar2[-5] = puVar2[3];
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0xf;
      *(undefined1 *)puVar2 = 0;
      puVar2 = puVar2 + 8;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  FUN_1400017de(puVar1 + -8);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x20;
  *param_2 = param_3;
  return param_2;
}

