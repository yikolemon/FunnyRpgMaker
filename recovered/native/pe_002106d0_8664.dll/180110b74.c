/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110b74 */

undefined8 FUN_180110b74(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(DAT_180419160 + 0x167c);
  if (((iVar1 == 0) || (iVar1 != *(int *)(DAT_180419160 + 0x1fe0))) ||
     (uVar2 = 1, *(int *)(DAT_180419160 + 0x16a8) == iVar1)) {
    uVar2 = 0;
  }
  return uVar2;
}

