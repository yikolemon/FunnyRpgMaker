/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291780 */

undefined8 FUN_180291780(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar3);
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
      puVar2 = (undefined4 *)FUN_18027e66c();
      *puVar2 = 0x22;
      FUN_180290a50();
      return 0x22;
    }
    *param_1 = 0;
  }
  puVar2 = (undefined4 *)FUN_18027e66c();
  *puVar2 = 0x16;
  FUN_180290a50();
  return 0x16;
}

