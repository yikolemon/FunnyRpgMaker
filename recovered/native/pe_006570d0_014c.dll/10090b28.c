/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10090b28 */

byte __fastcall FUN_10090b28(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  byte bVar4;
  byte bVar5;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  puVar3 = *(undefined2 **)(param_1 + 8);
  if (((uVar2 >> 8 & 1) == 0) && (puVar3 == *(undefined2 **)(param_1 + 0x6c))) {
    if ((char)((uVar2 & 4) >> 2) != '\0' || puVar3 == *(undefined2 **)(param_1 + 0x70)) {
      return 0;
    }
    uVar1 = *puVar3;
  }
  else {
    if (puVar3 != *(undefined2 **)(param_1 + 0x70)) {
      bVar5 = FUN_10090ec1(puVar3[-1]);
      bVar4 = FUN_10090ec1(**(undefined2 **)(param_1 + 8));
      return bVar4 ^ bVar5;
    }
    if ((uVar2 & 8) != 0) {
      return 0;
    }
    uVar1 = puVar3[-1];
  }
  bVar5 = FUN_10090ec1(uVar1);
  return bVar5;
}

