/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187733 */

void FUN_140187733(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  FUN_1401876b6();
  if (*(longlong *)(param_1 + 0x70) != param_1 + 0x88) {
    FUN_140128b39(uVar1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x58));
  FUN_1401c5830(param_1,0,0xd8);
  return;
}

