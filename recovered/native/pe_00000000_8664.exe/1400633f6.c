/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400633f6 */

byte FUN_1400633f6(longlong param_1)

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
LAB_14006345d:
      bVar5 = FUN_140063ad4(uVar1);
      return bVar5;
    }
  }
  else {
    if (puVar3 != *(undefined2 **)(param_1 + 0xd8)) {
      bVar5 = FUN_140063ad4(puVar3[-1]);
      bVar4 = FUN_140063ad4(**(undefined2 **)(param_1 + 8));
      return bVar4 ^ bVar5;
    }
    if ((uVar2 & 8) == 0) {
      uVar1 = puVar3[-1];
      goto LAB_14006345d;
    }
  }
  return 0;
}

