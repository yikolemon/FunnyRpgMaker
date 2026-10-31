/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400036b0 */

undefined8 Catch_1400036b0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140004d4a(param_2 + 0x28,*(undefined8 *)(param_2 + 0x8c0),&PTR_DAT_1401c97b0,
                        &PTR_DAT_1401c9740);
  *(undefined4 *)(param_2 + 0x8ac) = uVar1;
  return 0x14000306f;
}

