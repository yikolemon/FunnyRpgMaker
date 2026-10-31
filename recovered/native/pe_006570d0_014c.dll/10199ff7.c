/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10199ff7 */

void FUN_10199ff7(void)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = FUN_1019a0a3();
  FUN_100f95cc(0x1000,uVar1);
  uVar1 = FUN_1019a0a3();
  FUN_100f95cc(0x2000,uVar1);
  uVar1 = FUN_1019a0a3();
  FUN_100f95cc(0x4000,uVar1);
  cVar2 = FUN_1019a0a3();
  uVar1 = 1;
  if (cVar2 == '\0') {
    uVar1 = FUN_1019a0a3();
  }
  FUN_100f95cc(0x8000,uVar1);
  return;
}

