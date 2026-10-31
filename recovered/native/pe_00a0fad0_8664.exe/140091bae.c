/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140091bae */

byte FUN_140091bae(longlong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  byte bVar4;
  byte bVar5;
  
  uVar2 = *(uint *)(param_1 + 0xe4);
  puVar3 = *(undefined2 **)(param_1 + 8);
  if (((uVar2 >> 8 & 1) == 0) && (puVar3 == *(undefined2 **)(param_1 + 0xd0))) {
    if ((char)((uVar2 & 4) >> 2) == '\0' && puVar3 != *(undefined2 **)(param_1 + 0xd8)) {
      uVar1 = *puVar3;
LAB_140091c15:
      bVar5 = FUN_14009228c(uVar1);
      return bVar5;
    }
  }
  else {
    if (puVar3 != *(undefined2 **)(param_1 + 0xd8)) {
      bVar5 = FUN_14009228c(puVar3[-1]);
      bVar4 = FUN_14009228c(**(undefined2 **)(param_1 + 8));
      return bVar4 ^ bVar5;
    }
    if ((uVar2 & 8) == 0) {
      uVar1 = puVar3[-1];
      goto LAB_140091c15;
    }
  }
  return 0;
}

