/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119f89 */

void FUN_180119f89(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x60);
  uVar2 = *(undefined8 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x168);
  *param_1 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20),
                      (float)uVar2 - (float)uVar1);
  return;
}

