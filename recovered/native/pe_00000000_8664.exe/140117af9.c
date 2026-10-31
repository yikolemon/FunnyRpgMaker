/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140117af9 */

undefined4 FUN_140117af9(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2c8);
  puVar3 = (undefined8 *)FUN_140077ab4(0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined8 **)(param_2 + 0x90) = puVar3;
  uVar2 = FUN_14011786c(puVar3,*puVar1,param_2,*(undefined4 *)(param_1 + 0x2d0));
  if ((char)uVar2 == '\0') {
    FUN_140118171(puVar3);
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  return uVar2;
}

